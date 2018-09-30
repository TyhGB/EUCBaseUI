//
//  EUCPictureFileController.h
//  EUCIMManager
//
//  Created by Admin on 2017/10/12.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseController.h"
#import "EUCFileDetailDelegate.h"
@class EUCMessageModel;

@interface EUCPictureFileController : EUCBaseController

@property (nonatomic, weak) id <EUCFileDetailDelegate> delegate;
// 是否从聊天cell而来
@property (nonatomic, assign) BOOL isFromChatCell;
@property (nonatomic, strong) EUCMessageModel *messageModel;

@end
