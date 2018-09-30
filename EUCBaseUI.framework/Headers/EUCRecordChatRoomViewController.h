//
//  EUCRecordChatRoomViewController.h
//  EUCIMManager
//
//  Created by jintao on 2017/12/6.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//
/**
  聊天记录聊天室
*/
#import "EUCBaseTBController.h"

@class EUCMessageModel;
@interface EUCRecordChatRoomViewController : EUCBaseTBController

@property (nonatomic, strong) EUCMessageModel *messageModel;
// 消息跨度时间
@property (nonatomic, copy) NSString *messageTimeSpan;
// 聊天记录层(超过三层就不跳转这个控制器了，合并消息三层不支持显示)
@property (nonatomic, assign) NSInteger recordLevel;

@property (nonatomic, copy) NSString *favoriteID;

@end
