#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

glColor3ub(256,130,140);
//LINE
  glBegin(GL_LINES);
        glVertex3d(300.0,300.0,0.0);
        glVertex3d(500.0,450.0,0.0);
  glEnd();

//POINTS
       glBegin(GL_POINTS);
       //5 points here
        glVertex3d(10.0,140.0,0.0);
        glVertex3d(10.0,141.0,0.0);
        glVertex3d(10.0,142.0,0.0);
        glVertex3d(10.0,143.0,0.0);
        glVertex3d(10.0,144.0,0.0);
        glEnd();

//TRIANGLES
glBegin(GL_TRIANGLES);
        glVertex3f(20.0,152.0,0.0);
        glVertex3f(90.0,152.0,0.0);
        glVertex3f(55.0,122.0,0.0);
    glEnd();

//QUADS1
   glBegin(GL_QUADS);
        glVertex3d(120.0,200.0,0.0);
        glVertex3d(150.0,200.0,0.0);
        glVertex3d(140.0,110.0,0.0);
        glVertex3d(100.0,100.0,0.0);
    glEnd();
//QUADS2
glRectf(160,200,200,300);

//POLYGON
  glBegin(GL_POLYGON);

    glVertex2f(300.0, 103.0);
    glVertex2f(340.0, 110.0);
    glVertex2f(338.0, 20.0);
    glVertex2f(301.0, 20.0);

     glEnd();

//CIRCLE
   glBegin(GL_TRIANGLE_FAN);
  int r=20;
    glColor3ub(255, 69, 0);

    for (int i = 0; i <= 360; i+=1) {

        float x = 410+r * sin(i);

        float y = 450+r * cos(i);

        glVertex2f(x, y);
    }
glEnd();


    glFlush();
}



void init(void)
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glOrtho(0.0, 500.0, 0.0, 500.0, -1.0, 1.0);
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (0, 0);
    glutCreateWindow ("moon");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
