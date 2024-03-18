#include <opencv/highgui.h>
int main()
{
    CvCapture* cap = cvCreateCameraCapture(0);
    while (1) {
        IplImage* frame = cvQueryFrame(cap);
        cvShowImage("week05_1", frame);
        int key = cvWaitKey(35);
        if (key == 27) break; ///按下 Esc 鍵可退出
    }
    cvReleaseCapture(&cap); ///釋放 Camera 資源很重要
}
