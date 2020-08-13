# GLUT Flags

1. Running code in Linux

    If the cpp file contains #include<windows.h> remove it. Or make it comment.
    Then oper terminal and run the code by --

    g++ honduras.cpp -o sample2d -lGL -lGLU -lglut

    //One Executable file will be created, run it.
    
    ./sample2d

N.B : If you run this program in windows, add one extra line in the top.
        #include<windows.h>
