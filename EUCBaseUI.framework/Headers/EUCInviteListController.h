//
//  EUCInviteListController.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/6/5.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//  邀请的成员列表

#import "EUCBaseTBController.h"

@interface EUCInviteListController : EUCBaseTBController

@property (nonatomic, strong) NSMutableArray <EUCUserModel *>*memberArray;
@property (nonatomic, assign) BOOL isAudioMeeting;

/** 可邀请人数 */
@property (nonatomic, assign) NSInteger restCount;

@end
