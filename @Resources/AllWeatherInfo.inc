[WeatherCondition]
measure=Plugin
Plugin=WebParser
URL=[WeatherAll]
StringIndex=1
RegExp=(?siU).*<cc>.*<t>(.*)</t>.*d="0".*p="n".*<t>(.*)</t>.*<bt>(.*)</bt>.*d="1".*p="d".*<t>(.*)</t>.*<bt>(.*)</bt>.*p="n".*<t>(.*)</t>.*<bt>(.*)</bt>.*d="2".*p="d".*<t>(.*)</t>.*<bt>(.*)</bt>.*p="n".*<t>(.*)</t>.*<bt>(.*)</bt>.*d="3".*p="d".*<t>(.*)</t>.*<bt>(.*)</bt>.*p="n".*<t>(.*)</t>.*<bt>(.*)</bt>.*d="4".*p="d".*<t>(.*)</t>.*<bt>(.*)</bt>.*p="n".*<t>(.*)</t>.*<bt>(.*)</bt>.*d="5".*p="d".*<t>(.*)</t>.*<bt>(.*)</bt>.*p="n".*<t>(.*)</t>.*<bt>(.*)</bt>.*d="6".*p="d".*<t>(.*)</t>.*<bt>(.*)</bt>.*p="n".*<t>(.*)</t>.*<bt>(.*)</bt>.*d="7".*p="d".*<t>(.*)</t>.*<bt>(.*)</bt>.*p="n".*<t>(.*)</t>.*<bt>(.*)</bt>.*d="8".*p="d".*<t>(.*)</t>.*<bt>(.*)</bt>.*p="n".*<t>(.*)</t>.*<bt>(.*)</bt>.*d="9".*p="d".*<t>(.*)</t>.*<bt>(.*)</bt>.*p="n".*<t>(.*)</t>.*<bt>(.*)</bt>.*d="10".*p="d".*<t>(.*)</t>.*<bt>(.*)</bt>.*p="n".*<t>(.*)</t>.*<bt>(.*)</bt>.*

[WeatherCurrent]
measure=Plugin
Plugin=WebParser
URL=[WeatherAll]
StringIndex=1
RegExp=(?siU).*<cc>.*<tmp>(.*)</tmp>.*<flik>(.*)</flik>.*<t>(.*)</t>.*<icon>(.*)</icon>.*<r>(.*)</r>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*<hmid>(.*)</hmid>.*<vis>(.*)</vis>.*<i>(.*)</i>.*<t>(.*)</t>.*<dewp>(.*)</dewp>.*<icon>(.*)</icon>.*<t>(.*)</t>.*<day d="0".*<hi>(.*)</hi>.*<low>(.*)</low>.*

[WeatherIcon]
measure=Plugin
Plugin=WebParser
URL=[WeatherAll]
StringIndex=1
RegExp=(?siU).*<cc>.*<icon>(.*)</icon>.*<moon>.*<icon>(.*)</icon>.*p="n".*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*

[WeatherLocation]
measure=Plugin
Plugin=WebParser
URL=[WeatherAll]
StringIndex=1
RegExp=(?siU).*loc id="(.*)">.*<dnam>(.*),.*</dnam>.*<lat>(.*)</lat>.*<lon>(.*)</lon>.*<sunr>(.*)</sunr>.*<suns>(.*)</suns>.*<zone>(.*)</zone>.*

[WeatherTemperature]
measure=Plugin
Plugin=WebParser
URL=[WeatherAll]
StringIndex=1
RegExp=(?siU).*<ut>(.*)</ut>.*<tmp>(.*)</tmp>.*<flik>(.*)</flik>.*<day d="0".*<hi>(.*)</hi>.*<low>(.*)</low>.*<day d="1".*<hi>(.*)</hi>.*<low>(.*)</low>.*<day d="2".*<hi>(.*)</hi>.*<low>(.*)</low>.*<day d="3".*<hi>(.*)</hi>.*<low>(.*)</low>.*<day d="4".*<hi>(.*)</hi>.*<low>(.*)</low>.*<day d="5".*<hi>(.*)</hi>.*<low>(.*)</low>.*<day d="6".*<hi>(.*)</hi>.*<low>(.*)</low>.*<day d="7".*<hi>(.*)</hi>.*<low>(.*)</low>.*<day d="8".*<hi>(.*)</hi>.*<low>(.*)</low>.*<day d="9".*<hi>(.*)</hi>.*<low>(.*)</low>.*<day d="10".*<hi>(.*)</hi>.*<low>(.*)</low>.*

