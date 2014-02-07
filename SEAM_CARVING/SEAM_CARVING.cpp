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

	// implementing seam carving algorithm given in http://www.win.tue.nl/~wstahw/edu/2IV05/seamcarving.pdf
	// using OpenCV libraries

int main(int argc, char** argv)
{
	Mat src;
	/// Read the image
	src = imread( argv[1], 1 );
	// Copy is used to mark detected blobs without using original image. 
	// This may be over precautionary and subject to change
	if( !src.data )
	{ return -1; }

	imshow( "Output", src );

	waitKey(0);
	return 0;
}

