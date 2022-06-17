#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

static GLfloat spin = 0.0;
void spinDisplay_left(void)
{
    spin = spin + .1;
    if (spin > 360.0)
    {
        spin -=360 ;
    }

    glutPostRedisplay();
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    //write not moving object code

    glPushMatrix();
    glRotatef(spin, 0.0, 0.0, 1.0);
    //write moving object code
    glRectf(0,10,40,50);

    glPopMatrix();
    spinDisplay_left();
    glFlush();
}



void init(void)
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glOrtho(-100.0, 100.0, -100.0, 100.0, -1.0, 1.0);
}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Moon");
    init();
    glutDisplayFunc(display);

    glutMainLoop();
    return 0;
}
