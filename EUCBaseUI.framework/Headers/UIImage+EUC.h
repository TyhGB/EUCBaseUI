//
//  UIImage+EUC.h
//  EUCIMManager
//
//  Created by  ZhuHong on 2017/1/11.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (EUC)

/**
 * 根据颜色获取一个纯色的图片
 */
+ (UIImage *)imageWithColor:(UIColor *)color;

/** 全局压缩 */
- (NSData *)gloabalImageScale;

/** 解决旋转90度问题 */
+ (UIImage *)fixOrientation:(UIImage *)aImage;

/** 裁剪对应尺寸的图 */
- (UIImage *)resizeImageToSize:(CGSize)size;

/** 获取视频第一帧图片 */
+ (UIImage*)getVideoPreViewImage:(NSURL *)videoUrl;

+ (NSString *)imageSizeWithImage:(UIImage *)image;

+ (NSData *)compressImageData:(UIImage *)image toByte:(NSUInteger)maxLength;

@end
