//
//  EUCReadDetailController.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/4/11.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseController.h"
@class EUCMessageModel;

typedef NS_ENUM(NSInteger, EUCReadDetailVCType) {
    EUCReadDetailVCTypeUnread = 0,   //未读
    EUCReadDetailVCTypeRead          //已读
};

@interface EUCReadDetailController : EUCBaseController

@property (nonatomic, strong) EUCMessageModel *messageModel;

@end
