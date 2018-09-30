//
//  EUCAudioMicroButton.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/6/29.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCRTCButton.h"

@interface EUCAudioMicroButton : EUCRTCButton

/** 包含的时间label */
@property (nonatomic, strong, readonly) UILabel *timeLabel;

- (instancetype)initWithTitle:(NSString *)title noHandleImageName:(NSString *)noHandleImageName;

@end
