# LedMeKnow
A library to remember which LEDs are enabled in a 8x8 LED matrix. Useful for IJduino.

## How to use:
````Arduino
enableLed(int x, int y);
````
Tell the library a LED is being enabled.


````Arduino
disableLed(int x, int y);
````
Tell the library a LED is being disabled.


````Arduino
singleLedEnabled(int x, int y);
````
Ask the library if a single LED is enabled.


````Arduino
horizontalLedRowEnabled(int x);
````
Ask the library if a horizontal LED row is enabled.


````Arduino
verticalLedRowEnabled(int y);
````
Ask the library if a vertical LED row is enabled.

## Suggestions?
Send them via "issues" or contact me on (Twitter)[https://twitter.com/naamloos_nl]  (don't worry, i won't bite!)