[WeatherWind]
measure=Plugin
Plugin=WebParser
URL=[WeatherAll]
StringIndex=1
RegExp=(?siU).*<us>(.*)</us>.*<cc>.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*<day d="0".*p="d".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*p="n".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*<day d="1".*p="d".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*p="n".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*<day d="2".*p="d".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*p="n".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*<day d="3".*p="d".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*p="n".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*<day d="4".*p="d".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*p="n".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*<day d="5".*p="d".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*p="n".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*<day d="6".*p="d".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*p="n".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*<day d="7".*p="d".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*p="n".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*<day d="8".*p="d".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*p="n".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*<day d="9".*p="d".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*p="n".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*<day d="10".*p="d".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*p="n".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*

[WeatherAtmosphere]
measure=Plugin
Plugin=WebParser
URL=[WeatherAll]
StringIndex=1
RegExp=(?siU).*<up>(.*)</up>.*<cc>.*<bar>.*<r>(.*)</r>.*<hmid>(.*)</hmid>.*<vis>(.*)</vis>.*<dewp>(.*)</dewp>.*<day d="0".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*p="n".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*<day d="1".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*p="n".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*<day d="2".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*p="n".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*<day d="3".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*p="n".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*<day d="4".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*p="n".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*<day d="5".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*p="n".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*<day d="6".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*p="n".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*<day d="7".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*p="n".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*<day d="8".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*p="n".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*<day d="9".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*p="n".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*<day d="10".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*p="n".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*

[WeatherTime]
measure=Plugin
Plugin=WebParser
URL=[WeatherAll]
StringIndex=1
RegExp=(?siU).*<day d="0" t="(.*)".*dt="(.*)".*<sunr>(.*)</sunr>.*<suns>(.*)</suns>.*<day d="1" t="(.*)".*dt="(.*)".*<sunr>(.*)</sunr>.*<suns>(.*)</suns>.*<day d="2" t="(.*)".*dt="(.*)".*<sunr>(.*)</sunr>.*<suns>(.*)</suns>.*<day d="3" t="(.*)".*dt="(.*)".*<sunr>(.*)</sunr>.*<suns>(.*)</suns>.*<day d="4" t="(.*)".*dt="(.*)".*<sunr>(.*)</sunr>.*<suns>(.*)</suns>.*<day d="5" t="(.*)".*dt="(.*)".*<sunr>(.*)</sunr>.*<suns>(.*)</suns>.*<day d="6" t="(.*)".*dt="(.*)".*<sunr>(.*)</sunr>.*<suns>(.*)</suns>.*<day d="7" t="(.*)".*dt="(.*)".*<sunr>(.*)</sunr>.*<suns>(.*)</suns>.*<day d="8" t="(.*)".*dt="(.*)".*<sunr>(.*)</sunr>.*<suns>(.*)</suns>.*<day d="9" t="(.*)".*dt="(.*)".*<sunr>(.*)</sunr>.*<suns>(.*)</suns>.*<day d="10" t="(.*)".*dt="(.*)".*<sunr>(.*)</sunr>.*<suns>(.*)</suns>

[WeatherSevereAlert]
measure=Plugin
Plugin=WebParser
URL=[WeatherAll]
StringIndex=1
RegExp=(?siU).*<swa>.*<t>(.*)</t>.*<l>(.*)</l>.*

[WeatherMeta]
measure=Plugin
Plugin=WebParser
URL=[WeatherAll]
StringIndex=1
RegExp=(?siU).*ver="(.*)".*<locale>(.*)</locale>.*<form>(.*)</form>.*<cc>.*<lsup>(.*)</lsup>.*<obst>(.*)</obst>.*<lsup>(.*)</lsup>.*

[Day0Condition]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=1

[Day0ConditionNight]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=2

[Day0ConditionNightBrief]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=3

[Day1Condition]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=4

[Day1ConditionBrief]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=5

[Day1ConditionNight]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=6

[Day1ConditionNightBrief]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=7

[Day2Condition]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=8

[Day2ConditionBrief]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=9

[Day2ConditionNight]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=10

