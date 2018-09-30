//
//  EUCDialogTitleView.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/4/24.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseView.h"

typedef NS_ENUM(NSInteger, EUCDialogTitleViewType) {
    EUCDialogTitleViewTypeDisconnected, // 未连接
    EUCDialogTitleViewTypeConnecting,  // 连接中
    EUCDialogTitleViewTypeConnected   // 已连接
    
};

@interface EUCDialogTitleView : EUCBaseView


@property (nonatomic, assign) EUCDialogTitleViewType type;

@end
