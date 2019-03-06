[WeatherIcon]
measure=Plugin
Plugin=WebParser
URL=[WeatherAll]
StringIndex=1
RegExp=(?siU).*<cc>.*<icon>(.*)</icon>.*<moon>.*<icon>(.*)</icon>.*p="n".*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*<icon>(.*)</icon>.*

[CurrentIcon]
Measure=Plugin
Plugin=WebParser
URL=[WeatherIcon]
StringIndex=1

[CurrentMoonIcon]
Measure=Plugin
Plugin=WebParser
URL=[WeatherIcon]
StringIndex=2

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