[Day2ConditionNightBrief]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=11

[Day3Condition]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=12

[Day3ConditionBrief]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=13

[Day3ConditionNight]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=14

[Day3ConditionNightBrief]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=15

[Day4Condition]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=16

[Day4ConditionBrief]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=17

[Day4ConditionNight]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=18

[Day4ConditionNightBrief]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=19

[Day5Condition]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=20

[Day5ConditionBrief]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=21

[Day5ConditionNight]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=22

[Day5ConditionNightBrief]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=23

[Day6Condition]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=24

[Day6ConditionBrief]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=25

[Day6ConditionNight]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=26

[Day6ConditionNightBrief]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=27

[Day7Condition]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=28

[Day7ConditionBrief]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=29

[Day7ConditionNight]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=30

[Day7ConditionNightBrief]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=31

[Day8Condition]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=32

[Day8ConditionBrief]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=33

[Day8ConditionNight]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=34

[Day8ConditionNightBrief]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=35

[Day9Condition]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=36

[Day9ConditionBrief]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=37

[Day9ConditionNight]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=38

[Day9ConditionNightBrief]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=39

[Day10Condition]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=40

[Day10ConditionBrief]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=41

[Day10ConditionNight]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=42

[Day10ConditionNightBrief]
Measure=Plugin
Plugin=WebParser
URL=[WeatherCondition]
StringIndex=43

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

[Day0Icon]
Measure=Plugin
Plugin=WebParser
URL=[WeatherIcon]
StringIndex=1

[Day0NightIcon]
Measure=Plugin
Plugin=WebParser
URL=[WeatherIcon]
StringIndex=3

[Day1Icon]
Measure=Plugin
Plugin=WebParser
URL=[WeatherIcon]
StringIndex=4

[Day1NightIcon]
Measure=Plugin
Plugin=WebParser
URL=[WeatherIcon]
StringIndex=5

[Day2Icon]
Measure=Plugin
Plugin=WebParser
URL=[WeatherIcon]
StringIndex=6

[Day2NightIcon]
Measure=Plugin
Plugin=WebParser
URL=[WeatherIcon]
StringIndex=7

[Day3Icon]
Measure=Plugin
Plugin=WebParser
URL=[WeatherIcon]
StringIndex=8

[Day3NightIcon]
Measure=Plugin
Plugin=WebParser
URL=[WeatherIcon]
StringIndex=9

[Day4Icon]
Measure=Plugin
Plugin=WebParser
URL=[WeatherIcon]
StringIndex=10

[Day4NightIcon]
Measure=Plugin
Plugin=WebParser
URL=[WeatherIcon]
StringIndex=11

[Day5Icon]
Measure=Plugin
Plugin=WebParser
URL=[WeatherIcon]
StringIndex=12

[Day5NightIcon]
Measure=Plugin
Plugin=WebParser
URL=[WeatherIcon]
StringIndex=13

[Day6Icon]
Measure=Plugin
Plugin=WebParser
URL=[WeatherIcon]
StringIndex=14

[Day6NightIcon]
Measure=Plugin
Plugin=WebParser
URL=[WeatherIcon]
StringIndex=15

[Day7Icon]
Measure=Plugin
Plugin=WebParser
URL=[WeatherIcon]
StringIndex=16

[Day7NightIcon]
Measure=Plugin
Plugin=WebParser
URL=[WeatherIcon]
StringIndex=17

[Day8Icon]
Measure=Plugin
Plugin=WebParser
URL=[WeatherIcon]
StringIndex=18

[Day8NightIcon]
Measure=Plugin
Plugin=WebParser
URL=[WeatherIcon]
StringIndex=19

[Day9Icon]
Measure=Plugin
Plugin=WebParser
URL=[WeatherIcon]
StringIndex=20

[Day9NightIcon]
Measure=Plugin
Plugin=WebParser
URL=[WeatherIcon]
StringIndex=21

[Day10Icon]
Measure=Plugin
Plugin=WebParser
URL=[WeatherIcon]
StringIndex=22

[Day10NightIcon]
Measure=Plugin
Plugin=WebParser
URL=[WeatherIcon]
StringIndex=23

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

[TemperatureUnit]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTemperature]
StringIndex=1

[CurrentTemp]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTemperature]
StringIndex=2

[CurrentFeelsLike]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTemperature]
StringIndex=3

