///�жK�W10��GLUT�{��
#include <GL/glut.h>
#include <stdio.h> ///���F printf()
void display()
{
    glutSolidTeapot( 0.3 );
    glutSwapBuffers();
}               ///state:0:�U�h, 1�W��
void mouse(int button, int state, int x, int y)
{///�w�qmouse�禡 button:0����, 1:����, 2:�k��
    ///printf("Hello World\n"); ///�J��mouse�LHello
    ///printf("%d %d %d %d\n", button, state, x, y);
    if(state==GLUT_DOWN){
        printf("glVertex2f((%d-150)/150.0, -(%d-150)/150.0);\n", x, y);
    }
}
int main(int argc, char*argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week03 mouse");

    glutDisplayFunc(display);
    glutMouseFunc(mouse); ///�o�@��,�]�wmouse�禡

    glutMainLoop();
}
