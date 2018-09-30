//
//  EUCRTCJoinTipView.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/6/7.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseView.h"

@class EUCRTCJoinTipView;
@protocol EUCRTCJoinTipViewDataSource <NSObject>

@required
- (NSArray *)tipArrayWithjoinTipView:(EUCRTCJoinTipView *)tipView;

@end

@interface EUCRTCJoinTipView : EUCBaseView

- (void)reloadJoinTipView;
@property (nonatomic, weak) id <EUCRTCJoinTipViewDataSource> dataSource;

@end
