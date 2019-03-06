[WeatherAtmosphere]
measure=Plugin
Plugin=WebParser
URL=[WeatherAll]
StringIndex=1
RegExp=(?siU).*<up>(.*)</up>.*<cc>.*<bar>.*<r>(.*)</r>.*<hmid>(.*)</hmid>.*<vis>(.*)</vis>.*<dewp>(.*)</dewp>.*<day d="0".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*p="n".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*<day d="1".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*p="n".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*<day d="2".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*p="n".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*<day d="3".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*p="n".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*<day d="4".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*p="n".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*<day d="5".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*p="n".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*<day d="6".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*p="n".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*<day d="7".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*p="n".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*<day d="8".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*p="n".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*<day d="9".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*p="n".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*<day d="10".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*p="n".*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*

[PressureUnit]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=1

[CurrentPressure]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=2

[CurrentHumidity]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=3

[CurrentVisibility]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=4

[CurrentDewPoint]
Measure=Plugin
Plugin=WebParser
URL=[WeatherAtmosphere]
StringIndex=5

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