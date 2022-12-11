#include <opencv2/highgui.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main( int argc, char** argv )
{
    Mat im = imread("lenna.png", 0);
    if (im.empty())
    {
        cout << "cannot load" <<endl;
        return -1;
    }else{

        imshow("Image", im);
        waitKey(0);
        return 0;

    }

}