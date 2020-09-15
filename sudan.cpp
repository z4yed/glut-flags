#include <windows.h>
#include <GL/glut.h>
void Draw()
{
        glClear(GL_COLOR_BUFFER_BIT);
        glColor3f(1,1,1);

        glBegin(GL_POLYGON);

        glVertex2f(-5,5);
        glVertex2f(5,5);    ///white Rectangle
        glVertex2f(5,-5);
        glVertex2f(-5,-5);

        glEnd();

        glColor3f(0,0,0);
        glBegin(GL_POLYGON);

        glVertex2f(-5,-5);
        glVertex2f(-5,-1.8);    ///black rectangle
        glVertex2f(5, -1.8);
        glVertex2f(5,-5);

        glEnd();

        glColor3f(1,0,0);
        glBegin(GL_POLYGON);

        glVertex2f(-5,5);
        glVertex2f(-5,1.8);    ///red rectangle
        glVertex2f(5, 1.8);
        glVertex2f(5,5);

        glEnd();

        glColor3f(0,1,0);
        glBegin(GL_TRIANGLES);


        glVertex2f(-5,5);
        glVertex2f(-1,0);    ///triangle
        glVertex2f(-5,-5);

        glEnd();


        glFlush();
}
void Initialize( )
{
        glClearColor(0,0,1,1);
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
        glutCreateWindow("Flag of SUDAN by MD. Zayed Hassan");
        Initialize();
        glutDisplayFunc(Draw);
        glutMainLoop();
        return 0;
}
