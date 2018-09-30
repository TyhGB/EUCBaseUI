//
//  EUCGroupMeetingFooterCell.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/12/5.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseCell.h"
#import "EUCGroupMeetingCellDelegate.h"

@class EUCAVModel;
@interface EUCGroupMeetingFooterCell : EUCBaseCell

@property (nonatomic, weak) id <EUCGroupMeetingCellDelegate> delegate;
@property (nonatomic, strong) NSMutableArray <EUCAVModel *>*memberArray;

@end
