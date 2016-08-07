//
//  main.cpp
//  loadImages
//
//  Created by 冉程 on 8/7/16.
//  Copyright © 2016 冉程. All rights reserved.
//

#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/opencv.hpp>
#include "cvFuncHeader.hpp"

/*char* convertFileName(const char* fileName){
    char* name;
    size_t len = strlen(fileName);
    if (len!=0) {
        name = (char *)malloc(len+1);
    }
    if (name == NULL) {
        std::cout<<"Allocaiton Failed"<<std::endl;
        return NULL;
    }
    strcpy(name, fileName);
    return name;
}

void onTrackBarSlide(int pos){
    cvSetCaptureProperty(g_capture, CV_CAP_PROP_POS_FRAMES, pos);
}

void loadImages(char* imgName){
    IplImage* image = cvLoadImage(imgName);
    cvNamedWindow("WK",CV_WINDOW_AUTOSIZE);
    cvShowImage("WK", image);
    cvWaitKey(0);
    cvReleaseImage(&image);
    cvDestroyWindow("WK");
}


void loadVideo(char* videoName){
    cvNamedWindow("Video Loading",CV_WINDOW_AUTOSIZE);
    CvCapture* capture = cvCreateFileCapture(videoName);
    IplImage* frame;
    while (1) {
        frame = cvQueryFrame(capture);
        if(!frame){
            break;
        }
        cvShowImage("Video Loading", frame);
        char c = cvWaitKey(33);
        if(c == 27){
            break;
        }
    }
}
 */

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
 /*   size_t len = strlen(argv[1]);
    char* file_name = (char* )malloc(len+1);
    if (file_name == NULL) {
        std::cout<< "Allocaiton Failed"<<std::endl;
    }
    strcpy(file_name, argv[1]);
  */
    char* img_name;
    char* video_name;
    img_name = convertFileName(argv[1]);
    video_name = convertFileName(argv[2]);
    loadImages(img_name);
    loadVideo(video_name);
    free(img_name);
    return 0;
}

