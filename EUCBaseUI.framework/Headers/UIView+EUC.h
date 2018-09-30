//
//  UIView+EUC.h
//  EUCIMManager
//
//  Created by  ZhuHong on 2016/12/16.
//  Copyright © 2016年 BBDTEK. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (EUC)

/** 图片选择动画 */
+ (void)showOscillatoryAnimationWithLayer:(CALayer *)layer;

/** 类似控制器显示文字的那种,只不过现在显示在自定义view上 */
- (void)showCenterViewWithTitle:(NSString *)title;


/** 寻找第一响应者的视图 */
- (UIView *)findFirstResponder;

@end
