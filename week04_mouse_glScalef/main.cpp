#include <GL/glut.h>///�K�W10��GLUT�{���X
float s = 1; ///�@�}�l�O�쥻1�����j�p
void display()
{///�]�w�u�M�I���v���C��
    glClearColor(1, 1, 0.9, 1); /// R,G,B,A
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);///�M�I��
    glColor3f(0, 1, 0); ///3f�N�OR,G,B
    glPushMatrix(); ///�ƥ��x�}
        glScalef(s, s, s); ///�Y��s��
        glutSolidTeapot( 0.3 );
    glPopMatrix();
    glutSwapBuffers();
}
void motion(int x, int y)
{
    s = 1 + (x-150)/150.0; ///�ܤj�ܤp���ܼ� 0 ~ 1 ~ 2
    display(); ///���e�e���@
}
int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week04 mouse glScalef");
    glutDisplayFunc(display);
    glutMotionFunc(motion);///���motion���ɭ�
    glutMainLoop();
}
