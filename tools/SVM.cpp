#include <opencv2/opencv.hpp>
#include <iostream>
#include <vector>
#include <io.h>

//#define USE_RGB

#define POSITIVE_TRAIN_DATA_PATH_ZERO "D:\\2021RM\\image\\number\\zero"
#define POSITIVE_TRAIN_DATA_PATH_ONE "D:\\2021RM\\image\\number\\one"
#define POSITIVE_TRAIN_DATA_PATH_TWO "D:\\2021RM\\image\\number\\two"
#define POSITIVE_TRAIN_DATA_PATH_THREE "D:\\2021RM\\image\\number\\three"
#define POSITIVE_TRAIN_DATA_PATH_FOUR "D:\\2021RM\\image\\number\\four"
#define POSITIVE_TRAIN_DATA_PATH_FIVE "D:\\2021RM\\image\\number\\five"
#define POSITIVE_TRAIN_DATA_PATH_SIX "D:\\2021RM\\image\\number\\six"
#define POSITIVE_TRAIN_DATA_PATH_SEVEN "D:\\2021RM\\image\\number\\seven"
#define POSITIVE_TRAIN_DATA_PATH_EIGHT "D:\\2021RM\\image\\number\\eight"
#define POSITIVE_TRAIN_DATA_PATH_NINE "D:\\2021RM\\image\\number\\nine"

#define NEGATIVE_TRAIN_DATA_PATH "D:\\RM\\sample\\saveImg\\false"
#define TEST_DATA_PATH "D:/Robomaster/2020/SVM/样本/test"
//#define TEST_DATA_PATH "../../../TrainData/armor/negative"
#define RESIZE_SIZE_LENGTH 90
#define RESIZE_SIZE_WIDTH 28
#define SAVE_NAME_RGB "BUFF_SVM_DATA_RGB.xml"
#define SAVE_NAME "BUFF_SVM_DATA.xml"


using namespace std;

/**
 * 获得图片名称列表
 * @param path
 * @param files
 */
void getFiles(const string& path, vector<string>& files) {
    long long hFile = 0;
    struct _finddata_t fileInfo;
    string p;
    if ((hFile = _findfirst(p.assign(path).append("/*").c_str(), &fileInfo)) != -1) {
        do {
            if ((fileInfo.attrib & _A_SUBDIR)) {
                if (strcmp(fileInfo.name, ".") != 0 && strcmp(fileInfo.name, "..") != 0)
                    getFiles(p.assign(path).append("/").append(fileInfo.name), files);
            }
            else {
                files.push_back(p.assign(path).append("/").append(fileInfo.name));
            }
        } while (_findnext(hFile, &fileInfo) == 0);

        _findclose(hFile);
    }
}

/**
 * 获得训练图片
 * @param trainingImages
 * @param trainingLabels
 */
