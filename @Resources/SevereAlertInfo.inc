[WeatherSevereAlert]
measure=Plugin
Plugin=WebParser
URL=[WeatherAll]
StringIndex=1
RegExp=(?siU).*<swa>.*<t>(.*)</t>.*<l>(.*)</l>.*

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