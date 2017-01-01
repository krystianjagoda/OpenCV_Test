#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{

	IplImage* img = cvLoadImage("C:\\Workspace\\VisualStudio\\OpenCV_Test\\opencv_logo.png", CV_LOAD_IMAGE_COLOR);

	cvNamedWindow("Display_window", WINDOW_AUTOSIZE);// Create a window for display.
	cvShowImage("Display_window", img);
	cvWaitKey(0);
	cvReleaseImage(&img);


	cvDestroyAllWindows();

	return 0;
}