void getTrain(cv::Mat& trainingImages, vector<int>& trainingLabels) {

    string filePathZero = POSITIVE_TRAIN_DATA_PATH_ZERO;
    vector<string> filesZero;
    getFiles(filePathZero, filesZero);
    size_t numberZero = filesZero.size();
    for (int i = 0; i < numberZero; i++) {
        cv::Mat SrcImage = cv::imread(filesZero[i].c_str());
        resize(SrcImage, SrcImage, cv::Size(RESIZE_SIZE_WIDTH, RESIZE_SIZE_WIDTH));
#ifndef USE_RGB
        cvtColor(SrcImage, SrcImage, cv::COLOR_BGR2GRAY);
#endif
        SrcImage = SrcImage.reshape(1, 1);
        SrcImage.convertTo(SrcImage, CV_32FC1);
        normalize(SrcImage, SrcImage);
        trainingImages.push_back(SrcImage);
        trainingLabels.push_back(0);
    }
    cout << "zero:" << numberZero << endl;

    string filePathOne = POSITIVE_TRAIN_DATA_PATH_ONE;
    vector<string> filesOne;
    getFiles(filePathOne, filesOne);
    size_t numberOne = filesOne.size();
    for (int i = 0; i < numberOne; i++) {
        cv::Mat SrcImage = cv::imread(filesOne[i].c_str());
        resize(SrcImage, SrcImage, cv::Size(28, 28));
#ifndef USE_RGB
        cvtColor(SrcImage, SrcImage, cv::COLOR_BGR2GRAY);
#endif
        SrcImage = SrcImage.reshape(1, 1);
        SrcImage.convertTo(SrcImage, CV_32FC1);
        normalize(SrcImage, SrcImage);
        trainingImages.push_back(SrcImage);
        trainingLabels.push_back(1);
    }
    cout << "one:" << numberOne << endl;

    string filePathTwo = POSITIVE_TRAIN_DATA_PATH_TWO;
    vector<string> filesTwo;
    getFiles(filePathTwo, filesTwo);
    size_t numberTwo = filesTwo.size();
    for (int i = 0; i < numberTwo; i++) {
        cv::Mat SrcImage = cv::imread(filesTwo[i].c_str());
        resize(SrcImage, SrcImage, cv::Size(RESIZE_SIZE_WIDTH, RESIZE_SIZE_WIDTH));
#ifndef USE_RGB
        cvtColor(SrcImage, SrcImage, cv::COLOR_BGR2GRAY);
#endif
        SrcImage = SrcImage.reshape(1, 1);
        SrcImage.convertTo(SrcImage, CV_32FC1);
        normalize(SrcImage, SrcImage);
        trainingImages.push_back(SrcImage);
        trainingLabels.push_back(2);
    }
    cout << "tow:" << numberTwo << endl;

    string filePathThree = POSITIVE_TRAIN_DATA_PATH_THREE;
    vector<string> filesThree;
    getFiles(filePathThree, filesThree);
    size_t numberThree = filesThree.size();
    for (int i = 0; i < numberThree; i++) {
        cv::Mat SrcImage = cv::imread(filesThree[i].c_str());
        resize(SrcImage, SrcImage, cv::Size(RESIZE_SIZE_WIDTH, RESIZE_SIZE_WIDTH));
#ifndef USE_RGB
        cvtColor(SrcImage, SrcImage, cv::COLOR_BGR2GRAY);
#endif
        SrcImage = SrcImage.reshape(1, 1);
        SrcImage.convertTo(SrcImage, CV_32FC1);
        normalize(SrcImage, SrcImage);
        trainingImages.push_back(SrcImage);
        trainingLabels.push_back(3);
    }
    cout << "three:" << numberThree << endl;

    string filePathFour = POSITIVE_TRAIN_DATA_PATH_FOUR;
    vector<string> filesFour;
    getFiles(filePathFour, filesFour);
    size_t numberFour = filesFour.size();
    for (int i = 0; i < numberFour; i++) {
        cv::Mat SrcImage = cv::imread(filesFour[i].c_str());
        resize(SrcImage, SrcImage, cv::Size(RESIZE_SIZE_WIDTH, RESIZE_SIZE_WIDTH));
#ifndef USE_RGB
        cvtColor(SrcImage, SrcImage, cv::COLOR_BGR2GRAY);
#endif
        SrcImage = SrcImage.reshape(1, 1);
        SrcImage.convertTo(SrcImage, CV_32FC1);
        normalize(SrcImage, SrcImage);
        trainingImages.push_back(SrcImage);
        trainingLabels.push_back(4);
    }
    cout << "four:" << numberFour << endl;

    string filePathFive = POSITIVE_TRAIN_DATA_PATH_FIVE;
    vector<string> filesFive;
    getFiles(filePathFive, filesFive);
    size_t numberFive = filesFive.size();
    for (int i = 0; i < numberFive; i++) {
        cv::Mat SrcImage = cv::imread(filesFive[i].c_str());
        resize(SrcImage, SrcImage, cv::Size(RESIZE_SIZE_WIDTH, RESIZE_SIZE_WIDTH));
#ifndef USE_RGB
        cvtColor(SrcImage, SrcImage, cv::COLOR_BGR2GRAY);
#endif
        SrcImage = SrcImage.reshape(1, 1);
        SrcImage.convertTo(SrcImage, CV_32FC1);
        normalize(SrcImage, SrcImage);
        trainingImages.push_back(SrcImage);
        trainingLabels.push_back(5);
    }
    cout << "five:" << numberFive << endl;

    string filePathSix = POSITIVE_TRAIN_DATA_PATH_SIX;
    vector<string> filesSix;
    getFiles(filePathSix, filesSix);
    size_t numberSix = filesSix.size();
    for (int i = 0; i < numberSix; i++) {
        cv::Mat SrcImage = cv::imread(filesSix[i].c_str());
        resize(SrcImage, SrcImage, cv::Size(RESIZE_SIZE_WIDTH, RESIZE_SIZE_WIDTH));
#ifndef USE_RGB
        cvtColor(SrcImage, SrcImage, cv::COLOR_BGR2GRAY);
#endif
        SrcImage = SrcImage.reshape(1, 1);
        SrcImage.convertTo(SrcImage, CV_32FC1);
        normalize(SrcImage, SrcImage);
        trainingImages.push_back(SrcImage);
        trainingLabels.push_back(6);
    }
    cout << "six:" << numberSix << endl;

    string filePathSeven = POSITIVE_TRAIN_DATA_PATH_SEVEN;
    vector<string> filesSeven;
    getFiles(filePathSeven, filesSeven);
    size_t numberSeven = filesSeven.size();
    for (int i = 0; i < numberSeven; i++) {
        cv::Mat SrcImage = cv::imread(filesSeven[i].c_str());
        resize(SrcImage, SrcImage, cv::Size(RESIZE_SIZE_WIDTH, RESIZE_SIZE_WIDTH));
#ifndef USE_RGB
        cvtColor(SrcImage, SrcImage, cv::COLOR_BGR2GRAY);
#endif
        SrcImage = SrcImage.reshape(1, 1);
        SrcImage.convertTo(SrcImage, CV_32FC1);
        normalize(SrcImage, SrcImage);
        trainingImages.push_back(SrcImage);
        trainingLabels.push_back(7);
    }
    cout << "seven:" << numberSeven << endl;

    string filePathEight = POSITIVE_TRAIN_DATA_PATH_EIGHT;
    vector<string> filesEight;
    getFiles(filePathEight, filesEight);
    size_t numberEight = filesEight.size();
    for (int i = 0; i < numberEight; i++) {
        cv::Mat SrcImage = cv::imread(filesEight[i].c_str());
        resize(SrcImage, SrcImage, cv::Size(RESIZE_SIZE_WIDTH, RESIZE_SIZE_WIDTH));
#ifndef USE_RGB
        cvtColor(SrcImage, SrcImage, cv::COLOR_BGR2GRAY);
#endif
        SrcImage = SrcImage.reshape(1, 1);
        SrcImage.convertTo(SrcImage, CV_32FC1);
        normalize(SrcImage, SrcImage);
        trainingImages.push_back(SrcImage);
        trainingLabels.push_back(8);
    }
    cout << "eight:" << numberEight << endl;

    string filePathNine = POSITIVE_TRAIN_DATA_PATH_NINE;
    vector<string> filesNine;
    getFiles(filePathNine, filesNine);
    size_t numberNine = filesNine.size();
    for (int i = 0; i < numberNine; i++) {
        cv::Mat SrcImage = cv::imread(filesNine[i].c_str());
        resize(SrcImage, SrcImage, cv::Size(RESIZE_SIZE_WIDTH, RESIZE_SIZE_WIDTH));
#ifndef USE_RGB
        cvtColor(SrcImage, SrcImage, cv::COLOR_BGR2GRAY);
#endif
        SrcImage = SrcImage.reshape(1, 1);
        SrcImage.convertTo(SrcImage, CV_32FC1);
        normalize(SrcImage, SrcImage);
        trainingImages.push_back(SrcImage);
        trainingLabels.push_back(9);
    }
    cout << "nine:" << numberNine << endl;
}

