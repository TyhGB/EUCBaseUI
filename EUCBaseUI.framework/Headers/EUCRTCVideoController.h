//
//  EUCRTCVideoController.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/6/6.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseController.h"
#import "EUCRTCCallController.h"
#import "EUCRTCView.h"
#import "EUCMultiVideoView.h"

@class EUCRTCVideoController, EUCAVModel;
@protocol EUCRTCVideoControllerDelegate <NSObject>

// 点击代理
- (void)videoController:(EUCRTCVideoController *)rtcVC didSelectedType:(EUCRTCViewClickType)clickType;
// 确定邀请人代理方法
- (void)videoController:(EUCRTCVideoController *)rtcVC didSelectedInviteOccupants:(NSArray *)opponents;

@end

@interface EUCRTCVideoController : EUCBaseController

// 角色类型
@property (nonatomic, assign) EUCRTCRoleType roleType;
// 是否正在显示
@property (nonatomic, assign) BOOL isShowing;
// trackArray
@property (nonatomic, strong) NSMutableArray *trackArray;
// ownModel
@property (nonatomic, strong) EUCAVModel *ownAVModel;
// 除发起方之外的子成员
@property (nonatomic, strong) NSArray *opponentsArr;
// dialogID
@property (nonatomic, copy) NSString *dialogID;

// 视频发起方模型
@property (nonatomic, strong) EUCUserModel *callerModel;

// 是否为多人视频
@property (nonatomic, assign) BOOL isMultiMeeting;

@property (nonatomic, weak) id <EUCRTCVideoControllerDelegate> delegate;

/** 单人视频页面 */
@property (nonatomic, strong) EUCRTCView *singleView;
/** 多人视频页面 */
@property (nonatomic, strong) EUCMultiVideoView *multiView;
// 显示视频界面
- (void)showRTCVideoVC;
// 视频界面dismiss
- (void)dismissRTCVideoVC;

// 进入邀请控制器
- (void)presentInviteVCWithOccupants:(NSMutableArray *)occupants unEnableArray:(NSMutableArray *)unEnableArray dialogID:(NSString *)dialogID;
// 弹出非好友提示
- (void)presentNotFriendAlert;

@end
