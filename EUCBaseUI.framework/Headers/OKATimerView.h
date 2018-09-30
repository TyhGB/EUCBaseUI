//
//  OKATimerView.h
//  RecordScreen
//
//  Created by 肖乐 on 2017/9/8.
//  Copyright © 2017年 IMMoveMobile. All rights reserved.
//

#import <UIKit/UIKit.h>

@class OKATimerView;
@protocol OKATimerViewDelegate <NSObject>

- (void)timerView:(OKATimerView *)timerView didBackProgress:(CGFloat)progress;

@end

@interface OKATimerView : UIView

@property (nonatomic, assign) CGFloat maxSecond;
@property (nonatomic, weak) id <OKATimerViewDelegate> delegate;

- (void)startTimer;
- (void)stopTimer;

@end
