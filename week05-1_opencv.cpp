/// File-New-EmptyFile�ť��ɮ� week05-1_opencv.cpp
#include <opencv/highgui.h> ///�ϥ� OpenCV ������GUI�~��
int main()
{///�j�gI,�p�gpl (Intel performance library)
    IplImage * img = cvLoadImage("c:/micky.jpg");
///�j�g��Image ���ɽЩ�b C:�ڥؿ���, micky.jpg
    cvShowImage("week05 micky", img); ///�q��(��ӰѼƤ��T�w)
    cvWaitKey(0); ///�����N��,�A�~��
}
