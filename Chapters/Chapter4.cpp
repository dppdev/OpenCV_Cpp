#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

///////////// Draw Shapes and Text

void main() {
	//Blank Images
	Mat img(512, 512, CV_8UC3, Scalar(255,255,255));

	circle(img, Point(256, 256), 155, Scalar(0, 69, 255), FILLED);
	rectangle(img, Point(130, 226), Point(382, 286),Scalar(255,255,255), FILLED);
	line(img, Point(130, 296), Point(382,296),Scalar(255,255,255),2);

	putText(img, "STOP", Point(155, 278), FONT_HERSHEY_DUPLEX, 2.5, Scalar(0, 69, 255), 3);

	imshow("Image", img);
	

	waitKey(0);
}