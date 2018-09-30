//
// Created by Khiyuan Fan on 2017/8/30.
// Copyright (c) 2017 OKA_APP. All rights reserved.
//

#import <UIKit/UIImage.h>

@interface UIImage (OKABlurClass)

/**
   @param alpha 透明度 0~1,  0为白,   1为深灰色
   @param radius 半径:默认30,推荐值 3   半径值越大越模糊 ,值越小越清楚
   @param colorSaturationFactor 色彩饱和度(浓度)因子:  0是黑白灰, 9是浓彩色, 1是原色  默认1.8
   “彩度”，英文是称Saturation，即饱和度。将无彩色的黑白灰定为0，最鲜艳定为9s，这样大致分成十阶段，让数值和人的感官直觉一致。
 */
- (UIImage *)okay_blurImageWithLightAlpha:(CGFloat)alpha
                                   radius:(CGFloat)radius
                    colorSaturationFactor:(CGFloat)colorSaturationFactor;

@property (NS_NONATOMIC_IOSONLY, readonly, strong) UIImage *oka_blurImage;

@end
