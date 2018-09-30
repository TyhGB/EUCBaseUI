//
//  EUCGroupInfoController.h
//  EUCIMManager
//
//  Created by  ZhuHong on 2017/1/8.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseTBController.h"
@class EUCDialogItemModel;

@interface EUCGroupInfoController : EUCBaseTBController

@property (nonatomic, strong) EUCDialogItemModel* dialogItemMode;

@property (nonatomic, copy) void(^actionBlock)(void);

@end
