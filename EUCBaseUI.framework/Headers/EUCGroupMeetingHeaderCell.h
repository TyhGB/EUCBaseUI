//
//  EUCGroupMeetingHeaderCell.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/12/5.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseCell.h"
#import "EUCGroupMeetingCellDelegate.h"

@interface EUCGroupMeetingHeaderCell : EUCBaseCell

// 是否为展开状态
@property (nonatomic, assign) BOOL isExpandStatus;

@property (nonatomic, assign) BOOL isAudioMeeting;
@property (nonatomic, assign) NSInteger meetCount;
@property (nonatomic, weak) id <EUCGroupMeetingCellDelegate> delegate;

@end
