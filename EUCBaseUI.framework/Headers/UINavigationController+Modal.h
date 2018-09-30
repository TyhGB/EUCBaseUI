//
//  UINavigationController+Modal.h
//  EUCIMManager
//
//  Created by XXL on 2017/7/10.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationController (Modal)

/**
 模态的方式push

 @param viewController 目标控制器
 @param animated 是否动画
 */
- (void)presentViewController:(UIViewController *)viewController animated:(BOOL)animated;

/**
 模态的方式pop

 @param animated 是否动画
 */
- (void)dismissViewControllerAnimated:(BOOL)animated;

@end
