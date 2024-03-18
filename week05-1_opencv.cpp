/// File-New-EmptyFile空白檔案 week05-1_opencv.cpp
#include <opencv/highgui.h> ///使用 OpenCV 的高級GUI外掛
int main()
{///大寫I,小寫pl (Intel performance library)
    IplImage * img = cvLoadImage("c:/micky.jpg");
///大寫的Image 圖檔請放在 C:根目錄裡, micky.jpg
    cvShowImage("week05 micky", img); ///秀圖(兩個參數不確定)
    cvWaitKey(0); ///等任意鍵,再繼續
}
