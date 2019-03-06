[WeatherTemperature]
measure=Plugin
Plugin=WebParser
URL=[WeatherAll]
StringIndex=1
RegExp=(?siU).*<ut>(.*)</ut>.*<tmp>(.*)</tmp>.*<flik>(.*)</flik>.*<day d="0".*<hi>(.*)</hi>.*<low>(.*)</low>.*<day d="1".*<hi>(.*)</hi>.*<low>(.*)</low>.*<day d="2".*<hi>(.*)</hi>.*<low>(.*)</low>.*<day d="3".*<hi>(.*)</hi>.*<low>(.*)</low>.*<day d="4".*<hi>(.*)</hi>.*<low>(.*)</low>.*<day d="5".*<hi>(.*)</hi>.*<low>(.*)</low>.*<day d="6".*<hi>(.*)</hi>.*<low>(.*)</low>.*<day d="7".*<hi>(.*)</hi>.*<low>(.*)</low>.*<day d="8".*<hi>(.*)</hi>.*<low>(.*)</low>.*<day d="9".*<hi>(.*)</hi>.*<low>(.*)</low>.*<day d="10".*<hi>(.*)</hi>.*<low>(.*)</low>.*

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