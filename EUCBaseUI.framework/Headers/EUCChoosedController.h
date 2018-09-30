//
//  EUCChoosedController.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/6/2.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//  已选控制器

#import "EUCBaseTBController.h"
typedef void (^SureBlock)();

@interface EUCChoosedController : EUCBaseTBController

@property (nonatomic, strong) NSMutableArray *chooseArray;
@property (nonatomic, copy) SureBlock sureBlock;

@end
