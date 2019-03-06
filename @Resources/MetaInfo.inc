[WeatherMeta]
measure=Plugin
Plugin=WebParser
URL=[WeatherAll]
StringIndex=1
RegExp=(?siU).*ver="(.*)".*<locale>(.*)</locale>.*<form>(.*)</form>.*<cc>.*<lsup>(.*)</lsup>.*<obst>(.*)</obst>.*<lsup>(.*)</lsup>.*

[XML Version]
Measure=Plugin
Plugin=WebParser
URL=[WeatherMeta]
StringIndex=1

[Locale]
Measure=Plugin
Plugin=WebParser
URL=[WeatherMeta]
StringIndex=2

[Form]
Measure=Plugin
Plugin=WebParser
URL=[WeatherMeta]
StringIndex=3

[CurrentLastUpdate]
Measure=Plugin
Plugin=WebParser
URL=[WeatherMeta]
StringIndex=4

[OBST]
Measure=Plugin
Plugin=WebParser
URL=[WeatherMeta]
StringIndex=5

[ForecastLastUpdate]
Measure=Plugin
Plugin=WebParser
URL=[WeatherMeta]
StringIndex=6