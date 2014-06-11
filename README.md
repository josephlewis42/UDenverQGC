UDenver QGroundControl Open Source Micro Air Vehicle Ground Control Station

Project:
http://qgroundcontrol.org

Files:
http://github.com/mavlink/qgroundcontrol
http://github.com/mavlink/mavlink

Credits:
http://qgroundcontrol.org/credits

**********************************************************************************************
* PLEASE NOTE: YOU NEED TO DOWNLOAD THE MAVLINK LIBRARY IN ORDER TO COMPILE THIS APPLICATION *
**********************************************************************************************



Linux 
=====


1. To build on Linux, make sure you have the Mavlink folder at the same level as the UDenverQGC

		sudo apt-get install phonon libqt4-dev \
		libphonon-dev libphonon4 phonon-backend-gstreamer \
		qtcreator libsdl1.2-dev libflite1 flite1-dev build-essential \
		libqt4-opengl-dev libqtwebkit-dev openscenegraph libosgearth-dev libosgearth2

1. Ubuntu Application Menu -> Development -> Qt Creator
1. QtCreator Menu File -> Open File or Project..
1. Open qgroundcontrol/qgroundcontrol.pro
1. Press the green play button to compile and launch it
1. Done.
