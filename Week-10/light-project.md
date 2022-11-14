## Project: Let there be Light

Working in groups with LED strips, redesign an existing light, or integrate light behavior into an existing object. It can be a desk lamp, wall sconce, night light, lantern, etc -- or a home/office/kitchen/architectural object with light cues. Or even an imaginative fictional device. Think about the activities of the space you're building it for -- is it used in the bedroom, the kitchen, a hospital waiting room, a night club, a flower shop, a spaceship?

Your light should:

- Be able to change (turn on and off, switch between different settings, adjust colors, fade in and out, change blink speed, or a combination of some of them) based on some kind of sensor input. Design the interaction and interface with users in mind: Who would be using the light? What behaviors are expected of the user? How do those movements reflect in the changes of light? Are these implicit (passive) or explicit (active) interactions?

- Have a color scheme that are specific to the design, the environment, and the mood you're trying to convey. No rainbow color scrolling please (unless it's intended), you're all designers here.

- Enclosed with some kind of shade or [diffuser](<https://en.wikipedia.org/wiki/Diffuser_(optics)>), so that your light strips are not exposed directly. It can as easy as putting the strip into an existing box, bottle, paper lantern, etc., or you can make your own enclosure as well. Experiment with different materials: matte, glossy, semi-transparent, reflective, and see how they affect the look of the light. Remember that translucent or sanded acrylic or even simple paper can be really good diffusers!

Here are some light artists and lighting designers you might find inspiration from: [Dan Flavin](https://www.guggenheim.org/artwork/artist/dan-flavin), [James Clar](http://www.jamesclar.com/), [Eric Forman](https://www.ericforman.com), [Olafur Eliasson](https://olafureliasson.net/tag/TEL1413/light), [James Turrell](https://jamesturrell.com/work/type/), [Mary Corse](https://www.pacegallery.com/artists/mary-corse/), [Anthony McCall](https://www.skny.com/artists/anthony-mccall)

As always, it doesn't have to be very complex, but try to make it look neat. Document your work on your blog! Include sketches, diagrams, schematics, code, process photos, questions, and photos and video of working result.

CODE HELP: Look at all the built-in FastLED examples, and all of the NeoPixel (https://learn.adafruit.com/adafruit-neopixel-uberguide/arduino-library-installation) examples. Then look at these more advanced examples: https://github.com/atuline/FastLED-Demos. Use Google for more, there are thousands out there. 

Those wishing to keep animations playing without delaying sensor input will want to find exampes using FastLED's EVERY_N_MILLISECONDS() or EVERY_N_SECONDS()  - note the use of FastLED.delay() instead of normal Arduino delay() ....
