#include <opencv2\core\core.hpp>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgproc\imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;


int main() {

	Mat imgOriginal = imread("image.jpg");
	if (imgOriginal.empty()) {
		cout << "error loading image" << endl;
		system("pause");
		return 0;
	}

	namedWindow("imgOriginal", CV_WINDOW_NORMAL);
	imshow("imgOriginal", imgOriginal);

	waitKey(0);
	destroyWindow("imgOriginal");

	return 0;
}
