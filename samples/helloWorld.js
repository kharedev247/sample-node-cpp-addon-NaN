const addon = require('../build/Debug/sample-addon.node');

function run() {
    const message = addon.HelloWorld();
    console.log(message);
}

run();