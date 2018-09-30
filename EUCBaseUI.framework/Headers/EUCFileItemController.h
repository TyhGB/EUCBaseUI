//
//  EUCFileItemController.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/4/12.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseTBController.h"
#import "EUCFileHeaderViewTes.h"

@class EUCFileItemController;
@protocol EUCFileItemControllerDelegate <NSObject>

@optional
- (void)fileItemController:(EUCFileItemController *)fileVC didSelectModel:(id)model;

@end

@interface EUCFileItemController : EUCBaseTBController

- (instancetype)initWithRootDirectory:(NSString *)directory;

@property (nonatomic, assign) EUCFileHeaderViewType fileType;
@property (nonatomic, weak) id <EUCFileItemControllerDelegate> delegate;

@end
