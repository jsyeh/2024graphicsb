///week05-1_texture_opencv_cvLoadImage �M��
///�K�W10��{��, �A�K�W���Ѫ� OpenCV ��3��
#include <GL/glut.h>
#include <opencv/highgui.h>
void display() {
    glutSolidTeapot( 0.3 );
    glutSwapBuffers();
}
int main(int argc, char* argv[])
{
    IplImage * img = cvLoadImage("C:/micky.jpg");
    cvShowImage("opencv", img);
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week05-1 texture opencv");
    glutDisplayFunc(display);
    glutMainLoop();
}
