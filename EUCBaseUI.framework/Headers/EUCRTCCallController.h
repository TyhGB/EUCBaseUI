//
//  EUCRTCCallController.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/6/3.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//  电话会议控制器

#import "EUCBaseController.h"
#import "EUCRTCCallView.h"
#import "EUCMultiCallView.h"
#import <EUCSDK/EUCUserModel.h>
typedef NS_ENUM(NSInteger, EUCRTCRoleType) {
    EUCRTCRoleTypeCaller = 1000,  // 发送方
    EUCRTCRoleTypeAccept,         // 接收方
    EUCRTCRoleTypeJoin            // 加入方
};

@class EUCRTCCallController, EUCAVModel;
@protocol EUCRTCCallControllerDelegate <NSObject>

// RTCView点击代理方法
- (void)callController:(EUCRTCCallController *)rtcVC didSelectedType:(EUCRTCCallViewClickType)clickType;
// 确定邀请人代理方法
- (void)callController:(EUCRTCCallController *)rtcVC didSelectedInviteOccupants:(NSArray *)opponents;

@end

@interface EUCRTCCallController : EUCBaseController

// 角色类型
@property (nonatomic, assign) EUCRTCRoleType roleType;
// 是否为多人聊天
@property (nonatomic, assign) BOOL isMultiMeeting;
// 所有非IMS成员
@property (nonatomic, strong) NSArray *opponentsArr;
// IMS成员
@property (nonatomic, strong) NSArray *imsArray;
// dialogID
@property (nonatomic, copy) NSString *dialogID;

// 所有在线聊天人员
@property (nonatomic, strong) NSMutableArray *audioArray;
// 对方模型（单人展示对方头像名称）
@property (nonatomic, strong) EUCAVModel *otherModel;
// caller模型 （多人语音会议展示头像）
@property (nonatomic, strong) EUCAVModel *callerModel;
// 提示语数组
@property (nonatomic, strong) NSMutableArray *tipsArray;
// 提示语
@property (nonatomic, copy) NSString *connectText;
// 刷新rtcView collectionView
- (void)reloadCollectionView;

@property (nonatomic, weak) id <EUCRTCCallControllerDelegate> delegate;

// 是否正在显示
@property (nonatomic, assign) BOOL isShowing;
// 显示
- (void)showCallVC;
// 隐藏
- (void)dismissCallVC;

//弹出邀请界面
- (void)presentInviteVCWithOccupants:(NSMutableArray *)occupants unEnableArray:(NSMutableArray <NSString *>*)unEnableArray unImsEnableArray:(NSMutableArray <EUCUserModel *>*)unImsEnableArray dialogID:(NSString *)dialogID;

- (void)alertRTCViewWithOutTimeMember:(EUCAVModel *)avModel;

// 弹出非好友提示
- (void)presentNotFriendAlert;

// 暴露接听的 UI 方法，给 CallKit 调用
- (void)configUIWhenAnswerClick;

// 设置静音按钮的选中状态，对外暴露给 CallKit
- (void)selectMuteButton:(BOOL)isSelected;

@end
