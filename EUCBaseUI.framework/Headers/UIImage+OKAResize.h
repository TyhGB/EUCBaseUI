//
//  UIImage+OKASize.h
//  CategoryManager
//
//  Created by  ZhuHong on 2017/2/22.
//  Copyright © 2017年 OKA_APP. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (OKAResize)

/**
 * 改变图片大小
 */
+ (UIImage*)oka_resizeImage:(UIImage *)image toSize:(CGSize)size;

/* 按比例缩放**/
+ (UIImage*)oka_resizeImage:(NSString *)imageName withScale:(CGFloat)scale;



/** 全局压缩 */
- (NSData *)oka_globalImageScale;


/** 解决旋转90度问题 */
+ (UIImage *)fixOrientation:(UIImage *)aImage;


/** 压缩到指定的比例 */
- (NSData *)oka_imageDataScaledWithTargetScale:(CGFloat)scale;

/**
 * XLL最终版
 * 最终版图片压缩(不失真,不飙升内存)
 */
- (NSData *)oka_imageDataScaledWithTargetSize:(CGSize)targetSize;


/**
 *  调整图片尺寸和大小
 *
 *  @param sourceImage  原始图片
 *  @param maxImageSize 新图片最大尺寸
 *  @param maxSize      新图片最大存储大小
 *
 *  @return 新图片imageData
 */
+ (NSData *)oka_dataFromResizeImage:(UIImage *)sourceImage
                       maxImageSize:(CGFloat)maxImageSize
                      maxSizeWithKB:(CGFloat) maxSize;

@end
