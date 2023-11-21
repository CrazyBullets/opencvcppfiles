#include<iostream>


#include<opencv2/core/core.hpp>

#include<opencv2/highgui/highgui.hpp>


using namespace std;

using namespace cv;


int main(int argc, char** argv)    

{                                  

    Mat image;

    image = imread("learn.jpg");

    if (image.data == nullptr)                     //nullptr是c++11新出现的空指针常量

    {

        cout << "图片文件不存在" << endl;

    }

    else

    {

        //显示图片

        imshow("meinv", image);

        waitKey(0);

    }


    // 输出图片的基本信息

    cout << "图像宽为：" << image.cols << "\t高度为：" << image.rows << "\t通道数为：" << image.channels() << endl;


  

    // 遍历每个像素

    //之所以用y这个名字表示行 是因为图片的坐标系中行号就是y

    for (size_t y = 0; y < image.rows; y++)

    {

        unsigned char* row_ptr = image.ptr<unsigned char>(y);

        for (size_t x = 0; x < image.cols; ++x) {

            //这是获得像素数据数组的头指针，注意像素数据可能会有多个通道所以才需要用数组存储

            unsigned char* data_ptr = &row_ptr[x * image.channels()];

            //对当前像素逐个通道输出颜色值

            for (int i = 0; i < image.channels(); ++i) {

                cout << int(data_ptr[i])<<endl;

            }

        }

    }


    system("pause");

    return 0;

}
