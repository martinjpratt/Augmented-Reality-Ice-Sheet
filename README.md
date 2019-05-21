Augmented Reality Ice Sheet - WebGL version

This is the source code for the development of an AR Ice Sheet; a Unity project that simulates the 3D deformation of an ice sheet based on the Shallow Ice Approximation (SIA).

![alt text](https://svs.gsfc.nasa.gov/vis/a030000/a030800/a030880/grace_antarctica_black_w_vel_v3_201608_print.jpg "Antarctic Mass Balance")

Initially this application will be build using WebGL to provide better collaboration and development during . Subsequently we will switch development to Microsoft's HoloLens HMD, and also (hopefully) mobile AR. The objective being to show a simple example of how mass balance can affect an ice sheet as well as understand the time scales involved. For the HoloLens app, we are intending to use real world objects to change the bed "topography" and affect ice sheet flow.

![alt text](https://upload.wikimedia.org/wikipedia/commons/0/02/Ramahololens.jpg "Microsoft Hololens")

The SIA is computationally efficient, so lends itself well to real time animation. [Some extra information about the SIA and other ice sheet modeling techniques can be found here](http://www.antarcticglaciers.org/glaciers-and-climate/numerical-ice-sheet-models/hierarchy-ice-sheet-models-introduction/)

The model is interactive, the user can change the mass balance over part of the ice sheet to add or remove ice - thus raising or lowering the height of the ice sheet surface. This is controlled using the cursor position and the UI slider.

![alt text](https://github.com/martinjpratt/Augmented-Reality-Ice-Sheet/blob/master/docs/WebGLcapture.PNG "AR Ice Sheet screenshot")

[To test it out, visit the WebGL version of the application here](https://martinjpratt.github.io/Augmented-Reality-Ice-Sheet/App3D/index.html)


Current build environment

| Program          | Version       |
| ---------------- | ------------- |
| Unity            | 2017.4.2f2    |
| Visual Studio 17 | 15.8.9        |
