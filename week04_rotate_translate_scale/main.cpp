#include <GL/glut.h>///�K�W week04_translate_rotate_scale �{���X
float teapotX = 0.5, teapotY = 0; ///��k��
float angle = 0; ///���ਤ��
float s = 0.3; ///�@�}�l�O�쥻1�����j�p
void display()
{///�]�w�u�M�I���v���C��
    glClearColor(1, 1, 0.9, 1); /// R,G,B,A
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);///�M�I��
    glColor3f(0, 1, 0); ///3f�N�OR,G,B
    glPushMatrix(); ///�ƥ��x�}
        glRotatef(angle++, 0, 0, 1); ///����
        glTranslatef(teapotX, teapotY, 0);///����
        glScalef(s, s, s); ///�Y��s��
        glutSolidTeapot( 0.3 );
    glPopMatrix(); ///�٭�x�}
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
    glutCreateWindow("week04 rotate translate scale");
    glutIdleFunc(display); ///�����S�Ʈ�,�Ndisplay()
    glutDisplayFunc(display);
    glutMotionFunc(motion);///���motion���ɭ�
    glutMainLoop();
}
