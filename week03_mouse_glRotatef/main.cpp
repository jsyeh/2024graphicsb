#include <GL/glut.h>
#include <stdio.h> ///���F printf()
float teapotX = 0, teapotY = 0; ///�s�[���{��,�Ψө���򪺮y��
float angle = 0;///���઺����
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); ///�M�I��
    glPushMatrix(); ///�ƥ��x�}
        ///glTranslatef(teapotX, teapotY, 0); ///��y�в���
        glRotatef(angle, 0, 0, 1); ///������z�b
        glutSolidTeapot( 0.3 );
    glPopMatrix(); ///�٭�x�}
    glutSwapBuffers();
}               ///state:0:�U�h, 1�W��
void mouse(int button, int state, int x, int y)
{///�ڭ̳o��,�n�������ץ�
    teapotX = (x-150)/150.0;
    teapotY = -(y-150)/150.0;
}
void motion(int x, int y)
{
    angle = x;
    display();
}
int main(int argc, char*argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week03 mouse glTranslatef");

    glutDisplayFunc(display);
    glutMouseFunc(mouse); ///�o�@��,�]�wmouse�禡
    glutMotionFunc(motion); ///�o��,�]�wmouse��motion�ʧ@
    glutMainLoop();
}
