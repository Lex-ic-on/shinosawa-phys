<?xml version="1.0" encoding="UTF-8"?>
<!-- オリジナル: https://seuzo.net/entry/2012/01/25/140954

ReVIEWのためのXSL例
2012-01-25	とりあえず
2012-03-02	修正
 -->


<xsl:transform
	version="1.0"
	xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
	xmlns:aid="http://ns.adobe.com/AdobeInDesign/4.0/"
	xmlns:aid5="http://ns.adobe.com/AdobeInDesign/5.0/"
	exclude-result-prefixes="aid"
>
	<xsl:output method="xml" indent="no" media-type="text/xml"/>

	<!-- 改行のための変数 -->
	<xsl:variable name="myReturn">
		<xsl:text>
</xsl:text>	<!-- ここはインデントミスではない。xsl:text内でタブインデントすると出力もインデントしてしまうため消した。 -->
	</xsl:variable>


	<!-- ルート -->
	<xsl:template match="/">
		<xsl:element name="aid:doc">
			<xsl:apply-templates />
		</xsl:element>
	</xsl:template>

	<xsl:template match="doc">
		<xsl:apply-templates />
	</xsl:template>




	<!-- title見出しまわり。pstyleをそのまま要素名にする -->
	<xsl:template match="title">
		<xsl:for-each select=".">
			<xsl:element name="{@aid:pstyle}">
				<xsl:copy-of select="node()" />
			</xsl:element>
			<xsl:value-of select="$myReturn" />
		</xsl:for-each>
	</xsl:template>


	<!-- lead内段落 -->
	<xsl:template match="lead">
		<xsl:for-each select="p">
			<xsl:element name="lead">
				<xsl:copy-of select="node()" />
			</xsl:element>
		</xsl:for-each>
	</xsl:template>

	<!-- column -->
	<xsl:template match="column">
		<xsl:element name="column">
			<xsl:element name="column-title">
				<xsl:copy-of select="title/node()" />
			</xsl:element>
			<xsl:value-of select="$myReturn" />
			<xsl:for-each select="p">
				<xsl:element name="column-p">
					<xsl:copy-of select="node()" />
				</xsl:element>
				<xsl:value-of select="$myReturn" />
			</xsl:for-each>
		</xsl:element>
	</xsl:template>


	<!-- codelist（通常のlist） -->
	<xsl:template match="codelist">
		<xsl:element name="codelist-caption">
			<xsl:copy-of select="caption/node()" />
		</xsl:element>
		<xsl:value-of select="$myReturn" />
		<xsl:element name="codelist-pre">
			<xsl:copy-of select="pre/node()" />
		</xsl:element>
	</xsl:template>


	<!-- codelist （参照なしのemlist）-->
	<xsl:template match="list[@type='emlist']">
		<xsl:element name="codelist-caption">
			<xsl:copy-of select="caption/node()" />
		</xsl:element>
		<xsl:value-of select="$myReturn" />
		<xsl:element name="codelist-pre">
			<xsl:copy-of select="pre/node()" />
		</xsl:element>
	</xsl:template>


	<!-- 箇条リスト -->
	<xsl:template match="ul">
	<xsl:variable name="myCount_li" select="count(li)" /><!-- li要素の数を変数に -->
		<xsl:for-each select="li">
			<xsl:element name="list">
				<xsl:attribute name="current_no"><xsl:value-of select="position()" /></xsl:attribute>
				<xsl:attribute name="total_no"><xsl:value-of select="$myCount_li" /></xsl:attribute>
				<xsl:copy-of select="node()" />
			</xsl:element>
			<xsl:value-of select="$myReturn" />
		</xsl:for-each>
	</xsl:template>

	<!-- 番号つきリスト -->
	<xsl:template match="ol">
	<xsl:variable name="myCount_li" select="count(li)" /><!-- li要素の数を変数に -->
		<xsl:for-each select="li">
			<xsl:element name="ordered_list">
				<xsl:attribute name="current_no"><xsl:value-of select="position()" /></xsl:attribute>
				<xsl:attribute name="total_no"><xsl:value-of select="$myCount_li" /></xsl:attribute>
				<xsl:copy-of select="node()" />
			</xsl:element>
			<xsl:value-of select="$myReturn" />
		</xsl:for-each>
	</xsl:template>

	<!-- 箇条リスト -->
	<xsl:template match="dl">
	<xsl:element name="{local-name()}">
		<xsl:variable name="myCount_dd" select="count(dd)" /><!-- dd要素の数を変数に -->
			<xsl:for-each select="dt | dd">
				<xsl:element name="{local-name()}">
					<xsl:copy-of select="node()" />
				</xsl:element>
				<xsl:value-of select="$myReturn" />
			</xsl:for-each>
		</xsl:element>
	</xsl:template>


	<!-- 画像とキャプション -->
	<xsl:template match="img">
		<xsl:copy-of select="Image" />
		<xsl:value-of select="$myReturn" />
		<xsl:if test="caption">
			<xsl:element name="img-caption">
				<xsl:copy-of select="caption/node()" />
			</xsl:element>
			<xsl:value-of select="$myReturn" />
		</xsl:if>
	</xsl:template>

	<!-- 数式画像 -->
	<xsl:template match="equationimage">
		<xsl:element name="displayequation">
		<xsl:copy-of select="Image" />
		<xsl:if test="caption">
			<xsl:element name="img-caption">
				<xsl:copy-of select="caption/node()" />
			</xsl:element>
		</xsl:if>
		</xsl:element>
		<xsl:value-of select="$myReturn" />
	</xsl:template>

	<!-- 引用（中のタグを外して改行） -->
	<xsl:template match="quote">
			<xsl:element name="quote">
				<xsl:copy-of select="p/node()" />
			</xsl:element>
			<xsl:value-of select="$myReturn" />
	</xsl:template>

	<!-- 後注（中のタグを外して改行） -->
	<xsl:template match="endnotes">
		<xsl:value-of select="$myReturn" />
		<xsl:for-each select="endnote">
			<xsl:element name="endnote">
				<xsl:copy-of select="node()" />
			</xsl:element>
			<xsl:value-of select="$myReturn" />
		</xsl:for-each>
	</xsl:template>

	<!-- 表組み（改行） -->
	<xsl:template match="table">
        <xsl:if test="caption">
            <xsl:copy-of select="caption" />
        <xsl:value-of select="$myReturn" />
        </xsl:if>
        <xsl:element name="table">
            <xsl:copy-of select="tbody/@aid:table"/>
            <xsl:copy-of select="tbody/@aid:trows"/>
            <xsl:copy-of select="tbody/@aid:tcols"/>
            <xsl:value-of select="$myReturn" />
            <xsl:for-each select="//td">
                <xsl:element name="cell">
                    <!-- <xsl:copy-of select="@xyh" /> -->
                    <xsl:copy-of select="@aid:table" />
                    <xsl:copy-of select="@aid:crows" />
                    <xsl:copy-of select="@aid:ccols" />
                    <xsl:copy-of select="@aid:ccolwidth" />
                    <xsl:choose>
                        <xsl:when test="@aid:theader">
                            <xsl:copy-of select="@aid:theader" />
                            <xsl:attribute name="aid5:cellstyle">headercell</xsl:attribute>
                            <xsl:attribute name="aid:pstyle">tableheader</xsl:attribute>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:attribute name="aid5:cellstyle">bodycell</xsl:attribute>
                            <xsl:attribute name="aid:pstyle">tablebody</xsl:attribute>
                        </xsl:otherwise>
                    </xsl:choose>
                    <xsl:copy-of select="node()" />
                </xsl:element>
                <xsl:value-of select="$myReturn" />
            </xsl:for-each>
        </xsl:element>
        <xsl:value-of select="$myReturn" />
	</xsl:template>

	<!-- 本文（改行） -->
	<xsl:template match="p">
			<xsl:copy-of select="." />
			<xsl:value-of select="$myReturn" />
	</xsl:template>

	<!-- インデントなし本文（改行） -->
	<xsl:template match="noindentp">
			<xsl:copy-of select="." />
			<xsl:value-of select="$myReturn" />
	</xsl:template>

</xsl:transform>
