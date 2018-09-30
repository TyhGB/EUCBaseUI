//
//  EUCGroupMeetingView.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/12/5.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseView.h"

@class EUCAVModel, EUCGroupMeetingView;
@protocol EUCGroupMeetingViewDelegate <NSObject>

- (void)groupMeetingView:(EUCGroupMeetingView *)groupMeetingView didClickJoinBtn:(BOOL)isAudioMeeting;

@end

@interface EUCGroupMeetingView : EUCBaseView

@property (nonatomic, strong) NSMutableArray <EUCAVModel *>*memberArray;
@property (nonatomic, weak) id <EUCGroupMeetingViewDelegate> delegate;
@property (nonatomic, assign) BOOL isAudioMeeting;

@end
