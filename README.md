# Augmented Reality Ice Sheet

This is the source code for the development of an AR Ice Sheet; a Unity project that simulates the 3D deformation of an ice sheet based on the Shallow Ice Approximation (SIA). The codebase was developed from this paper from Ed Bueler: [Numerical Modelling of Ice Sheets, Streams, and Shelves](https://glaciers.gi.alaska.edu/sites/default/files/Notes_icesheetmod_Bueler2014.pdf)

There are 3 branches to this repo:
1. Master: contains the WebGL version of the application that can be run from inside a browser window.
2. MobileAR: contains a version that can be built and deployed via Unity onto a mobile AR device using Apple's ARKit or Android's ARCore.
3. HoloLens: contains the HoloLens version that can be built and deployed via Unity.

Both MobileAR and HoloLens versions make use of Microsoft's Mixed Reality Toolkit. This allows for multi-platform development from a single code base. Although the current HoloLens build is developed for the HoloLens 1, the code can also be used without too much modification to be used on the HoloLens 2 if necessary.

![alt text](https://svs.gsfc.nasa.gov/vis/a030000/a030800/a030880/grace_antarctica_black_w_vel_v3_201608_print.jpg "Antarctic Mass Balance")

The objective of this application is to be able to show a simple example of how mass balance can affect an ice sheet or glacier, as well as understand the time scales involved. For the HoloLens app (and potentially the new iPad Pro LiDAR capability), we are able to use real world objects to change the bed "topography" and affect ice sheet flow.

The SIA is computationally efficient, so lends itself well to real time animation. [Some extra information about the SIA and other ice sheet modeling techniques can be found here](http://www.antarcticglaciers.org/glaciers-and-climate/numerical-ice-sheet-models/hierarchy-ice-sheet-models-introduction/)


## WebGL

The WebGL version allows for the model to be run in a browser window, making it the most accessible option.

The model is interactive, the user can change the mass balance over part of the ice sheet to add or remove ice - thus raising or lowering the height of the ice sheet surface. This is controlled using the cursor position and the UI slider.

[![alt text](https://raw.githubusercontent.com/martinjpratt/Augmented-Reality-Ice-Sheet/master/docs/WebGLcapture.PNG "AR Ice Sheet screenshot")](https://raw.githubusercontent.com/martinjpratt/Augmented-Reality-Ice-Sheet/master/docs/WebGLcapture.PNG)

[To test it out, visit the WebGL version of the application here](https://martinjpratt.github.io/Augmented-Reality-Ice-Sheet/App3D/index.html)


## MobileAR

Augmented reality is now possible on most new mobile devices. The makes the ability to visualize this 3D model possible using a video feed from a single camera. Computer vision techniques allow for the placement of a virtual 3D object in the real world - creating an augmented reality experience.


## HoloLens

The Microsoft HoloLens head mounted display provides the truest personal AR experience, handsfree and stereo imaging allow for an accurate 3D visualization, and spatial cameras allow for scanning of real world surfaces. This means we can have virtual objects be influenced by the real world.

![alt text](https://upload.wikimedia.org/wikipedia/commons/0/02/Ramahololens.jpg "Microsoft Hololens")

Current build environment

| Program          | Version       |
| ---------------- | ------------- |
| Unity            | 2017.4.2f2    |
| Visual Studio 19 | 15.8.9        |
