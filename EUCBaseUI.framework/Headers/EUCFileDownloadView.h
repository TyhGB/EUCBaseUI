//
//  EUCFileDownloadView.h
//  EUCIMManager
//
//  Created by Rakuyo on 2017/10/12.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseView.h"
#import <EUCSDK/EUCMessageModel.h>

@class EUCFileDownloadView;

@protocol EUCFileDownloadViewDelegate <NSObject>

// 暂停下载的代理。
- (void)pauseDownloadWithFileDownloadView:(EUCFileDownloadView *)fileDownloadView;

@end

@interface EUCFileDownloadView : EUCBaseView

@property (nonatomic, weak) id<EUCFileDownloadViewDelegate> delegate;

@property (nonatomic, strong) EUCMessageModel *model;

@end
