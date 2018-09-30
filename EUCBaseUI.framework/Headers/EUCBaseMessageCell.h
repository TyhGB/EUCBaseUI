//
//  EUCBaseMessageCell.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/5/22.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//  所有消息cell的父类

#import "EUCBaseCell.h"

typedef NS_ENUM(NSInteger, EUCBaseMessageCellType) {
    EUCBaseMessageCellTypeNormal = 1000,  //正常模式
    EUCBaseMessageCellTypeEdit            //编辑模式
};

@class EUCMessageModel, EUCMiniloadingView, EUCDialogItemModel, EUCBaseMessageCell;
@protocol EUCBaseMessageCellDelegate <NSObject>

// 拦截事件
- (void)interceptButtonDidClick:(EUCBaseMessageCell *)cell;
// 点击气泡
- (void)contentDidClick:(EUCMessageModel *)messageModel cell:(EUCBaseMessageCell *)cell;
// 长按气泡
- (void)contentLongPress:(EUCBaseMessageCell *)cell;
// 点击头像
- (void)headImageDidClick:(EUCUserModel *)userModel;
// 长按头像，弹出at
- (void)longPressHeadImage:(EUCUserModel *)userModel;
// 查看已读未读
- (void)readDidClick:(EUCBaseMessageCell *)cell;
// 点击atlink
- (void)messageCell:(EUCBaseMessageCell *)cell atMemberModel:(EUCUserModel *)memberModel;
// 点击URLlink
- (void)messageCell:(EUCBaseMessageCell *)cell urlLinkStr:(NSURL *)url;
// 点击回拨
- (void)messageCell:(EUCBaseMessageCell *)cell didSelectedToBackCall:(EUCMessageModel *)messageModel;
// 重新发送
- (void)retrySendMessage:(EUCBaseMessageCell *)cell;
// 下载文件
- (void)downloadFileMessage:(EUCMessageModel *)messageModel cell:(EUCBaseMessageCell *)cell;

@end

@interface EUCBaseMessageCell : EUCBaseCell

+ (instancetype)cellForMessageModel:(EUCMessageModel *)messageModel tableView:(UITableView *)tableView;

@property (nonatomic, strong) EUCMessageModel *messageModel; 
@property (nonatomic, strong) EUCDialogItemModel *dialogItemModel;
@property (nonatomic, weak) id <EUCBaseMessageCellDelegate> delegate;

// 已读未读按钮
@property (nonatomic, strong) UIButton *readTagButton;
// 小菊花
@property (nonatomic, strong) EUCMiniloadingView *indicator;
// 日期label
@property (nonatomic, strong) UILabel *dateLabel;
// 昵称名
@property (nonatomic, strong) UILabel *nicknameLabel;
// 头像（使用UIImageView）
@property (nonatomic, strong) UIImageView *headIconView;
// 背景图
@property (nonatomic, strong) UIImageView *contentBgImageView;

@property (nonatomic, assign) EUCBaseMessageCellType cellType;

- (void)beginOpacityAnimation;
- (void)updateStatus;

// 点击气泡(为了给Swift类访问到该方法，在.h文件中声明一下)
- (void)didClickContentBg:(UIGestureRecognizer *)gesture;
// 长按气泡(为了给Swift类访问到该方法，在.h文件中声明一下)
- (void)didLongPressContentBg:(UILongPressGestureRecognizer *)gesture;

@end






