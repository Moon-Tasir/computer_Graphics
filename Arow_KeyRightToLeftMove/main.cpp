#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

static float	tx	=  0.0;
static float	ty	=  0.0;

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    //write not moving object code
   
    glPushMatrix();
   glTranslatef(tx,ty,0);
    //write moving object code
    glRectf(0,10,40,50);

    glPopMatrix();
    glFlush();
}


void spe_key(int key, int x, int y)
{

    switch (key)
    {

    case GLUT_KEY_LEFT:
        tx -=5;
        glutPostRedisplay();
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
    glutSpecialFunc(spe_key);
    glutMainLoop();
    return 0;
}
