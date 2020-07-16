#include <GL/glut.h>
void Draw()
{
        glClear(GL_COLOR_BUFFER_BIT);
        glColor3f(1,1,1);

        glBegin(GL_POLYGON);

        glVertex2f(-5,5);
        glVertex2f(5,5);    ///White Rectangle
        glVertex2f(5,-5);
        glVertex2f(-5,-5);

        glEnd();


        glColor3f(0,0,255);

        glBegin(GL_POLYGON);

        glVertex2f(-5.0,5.0);
        glVertex2f(5.0,5.0);    ///Top Blue Rectangle
        glVertex2f(5.0,2.5);
        glVertex2f(-5.0,2.5);

        glEnd();



        ///--------  Star Area Start -----------///

        glColor3f(0,0,255);
        glLineWidth(2);

        glBegin(GL_LINE_LOOP);          ///Central Star
        glVertex2f(-0.5,0);
        glVertex2f(-0.1,0);
        glVertex2f(0,0.4);
        glVertex2f(0.1,0);
        glVertex2f(0.5,0);
        glVertex2f(0.2,-0.2);
        glVertex2f(0.3,-0.5);
        glVertex2f(0,-0.3);
        glVertex2f(-0.3,-0.5);
        glVertex2f(-0.2,-0.2);
        glVertex2f(-0.5,0);

        glEnd();

        glColor3f(0,0,255);
        glLineWidth(2);

        glBegin(GL_LINE_LOOP);  ///Left Top Star
        glVertex2f(-3, 1);
        glVertex2f(-2.6, 1);
        glVertex2f(-2.5, 1.3);
        glVertex2f(-2.4, 1);
        glVertex2f(-2, 1);
        glVertex2f(-2.3, 0.8);
        glVertex2f(-2.2, 0.5);
        glVertex2f(-2.5, 0.7);
        glVertex2f(-2.8, 0.5);
        glVertex2f(-2.7, 0.8);
        glVertex2f(-3, 1);

        glEnd();

        glColor3f(0,0,255);
        glLineWidth(2);

        glBegin(GL_LINE_LOOP);  ///Left Bottom Star
        glVertex2f(-3, -1);
        glVertex2f(-2.6, -1);
        glVertex2f(-2.5, -0.7);
        glVertex2f(-2.4, -1);
        glVertex2f(-2, -1);
        glVertex2f(-2.3, -1.2);
        glVertex2f(-2.2, -1.5);
        glVertex2f(-2.5, -1.3);
        glVertex2f(-2.8, -1.5);
        glVertex2f(-2.7, -1.2);
        glVertex2f(-3, -1);
        glEnd();

        glColor3f(0,0,255);
        glLineWidth(2);

        glBegin(GL_LINE_LOOP); ///Right Top Star
        glVertex2f(3, 1);
        glVertex2f(2.6, 1);
        glVertex2f(2.5, 1.3);
        glVertex2f(2.4, 1);
        glVertex2f(2, 1);
        glVertex2f(2.3, 0.8);
        glVertex2f(2.2, 0.5);
        glVertex2f(2.5, 0.7);
        glVertex2f(2.8, 0.5);
        glVertex2f(2.7, 0.8);
        glVertex2f(3, 1);

        glEnd();


          glColor3f(0,0,255);
        glLineWidth(2);

        glBegin(GL_LINE_LOOP); ///Right Bottom Star
        glVertex2f(3, -1);
        glVertex2f(2.6, -1);
        glVertex2f(2.5, -0.7);
        glVertex2f(2.4, -1);
        glVertex2f(2, -1);
        glVertex2f(2.3, -1.2);
        glVertex2f(2.2, -1.5);
        glVertex2f(2.5, -1.3);
        glVertex2f(2.8, -1.5);
        glVertex2f(2.7, -1.2);
        glVertex2f(3, -1);
        glEnd();

        glEnd();


        ///------- Star Area End ----------///

         glColor3f(0,0,255);

        glBegin(GL_POLYGON);

        glVertex2f(-5.0,-2.5);
        glVertex2f(5.0,-2.5);    ///Bottom Blue Rectangle
        glVertex2f(5.0,-5.0);
        glVertex2f(-5.0,-5.0);

        glEnd();
        


        glFlush();
}
void Initialize( )
{
        glClearColor(0, 0, 0, 1);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0);
}
int main(int Argc, char** Argv)
{
        glutInit(&Argc, Argv);
        glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
        glutInitWindowSize(800, 500);
        glutInitWindowPosition(250, 250);
        glutCreateWindow("FLAG OF Honduras -- Md. Zayed Hassan -- 17103286 ");
        Initialize();
        glutDisplayFunc(Draw);
        glutMainLoop();
        return 0;
}
