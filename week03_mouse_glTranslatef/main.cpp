///請貼上10行GLUT程式
#include <GL/glut.h>
#include <stdio.h> ///為了 printf()
float teapotX = 0, teapotY = 0; ///新加的程式,用來放茶壼的座標
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); ///清背景
    glPushMatrix(); ///備份矩陣
        glTranslatef(teapotX, teapotY, 0); ///把座標移動
        glutSolidTeapot( 0.3 );
    glPopMatrix(); ///還原矩陣
    glutSwapBuffers();
}               ///state:0:下去, 1上來
void mouse(int button, int state, int x, int y)
{///我們這裡,要巧妙的修正
    teapotX = (x-150)/150.0;
    teapotY = -(y-150)/150.0;
}
int main(int argc, char*argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week03 mouse glTranslatef");

    glutDisplayFunc(display);
    glutMouseFunc(mouse); ///這一行,設定mouse函式

    glutMainLoop();
}
