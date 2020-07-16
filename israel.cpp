#include <windows.h>
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
        glLineWidth(3.5);
        glBegin(GL_LINE_LOOP);

        glVertex2f(0,1);
        glVertex2f(0.8,-0.8);       ///First Circle
        glVertex2f(-0.8,-0.8);

        glEnd();

        glColor3f(0,0,255);
        glLineWidth(3.5);
        glBegin(GL_LINE_LOOP);

        glVertex2f(-0.75,0.36);
        glVertex2f(0.75,0.36);      ///Second Circle
        glVertex2f(0.0,-1.34);

        glEnd();

        glColor3f(0,0,255);

        glBegin(GL_POLYGON);

        glVertex2f(-5.0,3.7);
        glVertex2f(5.0,3.7);    ///Top Blue Rectangle
        glVertex2f(5.0,1.5);
        glVertex2f(-5.0,1.5);

        glEnd();

         glColor3f(0,0,255);

        glBegin(GL_POLYGON);

        glVertex2f(-5.0,-3.7);
        glVertex2f(5.0,-3.7);    ///Bottom Blue Rectangle
        glVertex2f(5.0,-1.5);
        glVertex2f(-5.0,-1.5);

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
        glutCreateWindow("FLAG OF ISRAEL -- Md. Zayed Hassan -- 17103286");
        Initialize();
        glutDisplayFunc(Draw);
        glutMainLoop();
        return 0;
}