/**
 * 测试模型
 * @param filePath
 */
void testModel(const string& filePath) {
#ifdef USE_RGB
    cv::Ptr<cv::ml::SVM> svm = cv::Algorithm::load<cv::ml::SVM>(SAVE_NAME_RGB);
#else
    cv::Ptr<cv::ml::SVM> svm = cv::Algorithm::load<cv::ml::SVM>(SAVE_NAME);
#endif
    cout << "网络模型参数：" << endl;
    cout << "Degree = " << svm->getDegree() << endl;
    cout << "Gamma = " << svm->getGamma() << endl;
    cout << "Coef0 = " << svm->getCoef0() << endl;
    cout << "C = " << svm->getC() << endl;
    cout << "Nu = " << svm->getNu() << endl;
    cout << "P = " << svm->getP() << endl;

    vector<string> files;
    getFiles(filePath, files);

    size_t number = files.size();
    int positiveNumber = 0, negativeNumber = 0;
    double totalTime = 0;
    for (int i = 0; i < number; i++) {
        double t = (double)cv::getTickCount();
        cv::Mat SrcImage = cv::imread(files[i].c_str());
        resize(SrcImage, SrcImage, cv::Size(RESIZE_SIZE_WIDTH, RESIZE_SIZE_WIDTH));
        cvtColor(SrcImage, SrcImage, cv::COLOR_BGR2GRAY);
        cv::Mat p = SrcImage.reshape(1, 1);
        p.convertTo(p, CV_32FC1);
        normalize(p, p);
        int response = (int)svm->predict(p);
        double time = ((double)cv::getTickCount() - t) / cv::getTickFrequency();
        if (response) {
            positiveNumber++;
        }
        else {
            negativeNumber++;
        }
        totalTime += time;
        //        cout << "预测结果：" << response << "  用时：" << fixed << setprecision(8) << time << "秒" << endl;
    }
    double aveTime = totalTime / number;
    cout << "测试图片数量： " << number << endl;
    cout << "平均检测时间：" << aveTime << " 秒 " << endl;
    cout << "判断为1的个数：" << positiveNumber << endl;
    cout << "判断为0的个数：" << negativeNumber << endl;
}

