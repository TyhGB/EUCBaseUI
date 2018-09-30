//
//  EUCSearchContactController.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/6/3.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseSearchController.h"
@class EUCContactSearchController;

@protocol EUCContactSearchControllerDelegate <NSObject>

@optional
- (void)contactSearchController:(EUCContactSearchController *)searchVC didSelectedWithUserModel:(EUCUserModel *)userModel;

@end

@interface EUCContactSearchController : EUCBaseSearchController

@property (nonatomic, weak) id <EUCContactSearchControllerDelegate> delegate;

@end
