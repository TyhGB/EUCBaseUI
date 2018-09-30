//
//  UIBarButtonItem+EUC.h
//  EUCIMManager
//
//  Created by  ZhuHong on 2017/1/10.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIBarButtonItem (EUC)

+ (instancetype)itemTarget:(id)target sel:(SEL)sel title:(NSString*)title;

/**
 *  导航栏按钮添加 (文字 + 图片)
 *
 *  @param title     按钮文字 //没有就传nil
 *  @param imageName 图片名称 //没有就传nil
 *  @param action    按钮点击事件 //没有就传nil
 */
+ (UIBarButtonItem *)addRightBarButtonWithTitle:(NSString *)title WithImage:(NSString *)imageName WithTarget:(id)target action:(SEL)action ;

@end
