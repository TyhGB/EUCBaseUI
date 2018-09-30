//
//  OKAScanLineFrameView.h
//  CommonToolsManager
//
//  Created by  ZhuHong on 2017/10/14.
//  Copyright © 2017年 EasyMoveMobile. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface OKAScanLineFrameView : UIView

/**
 四周线条宽度 (开始使用)
 */
@property (assign, nonatomic) CGFloat frameLineWidth;
@property (strong, nonatomic) UIColor *frameLineColor;


/**
 拐角处线条宽度
 */
@property (assign, nonatomic) CGFloat cornerLineWidth;

/**
 拐角处线条长度
 */
@property (assign, nonatomic) CGFloat cornerLineLength;
@property (strong, nonatomic) UIColor *cornerLineColor;

@end
