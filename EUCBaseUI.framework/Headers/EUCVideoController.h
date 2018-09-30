//
//  EUCVideoController.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/5/10.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseController.h"

@class EUCMessageModel, EUCFileItemModel;
@interface EUCVideoController : EUCBaseController

@property (nonatomic, strong) EUCMessageModel *messageModel;
// 发送中
@property (nonatomic, strong) EUCFileItemModel *fileModel;

@end
