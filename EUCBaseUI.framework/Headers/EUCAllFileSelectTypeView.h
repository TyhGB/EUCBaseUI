//
//  EUCAllFileSelectTypeView.h
//  EUCIMManager
//
//  Created by Admin on 2017/9/28.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseView.h"
@class EUCAllFileSelectTypeView;

@protocol EUCAllFileSelectTypeViewDelegate <NSObject>

- (void)allFileSelectTypeView:(EUCAllFileSelectTypeView *)selectView didClickAtioc:(NSString *)title fileType:(NSInteger)type;

@end

@interface EUCAllFileSelectTypeView : EUCBaseView

@property (nonatomic, assign) BOOL hideAfterTouchOutside; ///< 是否开启点击外部隐藏弹窗, 默认为YES.
@property (nonatomic, assign) BOOL showShade; ///< 是否显示阴影, 如果为YES则弹窗背景为半透明的阴影层, 否则为透明, 默认为NO.

@property (nonatomic, weak) id<EUCAllFileSelectTypeViewDelegate> delegate;


+ (instancetype)popoverView;

/*! @brief 指向指定的View来显示弹窗
 *  @param pointView 箭头指向的View
 */
- (void)showToView:(UIView *)pointView withActions:(NSArray *)titleArray;

/*! @brief 指向指定的点来显示弹窗
 *  @param toPoint 箭头指向的点(这个点的坐标需按照keyWindow的坐标为参照)
 */
- (void)showToPoint:(CGPoint)toPoint withActions:(NSArray *)titleArray;

@end
