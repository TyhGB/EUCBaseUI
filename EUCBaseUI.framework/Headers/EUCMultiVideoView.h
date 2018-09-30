//
//  EUCMultiVideoView.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/6/9.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebRTC/RTCEAGLVideoView.h>
#import "EUCRTCVideoClickDelegate.h"

@class EUCAVModel;
@interface EUCMultiVideoView : UIView

#pragma mark - properties
/** 是否已接听 */
@property (assign, nonatomic)   BOOL            answered;

@property (nonatomic, weak) id <EUCRTCVideoClickDelegate> clickDelegate;

@property (nonatomic, strong) NSMutableArray *trackArray;
/** 自己的model */
@property (nonatomic, strong) EUCAVModel *ownAVModel;

// 呼叫方信息(接收方显示头像，昵称)
@property (nonatomic, strong) EUCUserModel *otherModel;

@property (nonatomic, strong) EUCMCURemoteView *mcuRemoteView;
@property (nonatomic, strong) EUCMCULocalView *mcuLoacalView;
#pragma mark - method
- (instancetype)initWithIsCallee:(BOOL)isCallee;

- (void)showInView:(UIView *)view;

- (void)dismiss:(void (^)(void))completion;

@end
