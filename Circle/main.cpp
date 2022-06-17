#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

   glBegin(GL_TRIANGLE_FAN);
  int r=20;
    glColor3ub(255, 69, 0);

    for (int i = 0; i <= 360; i+=1) {

        float x = 10+r * sin(i);

        float y = 30+r * cos(i);

        glVertex2f(x, y);
    }
glEnd();
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
