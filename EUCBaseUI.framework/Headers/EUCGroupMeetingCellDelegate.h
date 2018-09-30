//
//  EUCGroupMeetingCellDelegate.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/12/5.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import <Foundation/Foundation.h>

@class EUCGroupMeetingHeaderCell, EUCGroupMeetingFooterCell, EUCGroupMeetingHeaderView;
@protocol EUCGroupMeetingCellDelegate <NSObject>

// 点击扩展
- (void)didClickExpandBtn:(EUCGroupMeetingHeaderCell *)cell;
- (void)didClickViewExpandBtn:(EUCGroupMeetingHeaderView *)headerView;
// 点击收起
- (void)didClickPackUpBtn:(EUCGroupMeetingFooterCell *)cell;
// 点击加入
- (void)didclickJoinBtn:(EUCGroupMeetingFooterCell *)cell;

@end
