[WeatherCurrent]
measure=Plugin
Plugin=WebParser
URL=[WeatherAll]
StringIndex=1
RegExp=(?siU).*<cc>.*<tmp>(.*)</tmp>.*<flik>(.*)</flik>.*<t>(.*)</t>.*<icon>(.*)</icon>.*<r>(.*)</r>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*<hmid>(.*)</hmid>.*<vis>(.*)</vis>.*<i>(.*)</i>.*<t>(.*)</t>.*<dewp>(.*)</dewp>.*<icon>(.*)</icon>.*<t>(.*)</t>.*<day d="0".*<hi>(.*)</hi>.*<low>(.*)</low>.*

[CurrentTemp]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCurrent]
StringIndex=1

[CurrentFeelsLike]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCurrent]
StringIndex=2

[CurrentCondition]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCurrent]
StringIndex=3

[CurrentIcon]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCurrent]
StringIndex=4

[CurrentPressure]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCurrent]
StringIndex=5

[CurrentWindSpeed]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCurrent]
StringIndex=6

[CurrentWindGust]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCurrent]
StringIndex=7

[CurrentWindAngle]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCurrent]
StringIndex=8

[CurrentWindBearing]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCurrent]
StringIndex=9

[CurrentHumidity]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCurrent]
StringIndex=10

[CurrentVisibility]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCurrent]
StringIndex=11

[CurrentUVIndex]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCurrent]
StringIndex=12

[CurrentUVIntensity]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCurrent]
StringIndex=13

[CurrentDewPoint]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCurrent]
StringIndex=14

[CurrentMoonIcon]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCurrent]
StringIndex=15

[CurrentMoonPhase]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCurrent]
StringIndex=16

[CurrentHighTemp]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCurrent]
StringIndex=17

[CurrentLowTemp]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCurrent]
StringIndex=18
