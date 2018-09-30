//
//  EUCVideoMicroButton.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/6/29.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCRTCButton.h"
#import <WebRTC/RTCEAGLVideoView.h>
#import <WebRTC/RTCVideoTrack.h>

@class EUCAVModel;
@interface EUCVideoMicroButton : EUCRTCButton

//@property (nonatomic, strong) EUCAVModel *avModel;
// 使用webRTC内部视图做本地影像容器 本地影像的时候缩小
@property (nonatomic, strong) RTCCameraPreviewView *previewView;

// 视频轨迹 远程影像的时候缩小
@property (nonatomic, strong) RTCVideoTrack *videoTrack;

// 远端图像载体
@property (nonatomic, strong) RTCEAGLVideoView *videoView;
// 图像userID
@property (nonatomic, strong) NSString *userID;

@property (nonatomic, strong) EUCRTCRemoteView *remoteView;
@property (nonatomic, strong) EUCRTCLocalView *localView;
@property (nonatomic, strong) EUCMCULocalView *mcuLocalView;
@end
