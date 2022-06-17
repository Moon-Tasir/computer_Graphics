

 #include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>



void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);




 int r=30;


    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(193, 205 ,193);

    for (int i = 0; i <= 360; i++) {

        float x = 94+r * sin(i);

        float y = 490+r * cos(i);

        glVertex2f(x, y);

    }   for (int i = 0; i <= 360; i++) {

        float x = 130+r * sin(i);

        float y = 490+r * cos(i);

        glVertex2f(x, y);

    }
      for (int i = 0; i <= 360; i++) {

        float x = 112+r * sin(i);

        float y = 510+r * cos(i);

        glVertex2f(x, y);

    }
     for (int i = 0; i <= 360; i++) {

        float x = 112+r * sin(i);

        float y = 475+r * cos(i);

        glVertex2f(x, y);

    }
    glEnd();


    glFlush();
}



void init(void)
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glOrtho(00.0, 600.0, 00.0, 600.0, -1.0, 1.0);
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



