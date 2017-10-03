rm_modular_weather
==================

Table of Contents
-----------------  
1.   Overview  
2.  How it Works  
  2.1. WebParser and RegExp  
  2.2. @include
3. Walkthrough  
4.  Tutorial  
  4.1. Picking Data  
  4.2. Implementing in Your Skins


Overview
--------  
  "Modular Weather Parsing" is a way to quickly and easily get weather data into Rainmeter. The aims for this project are to open up the possibility of weather-based skins to beginners, as well as to save time and simplify weather implementation for more advanced users.  

How it Works  
------------  

#### WebParser
There are two things that allow this skin to work. The first is WebParser, which is a built-in plugin that can download web pages. This skin uses WebParser to download html source from a weather.com page. Only a small portion of the html source is the actual weather data. The option `RegExp=` searches and captures words at specific locations on the page.  

 Just as an example, `RegExp= <temp>(.*)<\/temp>` will tell WebParser to find `<temp>` and capture until it encounters `</temp>`. If the web page had looked like: `<temp>54°</temp>`, it would have captured __54°__, which is important data we can use.  

 Every capture gets a numerical identifier called `StringIndex`, corresponding to the order that it was captured by WebParser. The RegExp in this skin has 60 captures, which are assigned to descriptively named [Measures].  

 > TL;DR: WebParser downloads html code from weather.com, picks out 60 relevant words, and assigns each to a "StringIndex" number.  

 With only WebParser, if you knew that you wanted the _"forecasted low temperature for tomorrow"_, you could copy the [Measure] that I've already created that says:  

 ```
 [Day2LowTemp]  
 Measure=Plugin  
 Plugin=WebParser  
 URL=[WeatherSite]  
 StringIndex=26  
 ```  
However, there is a better way:  

#### @Include  
The second feature of this skin is `@include`. Instead of copy/pasting code into your skin, simply `@include` one of the __.inc__ files from the __@Resources__ folder to gain access to all of the [Measures] inside it. This takes a total of: __1 line of code__. Continuing with our _"forecasted low temperature for tomorrow"_ example:  

```  
[GetTemps]  
@include=#@#TemperatureInfo.ini  
```  
will give your skin access to:  

|        | Current | Day 1 | Day 2 | ... | Day 5 |  
|:------:|:-------:|:-----:|:-----:|:---:|:-----:|    
|__High__|[CurrentHighTemp]|[Day1HighTemp]|[Day2HighTemp]|...|[Day5HighTemp]|
| __Low__|[CurrentLowTemp] |[Day1LowTemp]|[Day2LowTemp]|...|[Day5LowTemp]|

Now, access the data you want with `[Day2HighTemp]`.  
More on this later on in the readme.  


> TL;DR: You can import the premade [Measures] instead of trying to guess which StringIndex holds the data that you want. It only takes 1 line of code.  

Walkthrough  
-----------  
> I assume that you have understood the section above (in a basic sense).  

>TL;DR: WebParser downloads html code from weather.com, picks out 60 relevant words, and assigns each to a "StringIndex" number. You can import premade [Measures] instead of trying to guess which StringIndex holds the data that you want. It only takes 1 line of code.  

1. Load the __rm_modular_weather__ skin. (click the Rainmeter icon from your taskbar and Load it from there)  
2. Click on _[Click to view data in the Log]_ to see what data is loaded.  
  2.1. In the Log, the name of the [Measure] is on the left and the data value is on the right  
  2.2. By default, __AllWeatherInfo.inc__ is used in this skin. This loads _all 60_ possible data values.  
3. Right-click on the skin and choose __Edit skin__. Scroll to the bottom of the code.  
4. Find the line under __[GetAll]__ that says `@include=#@#AllWeatherInfo.inc`  
  4.1. `#@#` is interpreted by Rainmeter as the __@Resources__ folder for this skin.  
  4.2. Click on _[Click to open @Resources]_ and choose a __.inc__ that has info that you would want.   
  4.3. Back in the code, replace `AllWeatherInfo.inc` with the filename you picked.  
5. Save the document, refresh the skin, and view the Log.  
  5.1. There should be fewer values than before, since __AllWeatherInfo__ isn't being loaded.  


Tutorial  
-------

#### Choosing your data  
1. Get to __@Resources__.  
2. Make a copy of one of the __.inc__ files which has most of the data you'd want.  
3. Delete any [Measures] that you don't want to include.  
4. Copy/paste any [Measures] that you want from other __.inc__ (__AllWeatherInfo.inc__ has all of them)  
5. Save your __.inc__ and then rename it to something new.  
6. Use the method from the walkthrough to check your __.inc__ with the Log  

#### Implementing in skins    
1. Make sure your skin has a __@Resources__ folder in its main directory  
2. Copy GrabWeather.inc to your __@Resources__ (this is mandatory)  
3. Copy the other __.inc__ files you want to your __@Resources__  
4. In your code, create two variables: `LocationCode` and `TempUnit`.  
  4.1. Get your `LocationCode` from [weather.codes](https://weather.codes/)  
  4.2. Choose `F` or `M`, meaning Fahrenheit or Metric.  
5. In your code, make a [Measure] called `[GetModularWeather]`.  
  5.1. Use `@include` to bring in __GrabWeather.inc__ and your other __.inc__ files.  
  5.2. [Tutorial on @include](https://docs.rainmeter.net/tips/include-guide/)  
6. Access the data using the [Measures] as normal.  
7. Save and refresh your skin.  
