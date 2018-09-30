//
//  EUCRTCVideoClickDelegate.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/6/9.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, EUCRTCViewClickType) {
    EUCRTCViewClickTypeVideoAnwser = 1000,    //电话接听
    EUCRTCViewClickTypeHangup,                //挂断
    EUCRTCViewClickTypeReject,                //拒绝
    EUCRTCViewClickTypeOpenVideo,             //打开摄像头
    EUCRTCViewClickTypeCloseVideo,            //关闭摄像头
    EUCRTCViewClickTypeOpenAudio,             //打开声音
    EUCRTCViewClickTypeCloseAudio,            //关闭声音
//    EUCRTCViewClickTypeSwitchCamera,          //切换摄像头
    EUCRTCViewClickTypeFrontCamera,           //打开前置摄像头
    EUCRTCViewClickTypeBackCamera,            //打开后置摄像头
    EUCRTCViewClickTypeInvite,                //邀请其他成员
    EUCRTCViewClickTypePackup,                //收起
    EUCRTCViewClickTypeDeploy,                //展开
    EUCRTCViewClickTypeOpenOutSpeak,           //打开扬声器
    EUCRTCViewClickTypeCloseOutSpeak          //关闭扬声器
};

@protocol EUCRTCVideoClickDelegate <NSObject>

- (void)rtcView:(id)rtcView didSelectedClickType:(EUCRTCViewClickType)clickType;

@end
