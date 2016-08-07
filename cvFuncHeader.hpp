//
//  cvFuncHeader.hpp
//  loadImages
//
//  Created by 冉程 on 8/7/16.
//  Copyright © 2016 冉程. All rights reserved.
//

#ifndef cvFuncHeader_hpp
#define cvFuncHeader_hpp

#include <stdio.h>
#include <opencv2/highgui.hpp>
#include <opencv2/opencv.hpp>

int g_slider_position = 0;
CvCapture* g_capture = NULL;

char* convertFileName(const char* fileName);
void onTrackBarSlide(int pos);
void loadImages(char* imgName);
void loadVideo(char* videoName);

#endif /* cvFuncHeader_hpp */
