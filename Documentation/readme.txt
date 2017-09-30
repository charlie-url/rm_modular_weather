#readme

> this file is easier to read on Notepad if you press ALT+O and enable Word Wrap.


-----   Table of Contents  -----
I.    Overview
II.   How it works
III.  Walkthrough
IV.   Tutorial


-----   Overview   -----
     "Modular Weather Parsing" is a way to quickly and easily get weather data into Rainmeter. The aim for this project is to open up the possibility of weather-based skins to beginners, as well as saving time and simplifying weather implementation or more advanced users.


-----   How it works   -----
     There are two things that allow this skin to work. The first is WebParser, which is a built-in plugin that can download web pages. This skin uses WebParser to download html source from a weather.com page. Only a small portion of the html source is useful (the actual weather data). It then uses an option called "RegExp=" to search and capture words at specific locations on the page.

     Just as an example, "RegExp= <temp>(.*)<\/temp>" will tell WebParser to find "<temp>" and capture until it encounters "</temp>". If the web page had looked like: <temp>54°</temp>, it would have captured "54°", which is important data we can use.

     Every capture gets a numerical identifier called "StringIndex" corresponding to the order that it was captured by WebParser. The RegExp in this skin has 60 captures, which I have assigned to descriptively named [Measures].

> TL;DR: WebParser downloads html code from weather.com, picks out 60 relevant words, and assigns each to a "StringIndex" number.

     With only WebParser, if you knew that you wanted the "forecasted low temperature for tomorrow", you could copy the [Measure] that I've already created that says...

[Day2LowTemp]
Measure=Plugin
Plugin=WebParser
URL=[WeatherSite]
StringIndex=26

! ! ! BUT WAIT, IT'S EASIER THAN THAT ! ! !

     The second feature of this skin is "@include". Instead of copy/pasting code into your skin, simply @include one of the .inc files from the @Resources folder to gain access to all of the [Measures] inside it. This takes a grand total of: 1 line of code! Continuing with our "forecasted low temperature for tomorrow" example,...

[GetTemps5Days]
@include=#@#HighLowOnly.ini

     ...will give your skin access to: [CurrentHighTemp], [CurrentLowTemp], [Day1HighTemp], [Day1LowTemp], [Day2HighTemp], .... , [Day5LowTemp]. Now, access the data you want with "[Day2HighTemp]".

> TL;DR: You can import my premade [Measures] instead of trying to guess which StringIndex holds the data that you want. It only takes 1 line of code.


-----   Walkthrough   -----
> I assume that you have understood the section above (in a basic sense).

>TL;DR: WebParser downloads html code from weather.com, picks out 60 relevant words, and assigns each to a "StringIndex" number. You can import my premade [Measures] instead of trying to guess which StringIndex holds the data that you want. It only takes 1 line of code.

1. Load the rm_modular_weather skin. (click the Rainmeter icon from your taskbar and Load it from there)
2. Click on "[Click to view data in the Log]" to see what data is loaded.
2.1 In the Log, the name of the [Measure] is on the left and the data value is on the right
2.2. By default, AllWeatherInfo.inc is used in this skin. This loads all 60 possible data values.
3. Right-click on the skin and choose "Edit skin". Scroll to the bottom of the code.
4. Find the line under [GetAll] that says "@include=#@#AllWeatherInfo.inc"
4.1 "#@#" is interpreted by Rainmeter as the @Resources folder for this skin.
4.2 Click on "[Click to open @Resources]" and choose a .inc that has info that you would want. (ex. LocationInfo has information about LocationID, LocationName, Sunrise, and Sunset)
4.3 Back in the code, replace "AllWeatherInfo.inc" with the filename you picked.
5. Save the document, refresh the skin, and view the Log.
5.1 There should be less values than before, since AllWeatherInfo isn't the one being loaded.


-----   Tutorial   ------
> I assume that you have done the walkthrough (successfully).

Picking specific weather data for your skin:
1. Get to @Resources.
2. Make a copy of one of the .inc files which has most of the data you'd want.
3. Delete any [Measures] that you don't want to include.
4. Copy/paste any [Measures] that you want from other .inc (AllWeatherInfo.inc has all of them)
5. Save your .inc and then rename it to something new.
6. Use the method from the tutorial to check your .inc with the Log

Implementing weather data in your skin:
1. Make sure your skin has a @Resources folder in its main directory
2. Copy GrabWeather.inc to your @Resources (this is mandatory)
3. Copy the other .inc files you want to your @Resources
4. In your code, make a [Measure] called [GetModularWeather] and use @include to bring in GrabWeather.inc and your other .inc files.
4.1 Tutorial here: https://docs.rainmeter.net/tips/include-guide/
5. Access the data using the [Measures] as normal.
6. Save and refresh your skin.
