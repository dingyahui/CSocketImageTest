#pragma once
#include <opencv2/opencv.hpp>

class ImageProcess {

public:
	ImageProcess() {}
	~ImageProcess() {}

	int imageProcess(cv::Mat image);

private:

	void svmJudge(cv::Mat srcImage);

	cv::Ptr<cv::ml::SVM> svm = cv::Algorithm::load<cv::ml::SVM>("../xml/DATA.xml");
	int number = 0;
};
