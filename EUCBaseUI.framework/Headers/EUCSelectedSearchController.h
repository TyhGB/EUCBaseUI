//
//  EUCSelectedSearchController.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/6/1.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseSearchController.h"
#import "EUCSelectedContactController.h"

typedef void (^CompletionBlock)();

@protocol EUCSelectedSearchControllerDelegate <NSObject>

// EUCSelectedContactController退出(dismiss)
- (void)selectedSearchControllerDisMiss;

@end

@class EUCInviteBottomView;
@interface EUCSelectedSearchController : EUCBaseSearchController

@property (nonatomic, assign) EUCSelectedContactType vcType;
@property (nonatomic, copy) CompletionBlock completionBlock;

@property (nonatomic, weak) id<EUCSelectedContactControllerDelegate> delegate;
@property (nonatomic, weak) id<EUCSelectedSearchControllerDelegate> searchDelegate;

// 名片接受对象会话模型
@property (nonatomic, strong) EUCDialogItemModel *dialogModel;

@end
