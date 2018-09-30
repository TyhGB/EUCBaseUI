//
//  OKARecordView.h
//  RecordScreen
//
//  Created by 肖乐 on 2017/9/4.
//  Copyright © 2017年 IMMoveMobile. All rights reserved.
//

#import <UIKit/UIKit.h>

@class OKARecordView;
@protocol OKARecordViewDelegate <NSObject>

// 开始record
- (void)beginRecordVideo:(OKARecordView *)recordView;
// 结束record
- (void)recordView:(OKARecordView *)recordView didBackRecordTime:(CFTimeInterval)recordTime;

@end

@interface OKARecordView : UIView

@property (nonatomic, weak) id <OKARecordViewDelegate> delegate;
- (void)endAnimation;
@end
