/// week10-2
/// ��� week10-1_TRT_glutSolidCube_myBody_myArm
#include <GL/glut.h>
void myBody() { ///���F�٦��, �Ѯv��禡���j�A��,��k�W��
    glColor3f(1, 0, 0); ///���⪺����
    glutWireCube( 0.6 ); ///���
}
void myArm() {
    glColor3f(0, 1, 0); ///��⪺���u
    glScalef(1.5, 0.5, 0.5);///�e��1.5��,������0.5��
    glutWireCube( 0.3 ); ///���
}
float angle=0; ///week10-2
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        ///glTranslatef(-0.6, +0.3, 0);
        myBody(); ///�{���X���W�h
    glPopMatrix();
    glPushMatrix();
        ///glTranslatef(+0.0, +0.3, 0);
        glRotatef(angle++, 0, 0, 1); ///week10-2
        myArm(); ///�{���X�]���W�h�F
    glPopMatrix();
    glutSwapBuffers();
}
int main(int argc, char*argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week10-2");
    glutDisplayFunc(display);
    glutIdleFunc(display); ///week10-2
    glutMainLoop();
}
