#include <opencv/highgui.h>
int main()
{
    CvCapture* cap = cvCreateCameraCapture(0);
    CvCapture* cap2 = cvCreateCameraCapture(1);
    CvCapture* cap3 = cvCreateCameraCapture(2);
    CvCapture* cap4 = cvCreateCameraCapture(3);

    while (1) {
        IplImage* frame = cvQueryFrame(cap);
        cvShowImage("week05_1", frame);
        IplImage* frame2 = cvQueryFrame(cap2);
        cvShowImage("week05_2", frame2);
        IplImage* frame3 = cvQueryFrame(cap3);
        cvShowImage("week05_3", frame3);
        IplImage* frame4 = cvQueryFrame(cap4);
        cvShowImage("week05_4", frame4);
        int key = cvWaitKey(35);
        if (key == 27) break; ///按下 Esc 鍵可退出
    }
    cvReleaseCapture(&cap); ///釋放 Camera 資源很重要
    cvReleaseCapture(&cap2); ///釋放 Camera 資源很重要
    cvReleaseCapture(&cap3); ///釋放 Camera 資源很重要
    cvReleaseCapture(&cap4); ///釋放 Camera 資源很重要
}
