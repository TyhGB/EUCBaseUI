//
//  UIViewController+BaseConfiguration.h
//  EUCIMManager
//
//  Created by  ZhuHong on 2017/5/25.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

/** 
 基控制器的公共处理
 */

#import <UIKit/UIKit.h>

@interface UIViewController (BaseConfiguration)

/**
 非主页控制器添加返回按钮
 */
- (void)addBackButton;

/**
 当内存吃紧的时候,取消当前下载/清除内存总所有的图片
 */
- (void)cancellWebImageMemory;

/**
 pop方法
 */
- (void)popLastViewControllerWithAnimation;

@end
