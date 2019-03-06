[WeatherWind]
measure=Plugin
Plugin=WebParser
URL=[WeatherAll]
StringIndex=1
RegExp=(?siU).*<us>(.*)</us>.*<cc>.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*<day d="0".*p="d".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*p="n".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*<day d="1".*p="d".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*p="n".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*<day d="2".*p="d".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*p="n".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*<day d="3".*p="d".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*p="n".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*<day d="4".*p="d".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*p="n".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*<day d="5".*p="d".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*p="n".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*<day d="6".*p="d".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*p="n".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*<day d="7".*p="d".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*p="n".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*<day d="8".*p="d".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*p="n".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*<day d="9".*p="d".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*p="n".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*<day d="10".*p="d".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*p="n".*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*

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