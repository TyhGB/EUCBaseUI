//
//  OKAPhotosGlobal.h
//  OKAPhotosDemo
//
//  Created by XXL on 2017/9/5.
//  Copyright © 2017年 EasyMoveMobile. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define OKAGLOBAL [OKAPhotosGlobal global]

@interface OKAPhotosGlobal : NSObject

@property (nonatomic, strong) UIColor *globalTextColor;

@property (nonatomic, strong) UIColor *globalBackArrowColor;

@property (nonatomic, strong) UIImage *globalBackArrowImage;

+ (instancetype)global;

+ (UIImage *)configureImage:(UIImage *)image tintColor:(UIColor *)tintColor;

@end
