//
//  EUCGroupSearchController.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/6/21.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseSearchController.h"

@class EUCGroupSearchController, EUCDialogItemModel;
@protocol EUCGroupSearchControllerDelegate <NSObject>

- (void)groupSearchController:(EUCGroupSearchController *)searchVC didSelectedItemModel:(EUCDialogItemModel *)itemModel;

@end

@interface EUCGroupSearchController : EUCBaseSearchController

@property (nonatomic, weak) id <EUCGroupSearchControllerDelegate> delegate;

@end
