//
//  EUCAVFileProgressView.h
//  EUCIMManager
//
//  Created by 肖乐 on 2018/1/31.
//  Copyright © 2018年 BBDTEK. All rights reserved.
//

#import "EUCBaseView.h"

typedef NS_ENUM(NSInteger, EUCAVFileProgressViewState) {
    
    EUCAVFileProgressViewStateDownload = 1000,   //待下载状态
    EUCAVFileProgressViewStateProgress,          //缓冲状态
    EUCAVFileProgressViewStateFinished           //完成状态
};

typedef NS_ENUM(NSInteger, EUCAVFileProgressViewAction) {
    
    EUCAVFileProgressViewActionDownload = 1000,  //下载操作
    EUCAVFileProgressViewActionSuspend           //暂停操作
};

@interface EUCAVFileProgressView : EUCBaseView

@property (nonatomic, assign) EUCAVFileProgressViewState currentState;
@property (nonatomic, copy) void(^actionBlock)(EUCAVFileProgressViewAction action);

@end
