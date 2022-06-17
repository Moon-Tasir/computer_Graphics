#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

static GLfloat spin = 0.0;
void spinDisplay_right(void)
{
    spin = spin - 1;
    if (spin > 360.0)
        spin = spin - 360.0;
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
    glFlush();
}


void my_keyboard(unsigned char key, int x, int y)
{

    switch (key)
    {
    case 'r':
        spinDisplay_right();
        break;
    default:
        break;
    }
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
    glutKeyboardFunc(my_keyboard);
    glutMainLoop();
    return 0;
}
