#readme

> this file is easier to read on Notepad if you press ALT+O and enable Word Wrap.


-----   Table of Contents  -----
I.    Overview
II.   How it works
III.  Intended Usage
IV.   File List


-----   Overview   -----
     "Modular Weather Parsing" is a way to quickly and easily get weather data into Rainmeter. The aim for this project is to open up the possibility of weather-based skins to beginners, as well as saving time and simplifying weather implementation or more advanced users.

-----   How it works   -----
     There are two things that allow this skin to work. The first is WebParser, which is a built-in plugin that can download web pages. This skin uses WebParser to download html source from a weather.com page. Only a small portion of the html source is useful (the actual weather data). It then uses an option called "RegExp=" to search and capture words at specific locations on the page.

     Just as an example, "RegExp= <temp>(.*)<\/temp>" will tell WebParser to find "<temp>" and capture until it encounters "</temp>". If the web page had looked like: <temp>54°</temp>, it would have captured "54°", which is important data we can use.

     Every capture gets a numerical identifier called "StringIndex" corresponding to the order that it was captured by WebParser. The RegExp in this skin has 60 captures, which I have assigned to descriptively named [Measures].

> TL;DR: WebParser downloads html code from weather.com, picks out 60 relevant words, and assigns each to a "StringIndex" number. I have made each word accessible via named [Measures].
