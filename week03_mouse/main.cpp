///請貼上10行GLUT程式
#include <GL/glut.h>
#include <stdio.h> ///為了 printf()
void display()
{
    glutSolidTeapot( 0.3 );
    glutSwapBuffers();
}               ///state:0:下去, 1上來
void mouse(int button, int state, int x, int y)
{///定義mouse函式 button:0左鍵, 1:中鍵, 2:右鍵
    ///printf("Hello World\n"); ///遇到mouse印Hello
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
    glutMouseFunc(mouse); ///這一行,設定mouse函式

    glutMainLoop();
}
