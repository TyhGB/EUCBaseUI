//
//  EUCOtherFileController.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/5/2.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//  非文档查看控制器

#import "EUCBaseController.h"
#import "EUCFileDetailDelegate.h"

@class EUCFileItemModel, EUCMessageModel;
@interface EUCOtherFileController : EUCBaseController

@property (nonatomic, copy) NSString *favoriteID;
@property (nonatomic, strong) EUCMessageModel *messageModel;
@property (nonatomic, weak) id <EUCFileDetailDelegate> delegate;

@end
