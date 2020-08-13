#include <GL/glut.h>
void Draw()
{
        glClear(GL_COLOR_BUFFER_BIT);
        glColor3f(0,1,0);

        glBegin(GL_POLYGON);

        glVertex2f(-5,5);
        glVertex2f(5,5);    ///Green Rectangle
        glVertex2f(5,-5);
        glVertex2f(-5,-5);

        glEnd();

        glColor3f(1,1,0);
        glBegin(GL_POLYGON);

        glVertex2f(-4.4,5);
        glVertex2f(5,-4.4);    ///Yellow Crossing 1
        glVertex2f(5, -5);
        glVertex2f(4.4,-5);
        glVertex2f(-5,4.4);
        glVertex2f(-5,5);

        glEnd();

        glColor3f(1,1,0);
        glBegin(GL_POLYGON);

        glVertex2f(5,5);
        glVertex2f(5,4.4);    ///Yello Crossing 2
        glVertex2f(-4.4,-5);
        glVertex2f(-5,-5);
        glVertex2f(-5,-4.4);
        glVertex2f(4.4,5);

        glEnd();

        glColor3f(0,0,0);
        glBegin(GL_TRIANGLES);

        glVertex2f(-5,4.4);
        glVertex2f(-0.5,0);    ///Left Black Triangle
        glVertex2f(-5,-4.4);

        glEnd();

        glColor3f(0,0,0);
        glBegin(GL_TRIANGLES);

        glVertex2f(5,4.4);
        glVertex2f(0.5,0);    ///Right Black Triangle
        glVertex2f(5,-4.4);

        glEnd();
        
        glFlush();
}
void Initialize( )
{
        glClearColor(1,1,1,1);
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
        glutCreateWindow("Flag of Jamaica By Md. Zayed Hassan :: ID# 17103286 ");
        Initialize();
        glutDisplayFunc(Draw);
        glutMainLoop();
        return 0;
}
