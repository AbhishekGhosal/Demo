#include <opencv2\core\core.hpp>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgproc\imgproc.hpp>
#include <iostream>




int main() {

	cv::Mat imgOriginal = cv:: imread("image.jpg");
	if (imgOriginal.empty()) {
		std::cout << "error loading image" << std::endl;
		system("pause");
		return 0;
	}

	cv::namedWindow("imgOriginal", CV_WINDOW_NORMAL);
	cv::imshow("imgOriginal", imgOriginal);

	cv::waitKey(0);
	cv::destroyWindow("imgOriginal");

	return 0;
}
