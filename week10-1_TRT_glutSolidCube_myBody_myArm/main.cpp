/// week10-1_TRT_glutSolidCube_myBody_myArm
#include <GL/glut.h>
void myBody() { ///為了省行數, 老師把函式的大括號,放右上角
    glColor3f(1, 0, 0); ///紅色的身體
    glutWireCube( 0.6 ); ///方塊
}
void myArm() {
    glColor3f(0, 1, 0); ///綠色的手臂
    glScalef(1.5, 0.5, 0.5);///寬變1.5倍,高度變0.5倍
    glutWireCube( 0.3 ); ///方塊
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        ///glTranslatef(-0.6, +0.3, 0);
        myBody(); ///程式碼移上去
    glPopMatrix();
    glPushMatrix();
        ///glTranslatef(+0.0, +0.3, 0);
        myArm(); ///程式碼也移上去了
    glPopMatrix();
    glutSwapBuffers();
}
int main(int argc, char*argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week10-1");
    glutDisplayFunc(display);
    glutMainLoop();
}
