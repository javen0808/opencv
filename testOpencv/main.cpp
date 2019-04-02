#include <opencv2/opencv.hpp>
using namespace cv;

int main()
{
	//
	Mat src = imread("1.jpg");
	//
	imshow("output", src);
	//
	Mat Gray;
	cvtColor(src, Gray, 6);
	imshow("Gray", Gray);

	//
	waitKey(0);
	return 0;
}