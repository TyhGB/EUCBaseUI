//
//  EUCSyncLoadingView.h
//  EUCIMManager
//
//  Created by sunqy on 2017/9/13.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseView.h"

@protocol EUCSyncLoadingViewDelegate <NSObject>

- (void)cancelHistoryMessageRequest;

@end

@interface EUCSyncLoadingView : EUCBaseView

@property (nonatomic, copy) NSString *scheduleStr;

- (void)show;

@property (weak, nonatomic) id<EUCSyncLoadingViewDelegate> delegate;

@end
