//
//  EUCMergeForwardItemCell.h
//  EUCIMManager
//
//  Created by Rakuyo on 2017/12/6.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseCell.h"
@class EUCMergeForwardItemCell;

NS_ASSUME_NONNULL_BEGIN

@protocol EUCMergeForwardItemCellDelegate <NSObject>
@optional

/**
 * 点击（非纯文字）功能模块视图的代理回调
 * 纯文字 Label 不提供点击事件。

 * @param cell 点击的 Cell
 * @param messageModel Cell 对应的数据源
 */
- (void)mergeForwardItemCell:(EUCMergeForwardItemCell *)cell didTapFeatureViewWithMessageModel:(EUCMessageModel *)messageModel;

/**
 * 长按功能模块视图的代理回调
 * 等待时间 1S、可移动距离 5

 * @param cell 长按的 Cell
 * @param messageModel Cell 对应的数据源
 */
- (void)mergeForwardItemCell:(EUCMergeForwardItemCell *)cell didLongPressFeatureViewWithMessageModel:(EUCMessageModel *)messageModel;

/**
 * 点击 TextLable 中的 URL 的回调

 * @param cell URL 所在的 Cell
 * @param URL 被点击的 URL
 */
- (void)mergeForwardItemCell:(EUCMergeForwardItemCell *)cell didTapURL:(NSURL *)URL;

@end

@interface EUCMergeForwardItemCell : EUCBaseCell

@property (nonatomic, weak) id<EUCMergeForwardItemCellDelegate> delegate;

/** 消息模型 */
@property (nonatomic, strong, readonly) EUCMessageModel *messageModel;

/** 图片类型的消息，对应的 ImageView （非图片类型消息、图片为空时返回 nil。使用前请判断） */
@property (nonatomic, readonly, strong, nullable) UIImageView *pictureMessageImageView;

/**
 * 初始化 Cell
 
 * @param tableView TableView
 * @param messageModel 消息数据
 * @param hideAvatar 是否隐藏头像
 * @param thumbnail 是否是在缩略转发控制器中显示
 * @param hideDividingLine 是否隐藏分割线
 * @param moreThanMaxLayers 是否超过合并转发最大允许层数（合并转发嵌套使用）
 * @return Cell
 */
+ (instancetype)cellWithTableView:(UITableView *)tableView
                     messageMdoel:(EUCMessageModel *)messageModel
                        thumbnail:(BOOL)thumbnail
                       hideAvatar:(BOOL)hideAvatar
                 hideDividingLine:(BOOL)hideDividingLine
                moreThanMaxLayers:(BOOL)moreThanMaxLayers;

/**
 * 获取 Cell 高度

 * @param messageModel 消息数据源
 * @return Cell 高度
 */
+ (CGFloat)cellHeightWithMessageModel:(EUCMessageModel *)messageModel;

@end

NS_ASSUME_NONNULL_END
