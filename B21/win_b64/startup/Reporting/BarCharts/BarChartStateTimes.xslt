<?xml version="1.0" encoding="UTF-8"?>
<!--Style Sheet to Convert XML file to StateTimes Bar Chart-->
<!--
	Copyright 2006 DELMIA Corp
	
	Style Sheet to Convert XML file to StateTimes Bar Chart 
	
	The style sheet works on the XML file generated by Reporting
	The Style sheet requires an Input in the form of a Selected Resource, upon selection it
	displays the State Times of a Resource - Busy Time, Idle Time
-->
<xsl:stylesheet version="1.0" xmlns="http://www.w3.org/2000/svg"
                              xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
  <xsl:output method="html"/>
  <xsl:param name="HeightParam"/>
  <xsl:param name="WidthParam"/>
  <xsl:param name="RunNumber"/>
  <xsl:param name="ToolTipParam"/>
  <xsl:param name="ResourceList"/>
  <xsl:param name="AnnotationParam"/>
  <xsl:param name="SortOnValueParam"/>
  <xsl:param name="NumberOfResources"/>
  <xsl:param name="ColorParam"/>

  <!--
	    NOTE:-
	    HeightParam and WidthParam is the height and width of the SVG
	    chartHeight and chartWidth is the Height and width of the chart
	-->
  <xsl:variable name="chartHeight">
    <xsl:value-of select="$HeightParam * 0.75"/>
  </xsl:variable>
  <xsl:variable name="chartWidth">
    <xsl:value-of select="$WidthParam * 0.75"/>
  </xsl:variable>

  <!-- ======= Finding the highest value of the Busy and Idle Times ======= -->
  <xsl:variable name="verticalBusyRangeMax">
    <xsl:for-each select="/SystemStatistics/Run[@RunNumber=$RunNumber]//BUSY_PROCESSING">
      <xsl:sort order="descending" data-type="number" select="text()"/>
      <xsl:if test="position() = 1">
        <xsl:value-of select="."/>
      </xsl:if>
    </xsl:for-each>
  </xsl:variable>

  <xsl:variable name="verticalIdleRangeMax">
    <xsl:for-each select="/SystemStatistics/Run[@RunNumber=$RunNumber]//IDLE">
      <xsl:sort order="descending" data-type="number" select="text()"/>
      <xsl:if test="position() = 1">
        <xsl:value-of select="."/>
      </xsl:if>
    </xsl:for-each>
  </xsl:variable>

  <xsl:variable name="verticalRangeMax">
    <xsl:if test="$verticalBusyRangeMax &gt; $verticalIdleRangeMax">
      <xsl:value-of select="$verticalBusyRangeMax"/>
    </xsl:if>
    <xsl:if test="$verticalIdleRangeMax &gt; $verticalBusyRangeMax">
      <xsl:value-of select="$verticalIdleRangeMax"/>
    </xsl:if>
    <xsl:if test="$verticalIdleRangeMax = $verticalBusyRangeMax">
      <xsl:value-of select="$verticalBusyRangeMax"/>
    </xsl:if>
  </xsl:variable>

  <!-- ======= Getting the number of resources (which is the max horizontal range) ======= -->
  <xsl:variable name="horizontalRangeMax" select="$NumberOfResources"/>

  <xsl:variable name="verticalScale" select="($chartHeight * 0.8) div $verticalRangeMax"/>
  <xsl:variable name="horizontalScale" select="$chartWidth div $horizontalRangeMax"/>

  <!-- ===== This Variable is used to draw annotations on the X Axis ===== -->
  <xsl:variable name="xValue" select="$horizontalScale div 2"/>

  <xsl:variable name="barWidth" select="$horizontalScale div 3"/>
  <xsl:variable name="busyBarStartDistance" select="$horizontalScale div 6"/>
  <xsl:variable name="idleBarStartDistance" select="$busyBarStartDistance + $barWidth"/>

  <!-- Always draw 10 grid lines for each chart -->
  <xsl:variable name="singleGridUnit" select="$chartHeight div 10"/>

  <xsl:variable name="chartStartX">45</xsl:variable>

  <!-- Getting the Busy and Idle Time Color from the Color Param input variable-->
  <!-- NOTE : We cant modify a global variable once created. Hence below
	            we are using new variables in each line -->
  <xsl:variable name="BusyRed" select="substring-before($ColorParam,';')"/>
  <xsl:variable name="tempBusyGreen" select="substring-after($ColorParam,';')"/>
  <xsl:variable name="BusyGreen" select="substring-before($tempBusyGreen,';')"/>
  <xsl:variable name="tempBusyBlue" select="substring-after($tempBusyGreen,';')"/>
  <xsl:variable name="BusyBlue" select="substring-before($tempBusyBlue,';')"/>

  <xsl:variable name="tempIdleRed" select="substring-after($tempBusyBlue,';')"/>
  <xsl:variable name="IdleRed" select="substring-before($tempIdleRed,';')"/>
  <xsl:variable name="tempIdleGreen" select="substring-after($tempIdleRed,';')"/>
  <xsl:variable name="IdleGreen" select="substring-before($tempIdleGreen,';')"/>
  <xsl:variable name="tempIdleBlue" select="substring-after($tempIdleGreen,';')"/>
  <xsl:variable name="IdleBlue" select="substring-before($tempIdleBlue,';')"/>

  <!--<defs>
	<linearGradient id="orange_red" x1="0%" y1="0%" x2="100%" y2="0%">
	    <stop offset="0%" style="stop-color:rgb(225,175,75);stop-opacity:1"/>
	    <stop offset="100%" style="stop-color:rgb(125,100,25);stop-opacity:1"/>
        </linearGradient>
	</defs> -->

  <xsl:template match="SystemStatistics">
    <svg id="body" style="overflow:visible;enable-background:new " width="{$WidthParam}" 
         height="{$HeightParam}" viewBox = "-50 0 {$WidthParam + 40} {$HeightParam + 40}" 
         xml:space="preserve" perserveAspectRatio="xMinYMin meet">
		  <title>Bar Chart</title>
      
	    <!-- ===== Checking params ====== -->
	    <xsl:comment>
	      Height of SVG = <xsl:value-of select="$HeightParam"/>
	    </xsl:comment>
	    <xsl:comment>
	      Width of SVG = <xsl:value-of select="$WidthParam"/>
	    </xsl:comment>
	    <xsl:comment>
	      ToolTip JavaScript Path = <xsl:value-of select="$ToolTipParam"/>
	    </xsl:comment>
	    <xsl:comment>
	      Resource List (Semi Colon separated) = <xsl:value-of select="$ResourceList"/>
	    </xsl:comment>
	    <xsl:comment>
	      Annotation Check Box Value = <xsl:value-of select="$AnnotationParam"/>
	    </xsl:comment>	
	    <xsl:comment>
	      Color Param = <xsl:value-of select="$ColorParam"/>
	    </xsl:comment>	

	    <g id="barChart" class="legend" style="text-anchor:start" stroke="none" clip-rule="evenodd" 
         fill-rule="evenodd" transform="translate(-40,40)" stroke-width="1" stroke-linecap="round" 
         stroke-linejoin="round" stroke-miterlimit="10">
	      <g id="GridAndLegend" style="stroke:none;">
		      <g stroke="black">

		        <xsl:comment>========Floor and Wall ========</xsl:comment>
		        <text stroke="black" font-size="20" transform="translate({$chartStartX + 5},-10)">Bar Chart for Busy Time and Idle Time</text>
		        <path d="M {$chartStartX}, {$chartHeight + 15} l 15,-15 v -{$chartHeight} l -15,15 z" 
                      fill="lightgray" stroke="black"/>	<!-- Left Side of the Wall -->
		        <path d="M {$chartStartX + 15}, {$chartHeight} v -{$chartHeight} h {$chartWidth} v {$chartHeight} z" 
                      fill="lightgray" stroke="black"/><!-- Back Side of the Wall -->
		        <path d="M {$chartStartX}, {$chartHeight + 15} l 15,-15 h {$chartWidth} l -15,15 z" 
                      fill="darkgray" stroke="black"/> <!-- Floor -->
  		 
		        <!-- ===== Checking values ====== -->
		        <xsl:comment>
			        Height of SVG = <xsl:value-of select="$HeightParam"/>
		        </xsl:comment>
		        <xsl:comment>
			        Width of SVG = <xsl:value-of select="$WidthParam"/>
		        </xsl:comment>
		        <xsl:comment>
			        Chart Height = <xsl:value-of select="$chartHeight"/>
		        </xsl:comment>
		        <xsl:comment>
			        Chart Width = <xsl:value-of select="$chartWidth"/>
		        </xsl:comment>
		        <xsl:comment>
			        Horizontal range max = <xsl:value-of select="$horizontalRangeMax"/>
		        </xsl:comment>
		        <xsl:comment>
			        Vertical range max = <xsl:value-of select="$verticalRangeMax"/>
		        </xsl:comment>
		        <xsl:comment>
			        Horizontal SCALE = <xsl:value-of select="$horizontalScale"/>
		        </xsl:comment>
		        <xsl:comment>
			        Vertical SCALE = <xsl:value-of select="$verticalScale"/>
		        </xsl:comment>
		        <xsl:comment>
			        X Value = <xsl:value-of select="$xValue"/>
		        </xsl:comment>
		        <xsl:comment>
			        Bar Width = <xsl:value-of select="$barWidth"/>
		        </xsl:comment>
		        <xsl:comment>
			        Busy Bar Start Distance = <xsl:value-of select="$busyBarStartDistance"/>
		        </xsl:comment>
		        <xsl:comment>
			        Idle Bar Start Distance = <xsl:value-of select="$idleBarStartDistance"/>
		        </xsl:comment>
		        <xsl:comment>
			        Color Param = <xsl:value-of select="$ColorParam"/>
		        </xsl:comment>
		        <xsl:comment>
			        Busy Red = <xsl:value-of select="$BusyRed"/>
		        </xsl:comment>
		        <xsl:comment>
			        Busy Green = <xsl:value-of select="$BusyGreen"/>
		        </xsl:comment>
		        <xsl:comment>
			        Busy Blue = <xsl:value-of select="$BusyBlue"/>
		        </xsl:comment>
		        <xsl:comment>
			        Idle Red = <xsl:value-of select="$IdleRed"/>
		        </xsl:comment>
		        <xsl:comment>
			        Idle Green = <xsl:value-of select="$IdleGreen"/>
		        </xsl:comment>
		        <xsl:comment>
			        Idle Blue = <xsl:value-of select="$IdleBlue"/>
		        </xsl:comment>
		        <xsl:comment>
			        Single Grid Unit = <xsl:value-of select="$singleGridUnit"/>
		        </xsl:comment>
  		    

		        <xsl:comment>======= Axis lines =======</xsl:comment>
		        <path d="M {$chartStartX}, {$chartHeight + 15} h {$chartWidth}"/>
		        <path d="M {chartStartX}, {$chartHeight + 15} v -{$chartHeight}"/>
  		   
		        <xsl:comment>======= Drawing Horizontal Grid Lines and Annotations ======</xsl:comment>
		        <g style="fill:none;">
		          <xsl:if test="$verticalScale &gt; 0">
				        <xsl:call-template name="GridLines">
					        <xsl:with-param name="ParamY" select="$chartHeight + 15"/>
					        <xsl:with-param name="GridValue" select="0"/>
				        </xsl:call-template>
			        </xsl:if>
		        </g>

		        <xsl:comment>========Setting Bottom Grid Ticks ========</xsl:comment>
  		    
		        <xsl:comment>========Drawing the last tick at the bottom axis========</xsl:comment> 
		        <path d="M {$chartWidth + $chartStartX},{$chartHeight + 15} v 5"/>
		        <xsl:comment>========Drawing remaining ticks at the bottom axis==========</xsl:comment>
		        <xsl:call-template name="GridTicks">
				      <xsl:with-param name="x" select="$chartWidth div $horizontalRangeMax"/>
		        </xsl:call-template>
		      </g>

		      <xsl:comment>========Annotations for X Axis ========</xsl:comment>
		      <text transform="translate(0 ,{$chartHeight + 15})  rotate(-90)">Busy and Idle Time in Seconds</text>

		      <!--<xsl:if test="$SortOnValueParam = 'TRUE'">
			      <xsl:comment>
				      Sort ON VALUE is CHOSEN!!!!
			      </xsl:comment>
			      <xsl:for-each select="Run/Resources/Resource">
				      <xsl:sort order="descending" data-type="number" select="StateTimes/BusyTime"/>
				      <xsl:comment>
					      Resource ID = <xsl:value-of select="@id"/>
				      </xsl:comment>
      				
				      <xsl:call-template name="Tokenize1">
					      <xsl:with-param name="newResourceList" select="$ResourceList"/>
					      <xsl:with-param name="resID" select="@id"/>
					      <xsl:with-param name="position" select="position()"/>
				      </xsl:call-template>
			      </xsl:for-each>
		      </xsl:if>-->
      		
		      <!-- Tokenize the ResourceList variable and call the Resource
		           Template for each element -->
		      <xsl:if test="$SortOnValueParam = 'FALSE'">
			      <xsl:comment>
				      Sort ON VALUE is FALSE!!!!
			      </xsl:comment>
      			
			      <xsl:call-template name="Tokenize">
				      <xsl:with-param name="newResourceList" select="$ResourceList"/>
				      <xsl:with-param name="position" select="1"/>
			      </xsl:call-template>
		      </xsl:if>

		      <xsl:comment>========Creating Legend for Bar chart========</xsl:comment>
		      <g style="fill:rgb({$BusyRed}, {$BusyGreen}, {$BusyBlue}); stroke-width: 0.9180;stroke-linecap:butt; stroke-linejoin:miter; stroke-dasharray:none">
		          <path d="M {$chartWidth + $chartStartX + 35},{$chartHeight + 15} v -40 h 10 v 40 h -10"/>
		          <text transform="translate( {$chartWidth + $chartStartX + 35 + 20}, {$chartHeight + 15 - 20})">BusyTime</text>
		      </g>
		      <g style="fill:rgb({$IdleRed}, {$IdleGreen}, {$IdleBlue}); stroke-width: 0.9180;stroke-linecap:butt; stroke-linejoin:miter; stroke-dasharray:none">
		          <path d="M {$chartWidth + $chartStartX + 35},{$chartHeight + 15 - 60} v -40 h 10 v 40 h -10"/>
		          <text transform="translate({$chartWidth + $chartStartX + 35 + 20}, {$chartHeight + 15 - 20 - 60})">IdleTime</text>
		      </g>
	      </g>
	    </g>
    </svg>
  </xsl:template>

  <!--<xsl:template name="Tokenize1">
	    <xsl:param name="newResourceList"/>
	    <xsl:param name="resID"/>
	    <xsl:param name="position"/>

		<xsl:comment>
			Entering TOKENIZE11111!!!!
		</xsl:comment>
			
	    <xsl:variable name="ResourceToken" select="substring-before($newResourceList,';')"/>
	    
	    <xsl:comment>
			resID = <xsl:value-of select="$resID"/>
			ResourceToken = <xsl:value-of select="$ResourceToken"/>
			Position = <xsl:value-of select="$position"/>
		</xsl:comment>

		<xsl:if test="$resID = $ResourceToken">
			<xsl:comment>
				Entering IF 11111!!!!
			</xsl:comment>
		
			<xsl:apply-templates select="../Resource[@id=$ResourceToken]">
				<xsl:with-param name="position" select="$position"/>
			</xsl:apply-templates>	
		</xsl:if>
				
	    <xsl:variable name="newResourceList" select="substring-after($newResourceList,';')"/>
	    
		<xsl:comment>
			ResourceToken AFTER!!! = <xsl:value-of select="$newResourceList"/>
		</xsl:comment>

		<xsl:if test="string-length($newResourceList) &gt; 0">
			<xsl:call-template name="Tokenize1">
				<xsl:with-param name="newResourceList" select="$newResourceList"/>
				<xsl:with-param name="resID" select="$resID"/>
				<xsl:with-param name="position" select="$position"/>
			</xsl:call-template>
		</xsl:if>
		
	</xsl:template>-->

  <!-- #######################################################################                        
		Tokenize Template 

		This template is a template that runs recursively running
		through each element in the ResourceList variable and for each
		element it calls the 'Resource' template
	 ####################################################################### -->
  <xsl:template name="Tokenize">
    <xsl:param name="newResourceList"/>
    <xsl:param name="position"/>

    <xsl:variable name="ResourceToken" select="substring-before($newResourceList,';')"/>

    <xsl:for-each select="/SystemStatistics/Run[@RunNumber=$RunNumber]/Resources/*/*">
      <xsl:if test="@Name=$ResourceToken">
        <xsl:call-template name="Resource">
          <xsl:with-param name="position" select="$position"/>
        </xsl:call-template>
      </xsl:if>
    </xsl:for-each>

    <xsl:variable name="newTmpResourceList" select="substring-after($newResourceList,';')"/>

    <xsl:if test="string-length($newTmpResourceList) &gt; 0">
      <xsl:call-template name="Tokenize">
        <xsl:with-param name="newResourceList" select="$newTmpResourceList"/>
        <xsl:with-param name="position" select="$position + 1"/>
      </xsl:call-template>
    </xsl:if>
  </xsl:template>

  <!-- #######################################################################                        
		GridLines Template 

		This template is used to draw the grid lines of the graph
		This template is called recursively to draw each grid line
	 ####################################################################### -->

  <xsl:template name="GridLines">
    <xsl:param name="ParamY"/>
    <xsl:param name="GridValue"/>

    <xsl:if test="$ParamY &gt; $singleGridUnit">

      <path d="M {$chartStartX},{$ParamY} l 15 -15 h {$chartWidth}"/>
      <path d="M {$chartStartX},{$ParamY} h -5"/>
      <text stroke="black" font-size="11" transform="translate(5,{$ParamY})">
        <xsl:value-of select="floor($GridValue * 100) div 100"/>
      </text>

      <xsl:call-template name="GridLines">
        <xsl:with-param name="ParamY" select="$ParamY - $singleGridUnit"/>
        <xsl:with-param name="GridValue" select="$GridValue + ($singleGridUnit div $verticalScale)"/>
      </xsl:call-template>
    </xsl:if>
  </xsl:template>

  <!-- #######################################################################                        
		GridTicks Template 

		This template is used to draw the grid ticks at the bottom of the graph
		This template is called recursively to draw each grid tick
	 ####################################################################### -->

  <xsl:template name="GridTicks">
    <xsl:param name="x"/>

    <xsl:if test="$x &lt; $chartWidth">
      <path d="M {$x + $chartStartX},{$chartHeight + 15} v 5"/>

      <xsl:call-template name="GridTicks">
        <xsl:with-param name="x" select="$x + ($chartWidth div $horizontalRangeMax)"/>
      </xsl:call-template>
    </xsl:if>
  </xsl:template>

  <!--  #######################################################################                        
		Resource Template                    
	#######################################################################	-->

  <xsl:template name="Resource">
    <xsl:param name="position"/>

    <xsl:comment>
      Resource Number = <xsl:value-of select="$position"/>
      Resource ID = <xsl:value-of select="@Name"/>
      Position = <xsl:value-of select="$position"/>
      BusyTime = <xsl:value-of select="./BUSY_PROCESSING"/>
      IdleTime = <xsl:value-of select="./IDLE"/>
    </xsl:comment>

    <xsl:call-template name="AnnotationX">
      <xsl:with-param name="position" select="$position"/>
      <xsl:with-param name="id" select="@Name"/>
    </xsl:call-template>

    <xsl:for-each select="StateTimes">
      <xsl:if test="(./BUSY_PROCESSING &gt; 0) or (./BUSY_PROCESSING = 0)">
        <xsl:call-template name="DrawBusyBarChart">
          <xsl:with-param name="position" select="$position"/>
          <xsl:with-param name="BusyTime" select="./BUSY_PROCESSING"/>
        </xsl:call-template>
      </xsl:if>
      <xsl:if test="(./IDLE &gt; 0) or (./IDLE = 0)">
        <xsl:call-template name="DrawIdleBarChart">
          <xsl:with-param name="position" select="$position"/>
          <xsl:with-param name="IdleTime" select="./IDLE"/>
        </xsl:call-template>
      </xsl:if>
    </xsl:for-each>
  </xsl:template>

  <!--  #######################################################################                        
		AnnotationX Template                    
      #######################################################################	-->

  <xsl:template name="AnnotationX">
    <xsl:param name="position"/>
    <xsl:param name="id"/>

    <xsl:variable name="temp" select="$horizontalScale * ($position - 1)"/>

    <xsl:comment>========Annotations for X Axis ========</xsl:comment>

    <xsl:if test="$xValue &lt; $chartWidth">
      <text transform="translate({$xValue + $temp + $chartStartX}, {$chartHeight + 15 + 10})  rotate(45)">
        <xsl:value-of select="$id"/>
      </text>
    </xsl:if>
  </xsl:template>

  <!-- #######################################################################                        
		DrawBusyBarChart Template 

		This template is used to draw the Busy Time bar graph for a
		resource
	 ####################################################################### -->

  <xsl:template name="DrawBusyBarChart">
    <xsl:param name="position"/>
    <xsl:param name="BusyTime"/>

    <xsl:variable name="busyBarStartDistance" select="$busyBarStartDistance + ($horizontalScale * ($position - 1))"/>
    <xsl:variable name="barHeight" select="$BusyTime * $verticalScale"/>
    <xsl:variable name="tempX" select="$chartStartX + $busyBarStartDistance + $barWidth"/>
    <xsl:variable name="tempY" select="$chartHeight + 15 - $barHeight"/>
    <xsl:variable name="textX" select="$chartStartX + ($busyBarStartDistance) + 15"/>
    <xsl:variable name="textY" select="$chartHeight + 15 - ($barHeight) - 15 - 5"/>

    <xsl:comment>====== Drawing Busy Bar Chart ======</xsl:comment>
    <path d="M {$tempX},{$tempY} l 15,-15 v {$barHeight} l -15,15 z" stroke="black" 
          fill="rgb({$BusyRed - 80}, {$BusyGreen - 80}, {$BusyBlue - 80})"/> <!-- Right Side of Bar -->
    <path d="M {$tempX},{$tempY} h -{$barWidth} l 15,-15 h {$barWidth} z" stroke="black" 
          fill="rgb({$BusyRed - 40}, {$BusyGreen - 40}, {$BusyBlue - 40})"/> <!-- Top Side of Bar -->
    <path d="M {$tempX},{$tempY} h -{$barWidth} v {$barHeight} h {$barWidth} z" stroke="black"
          fill="rgb({$BusyRed}, {$BusyGreen}, {$BusyBlue})"/> <!-- Front Side of Bar -->
    <text transform="translate( {$textX} , {$textY})">
      <xsl:value-of select="$BusyTime"/>
    </text>

    <xsl:comment>
      Annotation Param = <xsl:value-of select="$AnnotationParam"/>
    </xsl:comment>

    <xsl:if test="$AnnotationParam = 'TRUE'">
      <xsl:comment>
        Annotation option is CHECKED!!!!
      </xsl:comment>
      <xsl:variable name="AnnotX" select="$chartStartX + ($busyBarStartDistance) + ($barWidth div 2) - 15"/>
      <xsl:variable name="AnnotY" select="$chartHeight + 15 - ($barHeight div 2) + 10"/>

      <text transform="translate({$AnnotX} , {$AnnotY})">
        <xsl:value-of select="$BusyTime"/>
      </text>
    </xsl:if>

  </xsl:template>


  <!-- #######################################################################                        
		DrawIdleBarChart Template 

		This template is used to draw the Idle Time Bar Graph for a
		Resource
	 ####################################################################### -->

  <xsl:template name="DrawIdleBarChart">
    <xsl:param name="position"/>
    <xsl:param name="IdleTime"/>

    <xsl:variable name="idleBarStartDistance" select="$idleBarStartDistance + ($horizontalScale * ($position - 1))"/>
    <xsl:variable name="barHeight" select="$IdleTime * $verticalScale"/>
    <xsl:variable name="tempX" select="$chartStartX + $idleBarStartDistance + $barWidth"/>
    <xsl:variable name="tempY" select="$chartHeight + 15 - $barHeight"/>
    <xsl:variable name="textX" select="$chartStartX + ($idleBarStartDistance) + 15"/>
    <xsl:variable name="textY" select="$chartHeight + 15 - $barHeight - 15 - 5"/>

    <xsl:comment>====== Drawing Idle Bar Chart ======</xsl:comment>
    <path d="M {$tempX},{$tempY} l 15,-15 v {$barHeight} l -15,15 z" stroke="black" 
          fill="rgb({$IdleRed - 80}, {$IdleGreen - 80}, {$IdleBlue - 80})"/> <!-- Right Side of Bar -->
    <path d="M {$tempX},{$tempY} h -{$barWidth} l 15,-15 h {$barWidth} z" stroke="black" 
          fill="rgb({$IdleRed - 40}, {$IdleGreen - 40}, {$IdleBlue - 40})"/> <!-- Top Side of Bar -->
    <path d="M {$tempX},{$tempY} h -{$barWidth} v {$barHeight} h {$barWidth} z" stroke="black" 
          fill="rgb({$IdleRed}, {$IdleGreen}, {$IdleBlue})"/> <!-- Front Side of Bar -->
    <text transform="translate( {$textX} , {$textY})">
      <xsl:value-of select="$IdleTime"/>
    </text>

    <xsl:comment>
      Annotation Param = <xsl:value-of select="$AnnotationParam"/>
    </xsl:comment>

    <xsl:if test="$AnnotationParam = 'TRUE'">
      <xsl:comment>
        Annotation option is CHECKED!!!!
      </xsl:comment>
      <xsl:variable name="AnnotX" select="$chartStartX + ($idleBarStartDistance) + ($barWidth div 2) - 15"/>
      <xsl:variable name="AnnotY" select="$chartHeight + 15 - ($barHeight div 2) + 10"/>

      <text transform="translate({$AnnotX} , {$AnnotY})">
        <xsl:value-of select="$IdleTime"/>
      </text>
    </xsl:if>

  </xsl:template>
</xsl:stylesheet>
