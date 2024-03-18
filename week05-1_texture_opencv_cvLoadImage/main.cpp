///week05-1_texture_opencv_cvLoadImage 專案
///貼上10行程式, 再貼上今天的 OpenCV 的3行
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
