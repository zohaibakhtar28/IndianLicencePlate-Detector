# Indian License Plate Detector using Haar Cascade and OpenCV in C++

This project aims to detect and extract Indian license plates from images using the Haar Cascade method in OpenCV and C++. The Haar Cascade method is a popular object detection technique that uses machine learning algorithms to detect objects in images or videos.

# Requirements

1.) OpenCV

2.) C++ Compiler

# Usage

1.) To use the license plate detector, follow these steps:

2.) Clone the repository.

3.) Compile the code using a C++ compiler.

4.) Run the executable file with the path to the image you want to detect the license plate from.

5.) The program will output the detected license plate as a separate image.

# How it Works
The license plate detector using Haar Cascade method uses the following steps to detect and extract license plates:

1.) Load the input image.

2.) Convert the image to grayscale.

3.) Load the Haar Cascade classifier for license plate detection.

4.) Detect license plate regions in the image using the classifier.

5.) Filter out the regions based on their size and aspect ratio.

6.) Extract the license plate region from the image and saves it in the folder.

Apply OCR (Optical Character Recognition) to the extracted license plate to read the characters.

# Limitations
The license plate detector using Haar Cascade method may not work well in the following scenarios:

1.) Low-quality images with poor lighting or blurriness.

2.) Non-standard license plate formats, such as personalized or temporary plates.

3.) Obstructed or partially visible license plates.

# Credits

1.) This project is inspired by and based on the OPENCV using C++ Course by Murtaza's Workshop - Robotics and AI (Youtube).




