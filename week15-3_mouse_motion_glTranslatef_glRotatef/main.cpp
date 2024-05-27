#include <GL/glut.h>
float angleX[15] = {}, angleY[15] = {}; ///���`�n����
void drawSmallerHand() {
    glPushMatrix();
        glScalef(0.2, 0.2, 0.2);
        glutSolidTeapot( 0.3 );
    glPopMatrix();
}
void display() {
    ///glClearColor(1,1,0,1); ///����I��, �i���A�T�{�ҫ����S���e�¶ª�
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glPushMatrix(); ///�n�g����{���ӵe��, �@�w�n�]�_��
        glTranslatef(angleX[14]/150.0, -angleY[14]/150.0, 0);  ///���ӷ����ʪ�
        glRotatef(angleX[0], 1, 0, 0); ///���骺���
        glRotatef(angleY[0], 0, 1, 0);
        drawSmallerHand();
	glPopMatrix(); ///�n�g����{���ӵe��, �@�w�n�]�_��
	glutSwapBuffers();
}
int angleID = 0, oldX = 0, oldY = 0;
void mouse(int button, int state, int x, int y) {
    oldX = x;
    oldY = y;
}
void motion(int x, int y) {
    angleX[angleID] += x - oldX;
    angleY[angleID] += y - oldY;
    oldX = x;
    oldY = y;
    glutPostRedisplay();
}
void keyboard(unsigned char key, int x, int y) {
    if(key=='x') angleID = 14;
}
int main(int argc, char**argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
	glutCreateWindow("week15-3");
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard); ///���@�U�|���{����o��
	glutMouseFunc(mouse);
	glutMotionFunc(motion);
	glutMainLoop();
}
