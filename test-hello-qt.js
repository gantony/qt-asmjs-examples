m = require('./build-hello-qt/helloQt.js')

// Instantiate C++ object from JavaScript
var talker = new m.Talker()

// This calls a Cpp method that prints to the console (using qDebug())
talker.talk()
