UDenver QGroundControl Open Source Micro Air Vehicle Ground Control Station

Original Project:
http://qgroundcontrol.org

Original Repositories:
http://github.com/mavlink/qgroundcontrol
http://github.com/mavlink/mavlink

Credits:
http://qgroundcontrol.org/credits

**********************************************************************************************
* PLEASE NOTE: YOU NEED TO DOWNLOAD THE UDENVERMAVLINK LIBRARY (https://github.com/josephlewis42/UDenverMavlink) IN ORDER TO COMPILE THIS APPLICATION *
**********************************************************************************************



Linux 
=====


1. To build on Linux, make sure you have the UDenverMavlink folder at the same level as the UDenverQGC

		sudo apt-get install phonon libqt4-dev \
		libphonon-dev libphonon4 phonon-backend-gstreamer \
		qtcreator libsdl1.2-dev libflite1 flite1-dev build-essential \
		libqt4-opengl-dev libqtwebkit-dev openscenegraph libosgearth-dev libosgearth2

To Build Using QTCreator
------------------------

1. Ubuntu Application Menu -> Development -> Qt Creator
1. QtCreator Menu File -> Open File or Project..
1. Open qgroundcontrol/qgroundcontrol.pro
1. Press the green play button to compile and launch it
1. Done.

To Build From Command Line
--------------------------

1. Run

		qmake qgroundcontrol.pro
		make