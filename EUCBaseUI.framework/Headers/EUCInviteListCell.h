//
//  EUCInviteListCell.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/6/5.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseCell.h"

@class EUCInviteListCell;
@protocol EUCInviteListCellDelegate <NSObject>

@optional
- (void)inviteListCell:(EUCInviteListCell *)cell didSelectIsAdd:(BOOL)isAdd;

@end

@interface EUCInviteListCell : EUCBaseCell

@property (nonatomic, strong) NSMutableArray <EUCUserModel *>*memberArray;
@property (nonatomic, weak) id <EUCInviteListCellDelegate> delegate;
@property (nonatomic, assign) NSInteger restCount;

@end
