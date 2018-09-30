//
//  EUCChatAtView.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/8/28.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseView.h"

@class EUCMessageModel, EUCChatAtView;
@protocol EUCChatAtViewDelegate <NSObject>

- (void)didClickChatAtView:(EUCChatAtView *)chatAtView;

@end

@interface EUCChatAtView : EUCBaseView

@property (nonatomic, strong) EUCMessageModel *messageModel;
@property (nonatomic, weak) id <EUCChatAtViewDelegate> delegate;

- (void)show;
- (void)dismiss;

@end
