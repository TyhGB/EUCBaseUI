//
//  EUCPixelView.h
//  EUCIMManager
//
//  Created by 肖乐 on 2018/2/2.
//  Copyright © 2018年 BBDTEK. All rights reserved.
//  1像素的线

#import "EUCBaseView.h"

typedef NS_ENUM(NSInteger, EUCPixelViewLineMode) {
    
    EUCPixelViewLineModeTop = 0,  //顶部线
    EUCPixelViewLineModeBottom    //底部线
};

@interface EUCPixelView : EUCBaseView

@property (nonatomic, assign) EUCPixelViewLineMode lineMode;
/**
 * @brief 网格颜色，默认蓝色
 */
@property (nonatomic, strong) UIColor *lineColor;

@end
