#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/xfeatures2d.hpp>
#include <iostream>

using namespace std;
using namespace cv;
using namespace xfeatures2d;

int main()
{ //图片路径自主更改，注意更改分隔符
Mat img=imread("learn.jpg");
if(!img.data)
{
cout<<"请确认图像路径是否正确！"<<endl;
return -1;
}
  Ptr<SURF> surf=SURF::create(500,4,3,true,false);

  vector<KeyPoint> Keypoints;
  surf->detect(img,Keypoints);

  Mat imgAngel;
  img.copyTo(imgAngel);

  drawKeypoints(img,Keypoints,img,Scalar(255,255,255));

  drawKeypoints(img,Keypoints,imgAngel,Scalar(255,255,255),DrawMatchesFlags::DRAW_RICH_KEYPOINTS);

  imshow("不含角度和大小的结果",img);
  imshow("含有角度和大小的结果",imgAngel);
  waitKey(0);
  return 0;
}
