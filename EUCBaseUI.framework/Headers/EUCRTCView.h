//
//  EUCRTCView.h
//  EUCIMManager
//
//  Created by Tuling Code on 2017/1/10.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebRTC/RTCEAGLVideoView.h>
#import "EUCRTCVideoClickDelegate.h"
#import <EUCSDK/EUCRTCVideoSession.h>


@class EUCAVModel, RTCCameraPreviewView;
@interface EUCRTCView : UIView

#pragma mark - properties
/** 是否已接听 */
@property (assign, nonatomic)   BOOL            answered;

// 现在将本地影像全局用PreviewView显示
//由sdk传递过来
@property (nonatomic, strong) RTCCameraPreviewView *localCView;
@property (nonatomic, strong) RTCEAGLVideoView *remoteView;
@property (nonatomic, weak) EUCRTCLocalView *localView2;
@property (nonatomic, weak) EUCRTCRemoteView *remoteView2;

@property (nonatomic, weak) id <EUCRTCVideoClickDelegate> clickDelegate;
//单聊这个数组好像没有用 
@property (nonatomic, strong) NSMutableArray *trackArray;
/** 自己的model */
@property (nonatomic, strong) EUCAVModel *ownAVModel;

// 其他人的用户信息(头像，昵称)
@property (nonatomic, strong) EUCUserModel *otherModel;

@property (nonatomic, strong) EUCRTCVideoSession *videoSession;
#pragma mark - method
- (instancetype)initWithIsCallee:(BOOL)isCallee;

- (void)showInView:(UIView *)view;

- (void)dismiss:(void (^)(void))completion;

@end
