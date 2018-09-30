//
//  EUCGroupMeetingHeaderView.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/12/13.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EUCGroupMeetingCellDelegate.h"

@interface EUCGroupMeetingHeaderView : UITableViewHeaderFooterView

// 是否为展开状态
@property (nonatomic, assign) BOOL isExpandStatus;
@property (nonatomic, weak) id <EUCGroupMeetingCellDelegate> delegate;

@end
