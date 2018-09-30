//
//  UIImage+OKA.h
//  CategoryManager
//
//  Created by  ZhuHong on 2017/2/22.
//  Copyright © 2017年 OKA_APP. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void (^oka_saveImageCompleteBlock)(BOOL isAuthorized,BOOL successed);

@interface UIImage (OKAQuick)

/**
 * 一般用于全局的图片获取
 */
+ (UIImage *)imageWithName:(NSString *)name;

/**
 * 返回一张自由拉伸的图片
 */
+ (UIImage *)resizedImageWithName:(NSString *)name;

/** 
 * 返回一张自由拉伸的图片, 有比例
 */
+ (UIImage *)resizedImageWithName:(NSString *)name left:(CGFloat)left top:(CGFloat)top;

/**
 * 根据颜色获取一个纯色的图片
 */
+ (UIImage *)imageWithColor:(UIColor *)color;

/** By K6F
 * 返回一张带圆角的图片
 */
- (instancetype)oka_circleImageWithRadius:(CGFloat)radius sizeToFit:(CGSize)size;
/** -
 * 使用 PhotoKit 保存图片，内含权限申请
 *
 */
-(void)oka_saveImageWithComplete:(oka_saveImageCompleteBlock)completeBlock;

@end
