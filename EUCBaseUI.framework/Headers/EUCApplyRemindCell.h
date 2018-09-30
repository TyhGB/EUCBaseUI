//
//  EUCApplyRemindCell.h
//  EUCIMManager
//
//  Created by  ZhuHong on 2017/6/28.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseCell.h"
@class EUCContactHeaderUnreadModel;
@class EUCContactHeaderModel;

@class EUCApplyRemindCell;

@protocol EUCApplyRemindCellDelegate <NSObject>

@required
- (void)unreadViewDeallocApplyRemindCell:(EUCApplyRemindCell *)applyRemindCel;

@end

@interface EUCApplyRemindCell : EUCBaseCell

/**
 申请信息
 */
@property (nonatomic, strong) EUCContactHeaderUnreadModel* unreadModel;

/**
 附加信息
 */
@property (nonatomic, strong) EUCContactHeaderModel* chModel;

@property (nonatomic, weak) id<EUCApplyRemindCellDelegate> delegate;

@end
