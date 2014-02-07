// SEAM_CARVING.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/features2d/features2d.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>
#include <stdio.h>
using namespace std;
using namespace cv;
int _tmain(int argc, char * argv[])
{
	// implementing seam carving algorithm given in http://www.win.tue.nl/~wstahw/edu/2IV05/seamcarving.pdf
	// using OpenCV libraries
	
	Mat src, src_gray;
	/// Read the image
	src = imread( argv[1], 1 );
	return 0;
}

