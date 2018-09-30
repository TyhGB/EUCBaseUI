//
//  EUCRecordTipView.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/5/26.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseView.h"

typedef NS_ENUM(NSInteger, EUCRecordTipViewType) {
    EUCRecordTipViewTypeRecord = 1000,  // 录音
    EUCRecordTipViewTypeShort,          // 录音太短
    EUCRecordTipViewTypeCancel,         // 取消录音
    EUCRecordTipViewTypeLong            // 录音太长
};

@interface EUCRecordTipView : EUCBaseView

@property (nonatomic, assign) EUCRecordTipViewType tipType;
/** 更新音量大小 */
- (void)updateMetersValue:(CGFloat)value;
/** 更新倒计时 */
@property (nonatomic, assign) NSInteger downCount;

-(void)show;
- (void)dismiss;


@end
