#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include<math.h>
void DrawCircle(float cx, float cy, float rx, float ry, int num_segments)
{

    glBegin(GL_TRIANGLE_FAN);
    for (int ii = 0; ii < num_segments; ii++)
    {

        float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);

        float x = rx * cosf(theta);
        float y = ry * sinf(theta);
        glVertex2f(x + cx, y + cy);
    }
    glEnd();
}

void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.8, 0.8, 0.0);

    DrawCircle(150, 150, 40, 90, 500);


    glFlush();
}
void init(void)
{

    glClearColor(0.0, 0.0, 0.0, 0.0);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-300.0, 300.0, -300.0, 300.0, 1.0, -1.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("circle");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
