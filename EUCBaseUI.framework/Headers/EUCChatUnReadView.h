//
//  EUCChatUnReadView.h
//  EUCIMManager
//
//  Created by Admin on 2017/8/25.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseView.h"
@class EUCChatUnReadView;

@protocol EUCChatUnReadViewDelegate <NSObject>

- (void)didClickAction:(EUCChatUnReadView *)chatUnreadView;

//- (void)chatUnReadView:(EUCChatUnReadView *)chatUnreadView didClickAction:();

@end

@interface EUCChatUnReadView : EUCBaseView

@property (nonatomic, weak) id<EUCChatUnReadViewDelegate> delegate;

@property (nonatomic, assign) NSInteger unReadCount;


@end
