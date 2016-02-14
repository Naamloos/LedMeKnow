# LedMeKnow
A library to remember which LEDs are enabled in a 8x8 LED matrix. Useful for IJduino.
This library does NOT enable the leds for you. its just remembers it for you.

## How to use:
````Arduino
enableLed(int x, int y);
````
Tell the library a LED is being enabled. returns nothing.


````Arduino
disableLed(int x, int y);
````
Tell the library a LED is being disabled. returns nothing.


````Arduino
singleLedEnabled(int x, int y);
````
Ask the library if a single LED is enabled. returns a bool.


````Arduino
horizontalLedRowEnabled(int x);
````
Ask the library if a horizontal LED row is enabled. returns a bool.


````Arduino
verticalLedRowEnabled(int y);
````
Ask the library if a vertical LED row is enabled. returns a bool.


## Suggestions?
let me know! (pun intended) 
Send them via "issues" or contact me on [Twitter](https://twitter.com/naamloos_nl)  (don't worry, i won't bite!)


## Little code snippets

Disable every LED on horizontal row.
````Arduino
// Disable every x where y = 0:
for(int i = 0; i < 8; i++){
disableLed(i, 0);
}
````


Disable every LED on vertical row.
````Arduino
// Disable every y where x = 0:
for(int i = 0; i < 8; i++){
disableLed(0, 1);
}
````


Disable every LED.
````Arduino
// Disable EVERYTHING
for(int i = 0; i < 8; i++){
for(int j = 0; j < 8; j++){
disableLed(i, j);
}
}
````
