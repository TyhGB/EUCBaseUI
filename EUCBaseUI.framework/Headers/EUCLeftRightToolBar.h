//
//  EUCLeftRightToolBar.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/12/3.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

/** 为了更好的扩展性，不再称呼转发/收藏。改为称呼为左/右 */

#import "EUCBaseView.h"
@class EUCLeftRightToolBar;

typedef NS_ENUM(NSInteger, EUCLeftRightToolBarStyle) {
    EUCLeftRightToolBarStyleForward = 0,     // 转发
    EUCLeftRightToolBarStyleFavorites,       // 收藏
    EUCLeftRightToolBarStyleDelete,          // 删除
};

@protocol EUCLeftRightToolBarDelegate <NSObject>

/// 左边按钮的点击回调
- (void)leftButtonDidClick:(EUCLeftRightToolBar *)leftRightToolBar;

/// 右边按钮的点击回调
- (void)rightButtonDidClick: (EUCLeftRightToolBar *)leftRightToolBar;

@end

@interface EUCLeftRightToolBar : EUCBaseView

@property (nonatomic, weak) id<EUCLeftRightToolBarDelegate> delegate;

/**
 使用样式初始化视图

 @param leftStyle 左按钮样式
 @param rightStyle 右按钮样式
 @return 视图实例
 */
+ (instancetype)viewWithLeftStyle:(EUCLeftRightToolBarStyle)leftStyle
                       rightStyle:(EUCLeftRightToolBarStyle)rightStyle;

@end
