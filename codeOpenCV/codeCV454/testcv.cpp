#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include<iostream>
using namespace cv;
using namespace std;

int main(int argc, char *argv[])
{
//图片路径自己更改
//注意目录分隔符要使用”\“或”//"，否则程序不识别并报错
Mat img=imread("learn.jpg");
if(img.empty())
return -1;
namedWindow("testshow", WINDOW_FREERATIO );
imshow("testshow", img);
waitKey(0);
return 0;
}