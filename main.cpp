
// Indian License Plate Detector using Viola Jones Algorithm of Object Detection.
// Author : Zohaib, Date : 1 April, 2023.
 
// Importing necessary header files.
#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>
#include<opencv2/objdetect.hpp>


using namespace cv;
using namespace std;


void main()
{
	//Importing WebCam
	VideoCapture cap(1);
	Mat img;

	//Declaring Cascade Classifier Object.
	CascadeClassifier plateCascade;

	//Loading the HaarCascade Classifier (XML) File.
	plateCascade.load("Resources/haarcascade_india_license_plate.xml");

	if (plateCascade.empty())
	{
		cout << "XML file not detected\n";
	}

	vector<Rect> plates;
	
	while (true)
	{
		cap.read(img);

		plateCascade.detectMultiScale(img, plates, 1.1, 10); // detect plates.


		for (int i = 0; i < plates.size(); i++)
		{
			Mat imgCrop = img(plates[i]);
			
			//imshow(to_string(i), imgCrop); // To output cropped detected plateimages in real time.
			imwrite("Resources/Plates/" + to_string(i) +".png", imgCrop); // Saves the cropped detected plate image in our Folder.
			rectangle(img, plates[i].tl(), plates[i].br(), Scalar(255, 0, 255), 3); // Creates a contour around detected image.
		}

		imshow("Image", img);
		waitKey(1);

	}

}