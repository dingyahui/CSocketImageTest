#include "imageProcess.h"


void ImageProcess::svmJudge(cv::Mat srcImage) {
	cv::Mat p = srcImage.reshape(1, 1);
	p.convertTo(p, CV_32FC1);
	normalize(p, p);
	int response = (int)svm->predict(p);
	number = response;
	if (response == 0) {
		std::cout << ">>this is zero!" << std::endl;
	}
	else if (response == 1) {
		std::cout << ">>this is one!" << std::endl;
	}
	else if (response == 2) {
		std::cout << ">>this is two!" << std::endl;
	}
	else if (response == 3) {
		std::cout << ">>this is three!" << std::endl;
	}
	else if (response == 4) {
		std::cout << ">>this is four!" << std::endl;
	}
	else if (response == 5) {
		std::cout << ">>this is five!" << std::endl;
	}
	else if (response == 6) {
		std::cout << ">>this is six!" << std::endl;
	}
	else if (response == 7) {
		std::cout << ">>this is seven!" << std::endl;
	}
	else if (response == 8) {
		std::cout << ">>this is eight!" << std::endl;
	}
	else {
		std::cout << ">>this is nine!" << std::endl;
	}

}

int ImageProcess::imageProcess(cv::Mat image) {
	cv::Mat SrcImage;
	//cv::imshow("image", image);

	cv::resize(image, SrcImage, cv::Size(28, 28));

	cv::cvtColor(SrcImage, SrcImage, cv::COLOR_BGR2GRAY);

	svmJudge(SrcImage);

	//cv::waitKey(0);

	return number;
}
