//
//  EUCReadListController.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/4/11.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseTBController.h"
#import "EUCReadDetailController.h"

@interface EUCReadListController : EUCBaseTBController

@property (nonatomic, copy) NSString *dialogID;
@property (nonatomic, assign) EUCReadDetailVCType readType;

@end