[CurrentHighTemp]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTemperature]
StringIndex=4

[CurrentLowTemp]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTemperature]
StringIndex=5

[Day0HighTemp]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTemperature]
StringIndex=4

[Day0LowTemp]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTemperature]
StringIndex=5

[Day1HighTemp]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTemperature]
StringIndex=6

[Day1LowTemp]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTemperature]
StringIndex=7

[Day2HighTemp]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTemperature]
StringIndex=8

[Day2LowTemp]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTemperature]
StringIndex=9

[Day3HighTemp]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTemperature]
StringIndex=10

[Day3LowTemp]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTemperature]
StringIndex=11

[Day4HighTemp]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTemperature]
StringIndex=12

[Day4LowTemp]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTemperature]
StringIndex=13

[Day5HighTemp]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTemperature]
StringIndex=14

[Day5LowTemp]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTemperature]
StringIndex=15

[Day6HighTemp]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTemperature]
StringIndex=16

[Day6LowTemp]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTemperature]
StringIndex=17

[Day7HighTemp]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTemperature]
StringIndex=18

[Day7LowTemp]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTemperature]
StringIndex=19

[Day8HighTemp]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTemperature]
StringIndex=20

[Day8LowTemp]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTemperature]
StringIndex=21

[Day9HighTemp]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTemperature]
StringIndex=22

[Day9LowTemp]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTemperature]
StringIndex=23

[Day10HighTemp]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTemperature]
StringIndex=24

[Day10LowTemp]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTemperature]
StringIndex=25

[SpeedUnit]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=1

[CurrentWindSpeed]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=2

[CurrentWindGust]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=3

[CurrentWindAngle]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=4

[CurrentWindBearing]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=5

[Day0WindSpeed]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=6

[Day0WindGust]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=7

[Day0WindAngle]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=8

[Day0WindBearing]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=9

[Day0NightWindSpeed]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=10

[Day0NightWindGust]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=11

[Day0NightWindAngle]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=12

[Day0NightWindBearing]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=13

[Day1WindSpeed]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=14

[Day1WindGust]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=15

[Day1WindAngle]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=16

[Day1WindBearing]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=17

[Day1NightWindSpeed]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=18

[Day1NightWindGust]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=19

[Day1NightWindAngle]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=20

[Day1NightWindBearing]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=21

[Day2WindSpeed]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=22

[Day2WindGust]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=23

[Day2WindAngle]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=24

[Day2WindBearing]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=25

[Day2NightWindSpeed]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=26

[Day2NightWindGust]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=27

[Day2NightWindAngle]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=28

[Day2NightWindBearing]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=29

[Day3WindSpeed]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=30

[Day3WindGust]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=31

[Day3WindAngle]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=32

[Day3WindBearing]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=33

[Day3NightWindSpeed]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=34

[Day3NightWindGust]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=35

[Day3NightWindAngle]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=36

[Day3NightWindBearing]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=37

[Day4WindSpeed]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=38

[Day4WindGust]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=39

[Day4WindAngle]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=40

[Day4WindBearing]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=41

[Day4NightWindSpeed]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=42

[Day4NightWindGust]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=43

[Day4NightWindAngle]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=44

[Day4NightWindBearing]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=45

[Day5WindSpeed]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=46

[Day5WindGust]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=47

[Day5WindAngle]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=48

[Day5WindBearing]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=49

[Day5NightWindSpeed]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=50

[Day5NightWindGust]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=51

[Day5NightWindAngle]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=52

[Day5NightWindBearing]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=53

[Day6WindSpeed]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=54

[Day6WindGust]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=55

[Day6WindAngle]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=56

[Day6WindBearing]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=57

[Day6NightWindSpeed]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=58

[Day6NightWindGust]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=59

[Day6NightWindAngle]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=60

[Day6NightWindBearing]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=61

[Day7WindSpeed]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=62

[Day7WindGust]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=63

[Day7WindAngle]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=64

[Day7WindBearing]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=65

[Day7NightWindSpeed]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=66

[Day7NightWindGust]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=67

[Day7NightWindAngle]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=68

[Day7NightWindBearing]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=69

[Day8WindSpeed]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=70

[Day8WindGust]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=71

[Day8WindAngle]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=72

[Day8WindBearing]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=73

[Day8NightWindSpeed]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=74

