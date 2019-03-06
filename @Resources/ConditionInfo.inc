[WeatherCondition]
measure=Plugin
Plugin=WebParser
URL=[WeatherAll]
StringIndex=1
RegExp=(?siU).*<cc>.*<t>(.*)</t>.*d="0".*p="n".*<t>(.*)</t>.*<bt>(.*)</bt>.*d="1".*p="d".*<t>(.*)</t>.*<bt>(.*)</bt>.*p="n".*<t>(.*)</t>.*<bt>(.*)</bt>.*d="2".*p="d".*<t>(.*)</t>.*<bt>(.*)</bt>.*p="n".*<t>(.*)</t>.*<bt>(.*)</bt>.*d="3".*p="d".*<t>(.*)</t>.*<bt>(.*)</bt>.*p="n".*<t>(.*)</t>.*<bt>(.*)</bt>.*d="4".*p="d".*<t>(.*)</t>.*<bt>(.*)</bt>.*p="n".*<t>(.*)</t>.*<bt>(.*)</bt>.*d="5".*p="d".*<t>(.*)</t>.*<bt>(.*)</bt>.*p="n".*<t>(.*)</t>.*<bt>(.*)</bt>.*d="6".*p="d".*<t>(.*)</t>.*<bt>(.*)</bt>.*p="n".*<t>(.*)</t>.*<bt>(.*)</bt>.*d="7".*p="d".*<t>(.*)</t>.*<bt>(.*)</bt>.*p="n".*<t>(.*)</t>.*<bt>(.*)</bt>.*d="8".*p="d".*<t>(.*)</t>.*<bt>(.*)</bt>.*p="n".*<t>(.*)</t>.*<bt>(.*)</bt>.*d="9".*p="d".*<t>(.*)</t>.*<bt>(.*)</bt>.*p="n".*<t>(.*)</t>.*<bt>(.*)</bt>.*d="10".*p="d".*<t>(.*)</t>.*<bt>(.*)</bt>.*p="n".*<t>(.*)</t>.*<bt>(.*)</bt>.*

[CurrentCondition]
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