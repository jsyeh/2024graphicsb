/// week10-6
/// ��� week10-5_...
#include <GL/glut.h>
void myBody() { ///���F�٦��, �Ѯv��禡���j�A��,��k�W��
    glColor3f(1, 0, 0); ///���⪺����
    glutWireCube( 0.6 ); ///���
}
void myArm() {
    glPushMatrix();
        glColor3f(0, 1, 0); ///��⪺���u
        glScalef(1.5, 0.5, 0.5);///�e��1.5��,������0.5��
        glutWireCube( 0.3 ); ///���
    glPopMatrix();
}
float angle=0; ///week10-2
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        myBody(); ///�{���X���W�h
    glPopMatrix();

    glPushMatrix(); ///�k�b��
        glTranslatef(+0.3, +0.3, 0);///(3) ����ӤW
        glRotatef(angle++, 0, 0, 1);///(2) ���
        glTranslatef(0.225, 0, 0); ///(1) ���त��, ��b������
        myArm(); ///�k���u
        glPushMatrix(); ///week10-5
            glTranslatef(0.225, 0, 0);///(3) ����ӤW
            glRotatef(angle++, 0, 0, 1);///(2) ���
            glTranslatef(0.225, 0, 0); ///(1) ���त��, ��b������
            myArm(); ///�k��y
        glPopMatrix(); ///week10-5
    glPopMatrix();

    glPushMatrix(); ///���b��
        glTranslatef(-0.3, +0.3, 0);///(3) ����ӤW
        glRotatef(angle++, 0, 0, 1);///(2) ���
        glTranslatef(-0.225, 0, 0); ///(1) ���त��, ��b������
        myArm(); ///�����u
        glPushMatrix(); ///week10-5
            glTranslatef(-0.225, 0, 0);///(3) ����ӤW
            glRotatef(angle++, 0, 0, 1);///(2) ���
            glTranslatef(-0.225, 0, 0); ///(1) ���त��, ��b������
            myArm(); ///����y
        glPopMatrix(); ///week10-5
    glPopMatrix();
    glutSwapBuffers();
}
int main(int argc, char*argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week10.06");
    glutDisplayFunc(display);
    glutIdleFunc(display); ///week10-2
    glutMainLoop();
}
