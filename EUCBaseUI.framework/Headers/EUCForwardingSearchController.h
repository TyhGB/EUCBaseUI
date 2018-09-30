//
//  EUCForwardingSearchController.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/4/26.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseSearchController.h"

@class EUCDialogItemModel, EUCForwardingSearchController;
@protocol EUCForwardSearchControllerDelegate <NSObject>

- (void)forwardSearchController:(EUCForwardingSearchController *)searchVC didSelectedWithDialogItemModel:(EUCDialogItemModel *)itemModel;

@end

@interface EUCForwardingSearchController : EUCBaseSearchController

@property (nonatomic, weak) id <EUCForwardSearchControllerDelegate> delegate;

@end
