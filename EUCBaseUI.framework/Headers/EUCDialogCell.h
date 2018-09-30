//
//  EUCDialogCell.h
//  EUCIMManager
//
//  Created by  ZhuHong on 2016/12/26.
//  Copyright © 2016年 BBDTEK. All rights reserved.
//

//#import "EUCBaseCell.h"
#import "EUCSideSlipCell.h"
#import <EUCSDK/EUCDialogModel.h>
@class EUCDialogCell;
@protocol EUCDialogCellUnreadDelegate <NSObject>

- (void)dialogCell:(EUCDialogCell *)dialogCell setMessageReadWithItemModel:(EUCDialogItemModel *)model;

@end

@interface EUCDialogCell : EUCSideSlipCell

@property (nonatomic, strong) EUCDialogItemModel *itemMode;
@property (nonatomic, weak) id<EUCDialogCellUnreadDelegate> unreadDelegate;
@end
