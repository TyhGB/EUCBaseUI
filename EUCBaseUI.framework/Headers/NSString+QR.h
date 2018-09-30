//
//  NSString+QR.h
//  CommonToolsManager
//
//  Created by  ZhuHong on 2017/10/14.
//  Copyright © 2017年 EasyMoveMobile. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NSString (QR)



/**
 返回一张二维码图片
 
 @param size 图片大小
 @return 二维码图片
 */
- (UIImage*)imageWithSize:(CGFloat)size;


/**
 返回一张具有小图片叠加的二维码图片（小图片默认宽高40）
 
 @param size 大小
 @param sImage 即将叠加的小图片
 @return 一张具有小图片叠加的二维码图片
 */
- (UIImage*)imageWithSize:(CGFloat)size superposition:(UIImage*)sImage;

/**
 返回一张具有指定尺寸的小图片叠加的二维码图片
 
 @param size 大小
 @param sImage 即将叠加的小图片
 @param sImageSize 即将叠加的小图片的大小
 @return 一张具有小图片叠加的二维码图片
 */
- (UIImage*)imageWithSize:(CGFloat)size superposition:(UIImage*)sImage sImageSize:(CGSize)sImageSize;

/**
 返回一张具有指定尺寸的小图片叠加的二维码图片
 
 @param size 大小
 @param sImage 即将叠加的小图片
 @param sImageSize 即将叠加的小图片的大小
 @param cornerRadius 即将叠加的小图片的圆角
 @return 一张具有小图片叠加的二维码图片
 */

- (UIImage*)imageWithSize:(CGFloat)size superposition:(UIImage*)sImage sImageSize:(CGSize)sImageSize cornerRadius:(CGFloat)cornerRadius;

- (UIImage*)imageWithSize:(CGFloat)size superposition:(UIImage*)sImage sImageSize:(CGSize)sImageSize borderWidth:(CGFloat)borderWidth borderColor:(UIColor *)borderColor;

- (UIImage*)imageWithSize:(CGFloat)size superposition:(UIImage*)sImage sImageSize:(CGSize)sImageSize cornerRadius:(CGFloat)cornerRadius borderWidth:(CGFloat)borderWidth borderColor:(UIColor *)borderColor;

@end
