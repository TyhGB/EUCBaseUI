//
//  EUCMiniloadingView.h
//  EUCIMManager
//
//  Created by ShaoShanPeng on 2017/2/8.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseView.h"

@interface EUCMiniloadingView : EUCBaseView

- (void)startLoadingAnimating;

- (void)stopLoadingAnimating;
//失败重试按钮
- (void)alertIconAndRetry:(void(^)())retryHandle;

- (void)resetAll;
@end
