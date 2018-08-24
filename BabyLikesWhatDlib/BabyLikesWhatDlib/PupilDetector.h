//
//  PupilDetector.h
//  BabyLikesWhatDlib
//
//  Created by Jonas Nockert on 2018-08-11.
//  Copyright © 2018 Jonas Nockert. All rights reserved.
//

#import <opencv2/opencv.hpp>
#import <Foundation/Foundation.h>

@interface PupilDetector : NSObject

+ (cv::Point) cdfDetection:(cv::Mat)eye_image out1:(cv::Mat &)out1;

@end
