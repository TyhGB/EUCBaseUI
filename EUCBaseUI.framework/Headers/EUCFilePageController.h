//
//  EUCFilePageController.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/4/12.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseController.h"
@class EUCFilePageController;


@protocol EUCFilePageControllerDelegate <NSObject>

- (void)filePageController:(EUCFilePageController *)filePageVC didSelectModel:(id)model;

@end

@interface EUCFilePageController : EUCBaseController

@property (nonatomic, weak) id <EUCFilePageControllerDelegate> delegate;
// 测试提出的需求，选择的时候就要做超限处理
@property (nonatomic, strong) NSMutableArray *selectedArray;

@end
