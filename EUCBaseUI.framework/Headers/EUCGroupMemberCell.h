//
//  EUCGroupMemberCell.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/6/1.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseCell.h"

@class EUCGroupMemberCell;
@protocol EUCGroupMemberCellDelegate <NSObject>

- (void)groupMemberCell:(EUCGroupMemberCell *)cell didSelectOneMember:(EUCUserModel *)userModel;

@optional
- (void)deleteMemberGroupMemberCell:(EUCGroupMemberCell *)cell;

@end

@interface EUCGroupMemberCell : EUCBaseCell

@property (nonatomic, strong) NSArray <EUCUserModel *>*memberArray;
@property (nonatomic, weak) id <EUCGroupMemberCellDelegate> delegate;

/** 只有创建者能够删除 */
@property (nonatomic, assign) BOOL isCanDelete;

@end
