//
//  EUCSideSlipCell.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/4/19.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//  兼容所有系统的侧滑cell

#import "EUCBaseCell.h"
#import <uikit/UIKitDefines.h>

//如果需要每个属性或每个方法都去指定nonnull和nullable，是一件非常繁琐的事。苹果为了减轻我们的工作量，专门提供了两个宏：NS_ASSUME_NONNULL_BEGIN和NS_ASSUME_NONNULL_END
//nonnull对象不应为空， nullable对象可以为空,为了匹配swift的non-option和option而定制的

NS_ASSUME_NONNULL_BEGIN

//__TVOS_PROHIBITED 装波逼,这个是苹果内部人员使用宏，意为智能电视应用开发禁止使用此方法
//仿系统样式
typedef NS_ENUM(NSInteger, EUCTableViewRowActionStyle) {
    EUCTableViewRowActionStyleDefault = 0, //默认样式（蓝色）
    EUCTableViewRowActionStyleDestructive,  //红色
    EUCTableViewRowActionStyleNormal  //灰底
} __TVOS_PROHIBITED;



__TVOS_PROHIBITED @interface EUCTableViewRowAction : NSObject

//创建方法
+ (nonnull instancetype)rowActionWithStyle:(EUCTableViewRowActionStyle)style title:(nullable NSString *)title handler:(void (^)(EUCTableViewRowAction *action, NSIndexPath *indexPath))handler;

@property (nonatomic, readonly) EUCTableViewRowActionStyle style;
@property (nonatomic, copy, nullable) NSString * title;
//默认透明的背景色
@property (nonatomic, copy, nullable) UIColor *backgroundColor;
//按钮图片，默认无图
@property (nonatomic, strong, nullable) UIImage *image;
//按钮字体大小 默认17
@property (nonatomic, assign) CGFloat fontSize;
//字体颜色，默认白色
@property (nonatomic, strong, nullable) UIColor *titleColor;
//内容左右间距，默认15
@property (nonatomic, assign) CGFloat margin;

@end

@class EUCSideSlipCell;
@protocol EUCSideSlipCellDelegate <NSObject>

@optional
/**
 * 选中action代理
 * @param cell     选中的cell
 * @param index    选中第几个action
 */
- (void)sideSlipCell:(EUCSideSlipCell *)cell didSelectedAtIndex:(NSInteger)index;

/**
 * 返回侧滑事件
 * @param cell   滑动的cell
 */
- (nullable NSArray<EUCTableViewRowAction *> *)editActionsForRowInSideSlipCell:(EUCSideSlipCell *)cell;

@end

@interface EUCSideSlipCell : EUCBaseCell

@property (nonatomic, weak) id <EUCSideSlipCellDelegate> delegate;

// 禁止拖拽
@property (nonatomic, assign, getter = isProhibitDrag) BOOL prohibitDrag;

// 关闭右滑动画（关闭后可避免和pop手势冲突）
@property (nonatomic, assign, getter = isCloseRightSlide) BOOL closeRightSlide;

//隐藏侧滑按钮
- (void)hiddenAllSideslip;
- (void)hiddenSideslip;

@end


@interface UITableView (EUCSideSlipCell)

- (void)hiddenAllSideslip;
- (BOOL)isHaveSideslip;

@end

NS_ASSUME_NONNULL_END
