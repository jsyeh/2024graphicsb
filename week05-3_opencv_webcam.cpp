#include <opencv/highgui.h>
int main()
{
    CvCapture* cap = cvCreateCameraCapture(0);
    while (1) {
        IplImage* frame = cvQueryFrame(cap);
        cvShowImage("week05_1", frame);
        int key = cvWaitKey(35);
        if (key == 27) break; ///���U Esc ��i�h�X
    }
    cvReleaseCapture(&cap); ///���� Camera �귽�ܭ��n
}
