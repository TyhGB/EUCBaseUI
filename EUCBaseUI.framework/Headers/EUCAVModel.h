//
//  EUCAVModel.h
//  EUCIMManager
//
//  Created by Tuling Code on 2017/1/13.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <WebRTC/RTCVideoRenderer.h>
#import <AVFoundation/AVFoundation.h>
#import <WebRTC/RTCCameraPreviewView.h>
#import <EUCSDK/EUCRTCVideoSession.h>
#import <EUCSDK/EUCMCUVideoSession.h>

typedef NS_ENUM(NSInteger, EUCVideoStatusType) {
    EUCVideoStatusTypeNormal = 1000,       //一般连接正常与本地流
    EUCVideoStatusTypeDisconnect           //连接断开
};

typedef NS_ENUM(NSInteger, EUCAudioStatusType) {
    EUCAudioStatusTypeWait = 1000,   //等待中
    EUCAudioStatusTypeAccept         //已接受
};

@class RTCVideoTrack;

@interface EUCAVModel : NSObject

/** 使用平台 */
@property (nonatomic, copy) NSString *platform;
/** 此人ID */
@property (nonatomic, copy) NSString *senderID;
/** ims专用-人名 */
@property (nonatomic, copy) NSString *phoneName;
/** ims专用-电话 */
@property (nonatomic, copy) NSString *phone;
/** ims专用-是否为ims电话 */
@property (nonatomic, assign, getter=imsSelected) BOOL isImsSelected;
/** 超时弹窗选中专用 */
@property (nonatomic, assign, getter=selected) BOOL isSelected;
/** 会话ID */
@property (nonatomic, copy) NSString *dialogID;
/** videoTrack */
@property (nonatomic, strong) RTCVideoTrack *videoTrack;
@property (nonatomic, strong) RTCCameraPreviewView *previewView;
///** 使用sdk后应该不需要设置上面两个属性 改为下面两个属性*/
@property (nonatomic, strong) EUCRTCLocalView *localView;
@property (nonatomic, strong) EUCRTCRemoteView *remoteView;
@property (nonatomic, strong) EUCMCURemoteView *mcuRemoteView;
/** 视频比例 */
@property (nonatomic, assign) CGSize aspectRatio;
/** 视频状态 */
@property (nonatomic, assign) EUCVideoStatusType statusType;
/** 对方是否接听(音频专用) */
@property (nonatomic, assign) EUCAudioStatusType audioType;


@end
