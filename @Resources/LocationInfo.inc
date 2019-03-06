[WeatherLocation]
measure=Plugin
Plugin=WebParser
URL=[WeatherAll]
StringIndex=1
RegExp=(?siU).*loc id="(.*)">.*<dnam>(.*),.*</dnam>.*<lat>(.*)</lat>.*<lon>(.*)</lon>.*<sunr>(.*)</sunr>.*<suns>(.*)</suns>.*<zone>(.*)</zone>.*

[LocationID]
Measure=Plugin
Plugin=WebParser
URL=[WeatherLocation]
StringIndex=1

[LocationName]
Measure=Plugin
Plugin=WebParser
URL=[WeatherLocation]
StringIndex=2

[LocationLatitude]
Measure=Plugin
Plugin=WebParser
URL=[WeatherLocation]
StringIndex=3

[LocationLongitude]
Measure=Plugin
Plugin=WebParser
URL=[WeatherLocation]
StringIndex=4

[SunriseTime]
Measure=Plugin
Plugin=WebParser
URL=[WeatherLocation]
StringIndex=5

[SunsetTime]
Measure=Plugin
Plugin=WebParser
URL=[WeatherLocation]
StringIndex=6

[LocationTimeZone]
Measure=Plugin
Plugin=WebParser
URL=[WeatherLocation]
StringIndex=7