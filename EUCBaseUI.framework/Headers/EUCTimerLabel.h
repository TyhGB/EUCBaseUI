//
//  EUCTimerLabel.h
//  EUCIMManager
//
//  Created by Tuling Code on 2017/1/3.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import <UIKit/UIKit.h>

@class EUCTimerLabel;
@protocol EUCTimerLabelDelegate <NSObject>

- (void)timerLabel:(EUCTimerLabel *)timerlabel countingTo:(NSTimeInterval)time;

@end

@interface EUCTimerLabel : UILabel

- (instancetype)initWithLabel:(UILabel*)theLabel;
- (void)start;
- (void)pause;

@property (nonatomic, copy) NSString *timeFormat;

@property (nonatomic, weak) id <EUCTimerLabelDelegate> delegate;

@end
