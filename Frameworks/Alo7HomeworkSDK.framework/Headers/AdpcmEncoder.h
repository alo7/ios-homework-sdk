//
//  Encoder.h
//  AudioDemo
//
//  Created by Joseph Lee on 2018/11/12.
//  Copyright © 2018年 Joseph Lee. All rights reserved.
//

#import <AVFoundation/AVFoundation.h>
#import <Foundation/Foundation.h>

@interface AdpcmEncoder : NSObject

+ (BOOL)pcmToWavWithInput:(NSString *)input withOutput:(NSString *)output;
+ (AudioStreamBasicDescription)audioStreamBasicDescription;

@end
