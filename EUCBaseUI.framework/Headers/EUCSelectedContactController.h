//
//  EUCSelectedContactController.h
//  EUCIMManager
//
//  Created by  ZhuHong on 2017/1/4.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//  目前只做为删除成员， 添加成员， 查看成员使用

#import "EUCBaseTBController.h"

typedef NS_ENUM(NSInteger, EUCSelectedContactType) {
    EUCSelectedContactTypeCheck = 1000,    // 仅仅是查看
    EUCSelectedContactTypeDelete,          // 删除群成员
    EUCSelectedContactTypeAdd,             // 添加群成员
    EUCSelectedContactTypeStartChat,       // 发起群聊
    EUCSelectedContactTypeAudioInvite,     // 语音邀请
    EUCSelectedContactTypeVideoInvite,     // 视频邀请
    EUCSelectedContactTypeSendCard         // 发送名片
};

@class EUCSelectedContactController, EUCDialogItemModel;

@protocol EUCSelectedContactControllerDelegate <NSObject>

- (void)selectedContactController:(EUCSelectedContactController*)selectedVC dataList:(NSArray*)dataList completion:(void(^)(NSError *error))completion;
/// 当前界面发送名片
- (void)selectedContactController:(EUCSelectedContactController*)selectedVC sendCardModel:(EUCUserModel *)cardModel cardReceiverModel:(EUCDialogItemModel *)cardReceiverModel cardMessage:(NSString *)cardMessage;

@end

@interface EUCSelectedContactController : EUCBaseTBController

// 是否正在编辑群成员
@property (nonatomic, assign) BOOL isAddGroupMember;
// 正在移除群成员
@property (nonatomic, assign) BOOL isRemoveGroupMember;
// 发送名片时 （如果是私人会话ID, 从好友列表中删除）
@property (nonatomic, copy) NSString *friendID;
// 名片接受对象会话模型
@property (nonatomic, strong) EUCDialogItemModel *cardReceiverModel;


@property (nonatomic, assign) EUCSelectedContactType vcType;
@property (nonatomic, weak) id<EUCSelectedContactControllerDelegate> delegate;
// 群主ID
@property (nonatomic, copy) NSString *masterID;
// 会话ID
@property (nonatomic, copy) NSString *dialogID;

// 成员ID集合
@property (nonatomic, strong) NSMutableArray *occupantsArray;
// 不可点击成员ID集合
@property (nonatomic, strong) NSMutableArray *unEnableArray;

// 选中的成员ID集合
@property (nonatomic, strong) NSArray *selectedArray;

@end