[Day8NightWindGust]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=75

[Day8NightWindAngle]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=76

[Day8NightWindBearing]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=77

[Day9WindSpeed]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=78

[Day9WindGust]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=79

[Day9WindAngle]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=80

[Day9WindBearing]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=81

[Day9NightWindSpeed]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=82

[Day9NightWindGust]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=83

[Day9NightWindAngle]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=84

[Day9NightWindBearing]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=85

[Day10WindSpeed]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=86

[Day10WindGust]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=87

[Day10WindAngle]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=88

[Day10WindBearing]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=89

[Day10NightWindSpeed]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=90

[Day10NightWindGust]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=91

[Day10NightWindAngle]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=92

[Day10NightWindBearing]
Measure=Plugin
Plugin=WebParser
URL=[WeatherWind]
StringIndex=93

[PressureUnit]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=1

[Day0PrecipitationChance]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=6

[Day0Humidity]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=7

[Day0NightPrecipitationChance]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=8

[Day0NightHumidity]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=9

[Day1PrecipitationChance]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=10

[Day1Humidity]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=11

[Day1NightPrecipitationChance]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=12

[Day1NightHumidity]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=13

[Day2PrecipitationChance]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=14

[Day2Humidity]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=15

[Day2NightPrecipitationChance]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=16

[Day2NightHumidity]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=17

[Day3PrecipitationChance]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=18

[Day3Humidity]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=19

[Day3NightPrecipitationChance]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=20

[Day3NightHumidity]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=21

[Day4PrecipitationChance]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=22

[Day4Humidity]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=23

[Day4NightPrecipitationChance]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=24

[Day4NightHumidity]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=25

[Day5PrecipitationChance]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=26

[Day5Humidity]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=27

[Day5NightPrecipitationChance]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=28

[Day5NightHumidity]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=29

[Day6PrecipitationChance]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=30

[Day6Humidity]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=31

[Day6NightPrecipitationChance]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=32

[Day6NightHumidity]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=33

[Day7PrecipitationChance]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=34

[Day7Humidity]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=35

[Day7NightPrecipitationChance]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=36

[Day7NightHumidity]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=37

[Day8PrecipitationChance]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=38

[Day8Humidity]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=39

[Day8NightPrecipitationChance]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=40

[Day8NightHumidity]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=41

[Day9PrecipitationChance]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=42

[Day9Humidity]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=43

[Day9NightPrecipitationChance]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=44

[Day9NightHumidity]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=45

[Day10PrecipitationChance]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=46

[Day10Humidity]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=47

[Day10NightPrecipitationChance]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=48

[Day10NightHumidity]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=49

[Day0Name]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=1

[Day0Date]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=2

[Day0Sunrise]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=3

[Day0Sunset]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=4

[Day1Name]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=5

[Day1Date]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=6

[Day1Sunrise]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=7

[Day1Sunset]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=8

[Day2Name]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=9

[Day2Date]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=10

[Day2Sunrise]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=11

[Day2Sunset]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=12

[Day3Name]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=13

[Day3Date]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=14

[Day3Sunrise]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=15

[Day3Sunset]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=16

[Day4Name]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=17

[Day4Date]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=18

[Day4Sunrise]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=19

[Day4Sunset]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=20

[Day5Name]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=21

[Day5Date]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=22

[Day5Sunrise]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=23

[Day5Sunset]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=24

[Day6Name]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=25

[Day6Date]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=26

[Day6Sunrise]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=27

[Day6Sunset]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=28

[Day7Name]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=29

[Day7Date]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=30

[Day7Sunrise]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=31

[Day7Sunset]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=32

[Day8Name]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=33

[Day8Date]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=34

[Day8Sunrise]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=35

[Day8Sunset]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=36

[Day9Name]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=37

[Day9Date]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=38

[Day9Sunrise]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=39

[Day9Sunset]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=40

[Day10Name]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=41

[Day10Date]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=42

[Day10Sunrise]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=43

[Day10Sunset]
Measure=Plugin
Plugin=WebParser
URL=[WeatherTime]
StringIndex=44

[SevereAlert]
Measure=Plugin
Plugin=WebParser
URL=[WeatherSevereAlert]
StringIndex=1

[SevereAlertLink]
Measure=Plugin
Plugin=WebParser
URL=[WeatherSevereAlert]
StringIndex=2

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