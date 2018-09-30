//
//  EUCChatRoomController.h
//  EUCIMManager
//
//  Created by ShaoShanPeng on 2016/12/27.
//  Copyright © 2016年 BBDTEK. All rights reserved.
//

#import "EUCBaseTBController.h"
#import <EUCSDK/EUCDialogModel.h>

@interface EUCChatRoomController : EUCBaseTBController

@property (nonatomic, strong) EUCDialogItemModel *dialogModel;
@property (nonatomic, copy) void(^actionBlock)(void);

/**
 更新dialogController中chatroom对应的cell的小红点
 */
@property (nonatomic,copy) void(^reloadCellAction)(void);
/**
 未读数
 */
@property (nonatomic, copy) NSString *unreadCount;

// 如果是搜索，需要根据此date_sent定位到那个消息处
@property (nonatomic, copy) NSString *date_sent;
@end
