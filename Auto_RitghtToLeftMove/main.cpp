#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

static float	tx	=  0.0;
static float	ty	=  0.0;

 void RightToLeftMove(){
 tx-=.01;
 if(tx>100)
 {
    tx=-120;
 }
 glutPostRedisplay();
 }

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    //write not moving object code

    glPushMatrix();
      glTranslatef(tx,ty,0);
    //write moving object code
    glRectf(0,40,50,70);

    glPopMatrix();
    RightToLeftMove();
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
    glutCreateWindow ("Transformation");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
