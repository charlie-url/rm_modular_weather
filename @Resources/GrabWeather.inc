[WeatherAll]
UpdateDivider=7200
;6000 milliseconds * 7200 = 12 hours

;NOTE: In your main skin, you must create the variables LocationCode and TempUnit
; Additionally, you must @include GrabWeather.inc AFTER you create those Variables
;  If you do not, the RegExp will fail and you won't get any data.

; Due to the 99 substrings limit of WebParser this measure fetches the entire webpage while subsequent measures parse it in pieces

Measure=Plugin
Plugin=WebParser
URL=http://wxdata.weather.com/wxdata/weather/local/#LocationCode#?cc=*&unit=#TempUnit#&dayf=11
RegExp=(?siU)^(.*)$
DynamicVariables=1