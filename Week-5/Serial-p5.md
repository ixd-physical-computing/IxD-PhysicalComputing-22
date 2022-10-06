## Serial to p5 Communications

[p5.js](https://p5js.org/) is an Open-Source Javascript library for creative coding, that comes with its own browser-based online [editor](https://editor.p5js.org/). In order to interface with p5.js using Serial Communication, you will need an extra piece of connection that bridges the browser and your microcontroller. The p5 Serial project offers a solution, and there are two ways to use it:

**Download External Application**

The [p5.serialcontrol](https://github.com/p5-serial/p5.serialcontrol) application is currently not maintained, but you're still able to use it. Download the latest version of [p5.serialcontrol application](https://github.com/p5-serial/p5.serialcontrol/releases) for your operation system (Darwin for Mac OS), and save it in your Applications folder. If you're using Mac OS, you might need to bypass the security check

**Run a p5 Serial Server in Node.js or Processing**

The more up-to-date, currently maintained version of p5 Serial requires running a server yourself. If you have [npm](https://www.npmjs.com/package/npm) and [Node.js](https://nodejs.org/en/) installed in your terminal, It's easy to set it up by downloading the [p5.serialserver repo on GitHub](https://github.com/p5-serial/p5.serialserver), and installing following the guide.

For terminal installment, remember to navigate to the direction where you downloaded the repo, for example `cd /Users/me/GitHub/p5.serialserver-main`, before running `npm install`.

### Receiving Serial in p5

Once your connection is established with either the Application or the Server, you also need to add the p5.serialport library to your `index.html` file in your p5 sketch. Navigate to your `index.html` file on your sidebar, and add `<script language="javascript" type="text/javascript" src="https://cdn.jsdelivr.net/npm/p5.serialserver@latest/lib/p5.serialport.js"></script>` underneath the other `<script>` tags.

Example p5 sketch receiving a potentiometer value [here](https://editor.p5js.org/sandpills/sketches/t49l_Pl9i)
