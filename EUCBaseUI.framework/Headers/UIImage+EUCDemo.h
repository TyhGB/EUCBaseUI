//
//  UIImage+EUCDemo.h
//  EUCSDK_Sample
//
//  Created by 肖乐 on 2018/3/20.
//  Copyright © 2018年 IMMoveMobile. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (EUCDemo)

// 压缩图片质量返回NSData
- (NSData *)compressImageDataToByte:(NSUInteger)maxLength;

/** 获取视频第一帧图片 */
+ (UIImage*)getVideoPreViewImage:(NSURL *)videoUrl;

/**
 * 根据颜色获取一个纯色的图片
 */
+ (UIImage *)imageWithColor:(UIColor *)color;

@end
