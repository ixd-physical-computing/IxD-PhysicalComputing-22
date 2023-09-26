## Lab: Debouncing and Smoothing

### Debouncing

When uising a switch, button, or relay, contact bouncing often occurs, when the momentum of the switches closing cause them to bounce apart one or more times before making steady contact. Think about knocking a hammer

The software "debouncing" solution is to do a state detection. First, detect the switch state `state1`, then wait for a certain amount of milliseconds (a “debouncing window”), then check the switch state again `state2` to see if they match. If `state1 == state2`, then the switch can be read as being in a steady stage.

Build the Arduino [debouncing example](https://www.arduino.cc/en/Tutorial/BuiltInExamples/Debounce).

Note that the example used 50 milliseconds as debounce time. The debouncing window is pretty arbiturary, depending on what siwtch you're using. This example also used a function called `millis()`, which returns the number of milliseconds passed since the Arduino board began running the current program. It can be used as a good replacement for `delay()` as it doesn't slow the program down. [Here](https://forum.arduino.cc/t/using-millis-for-timing-a-beginners-guide/483573/3) is a beginner's guide to using `millis()` to keep time if you're interested.

### Smoothing

Many of the analog sensors we use are simple and inexpensive, with is great. But they produce very "noisy" output - unstable and occasionally with glitches or errors. Luckily there is an easy way to smooth the output just using code!

Build the Arduino [smoothing example](https://docs.arduino.cc/built-in-examples/analog/Smoothing).

- Try it out and experiment with changing the amount of smoothing by changing `numReadings`
- Note that they are using a potentiometer - the results will be more dramatic if you test with a noisy sensor. Wire it first with a potentiometerhen, then experiment with a photocell, flex sensor, distance sensor, and/or sound sensor