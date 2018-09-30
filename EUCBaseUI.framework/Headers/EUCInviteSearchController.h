//
//  EUCInviteSearchController.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/6/3.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseSearchController.h"

typedef void (^CompletionBlock)();

@class EUCInviteBottomView;
@interface EUCInviteSearchController : EUCBaseSearchController

@property (nonatomic, copy) CompletionBlock completionBlock;

@end
