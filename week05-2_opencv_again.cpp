#include <opencv/highgui.h>
int main()
{
    IplImage * img = cvLoadImage("C:/micky.jpg");
    cvShowImage("week05", img);
    cvShowImage("another", img);
    cvShowImage("not another", img);
    cvWaitKey(0);
}
