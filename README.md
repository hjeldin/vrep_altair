V-REP Altair version
===========

Custom modified vrep - used for KUKA Challenge

Original sources and binaries can be found at http://www.coppeliarobotics.com

### Dependencies

* Qt 5.2
* QScintilla 2.8
* Lua 5.1
* Boost 1.46

### Building instructions

Make sure you have the same folder hierarchy as the following image.

![folder hierarchy](http://coppeliarobotics.com/helpFiles/en/images/folderStructure.jpg)

NOTE: dynamicsPlugin, meshCalculationPlugin and pathPlanningPlugin are optional

Just open QTCreator, make sure you configure the project with the correct kit (Desktop, QT 5.2.1), modify the project file to reflect your library/include search path, run QMake and then build.

Move libv_rep.so from the build folder into your main V-REP folder, then launch it.

Further reference can be found @ http://coppeliarobotics.com/helpFiles/en/compilingVrep.htm

Check also my version of V-REP's [ROS plugin](https://github.com/hjeldin/vrep-ros).

### License

V-REP is published under GNU GPL. 

For further information, check out [this page](http://www.coppeliarobotics.com/licensing.html).