int main() {

    cv::Mat classes;
    cv::Mat trainingData;
    cv::Mat trainingImages;
    vector<int> trainingLabels;

    getTrain(trainingImages, trainingLabels);
    cv::Mat(trainingImages).copyTo(trainingData);
    trainingData.convertTo(trainingData, CV_32FC1);
    cv::Mat(trainingLabels).copyTo(classes);

    cv::Ptr<cv::ml::SVM> svm = cv::ml::SVM::create();
    svm->setType(cv::ml::SVM::Types::C_SVC);
    svm->setKernel(cv::ml::SVM::KernelTypes::RBF);
    svm->setTermCriteria(cv::TermCriteria(cv::TermCriteria::EPS, 1000, FLT_EPSILON));
    svm->setDegree(0);
    svm->setGamma(1e-05);
    svm->setCoef0(0);
    svm->setC(1);
    svm->setNu(0);
    svm->setP(0);//损失函数p值


    cout << "正在疯狂学习" << endl;
    svm->trainAuto(trainingData, cv::ml::SampleTypes::ROW_SAMPLE, classes);
#ifdef USE_RGB
    svm->save(SAVE_NAME_RGB);
#else
    svm->save(SAVE_NAME);
#endif

    cout << "学完了" << endl;

    // cout << "开始测试模型" << endl;
    // testModel(TEST_DATA_PATH);

    return 0;
}

