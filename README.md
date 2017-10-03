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
There are two things that allow this skin to work. The first is WebParser, which is a built-in plugin that can download web pages. This skin uses WebParser to download html source from a _weather.com_ page. Only a small portion of the html source is the actual weather data. The option `RegExp=` searches and captures words at specific locations on the page.  

 Just as an example, `RegExp= <temp>(.*)<\/temp>` will tell WebParser to find `<temp>` and capture until it encounters `</temp>`. If the web page had looked like: `<temp>54°</temp>`, it would have captured __54°__, which is important data we can use.  

 Every capture gets a numerical identifier called `StringIndex`, corresponding to the order that it was captured by WebParser. The RegExp in this skin has 60 captures, which are assigned to descriptively named [Measures].
