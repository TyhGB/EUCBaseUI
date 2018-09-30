//
//  EUCRTCFakeView.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/8/18.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseView.h"

@class EUCRTCFakeView, EUCAVModel;
@protocol EUCRTCFakeViewDelegate <NSObject>

- (UIView *)backOriginView:(EUCRTCFakeView *)fakeView;
- (void)dismissFakeView;

@end

@interface EUCRTCFakeView : EUCBaseView

- (void)showInView:(UIView *)view;

@property (nonatomic, strong) EUCAVModel *avModel;
@property (nonatomic, weak) id <EUCRTCFakeViewDelegate> delegate;

@end
