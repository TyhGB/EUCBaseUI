//
//  EUCRecorderManager.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/5/26.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import <Foundation/Foundation.h>
@import AVFoundation;

@protocol EUCAudioRecorderDelegate <NSObject>


/**
 录音失败
 */
- (void)audioRecordDidFailure;

/**
 录音太短
 */
- (void)audioRecordDidTooShort;

/**
 录音取消
 */
- (void)audioRecordDidCancel;

/**
 录音完成回调

 @param localPath 音频录制位置
 @param duration  音频时长
 */
- (void)audioRecordDidFinish:(NSString *)localPath duration:(CFTimeInterval)duration;

/**
 麦克风权限开启(显示UI)
 */
- (void)audioRecordDidAuthorizationGranted;

/**
 录音时长变化

 @param duration 秒数
 */
- (void)audioRecordDidChangedDuration:(NSTimeInterval)duration;

/**
 更新音量大小

 @param voiceMeter 音量大小
 */
- (void)audioRecordDidUpdateVoiceMeter:(double)voiceMeter;

/**
 录音太长
 */
- (void)audioRecordDidTooLong;

@end


@protocol EUCAudioPlayerDelegate <NSObject>

/**
 播放器停止播放

 @param info 播放信息(考虑连续播放，没有对session模式进行改变)
 */
- (void)audioPlayerDidStop:(id)info;

/**
 播放器开始播放

 @param info 播放信息
 */
- (void)audioPlayerDidStart:(id)info;

/**
 播放器完成播放

 @param info 播放信息
 */
- (void)audioPlayerDidFinish:(id)info;

/**
 播放器播放失败

 @param info 播放信息
 */
- (void)audioPlayerDidFailure:(id)info;

@end

@interface EUCRecorderManager : NSObject


/**
 是否正在录音
 */
@property (nonatomic, assign) BOOL isRecording;

/**
 是否正在播放
 */
@property (nonatomic, assign) BOOL isPlaying;

/**
 初始化管理录音与播放录音

 @return 录音管理对象
 */
+ (instancetype)sharedInstance;

/**
 开始录音

 @param delegate 录音时的协议代理
 */
- (void)startAudioRecordWithDelegate:(id <EUCAudioRecorderDelegate>)delegate;

/**
 停止录音
 */
- (void)stopAudioRecord;

/**
 取消录音
 */
- (void)cancelAudioRecord;

/////////////////////////////// 播放功能 /////////////////////////////////

/**
 开始播放

 @param voiceName 播放音频名称
 @param delegate 播放时的协议代理
 @param userinfo 播放信息
 */
- (void)startAudioPlayWithPath:(NSString *)voiceName delegate:(id <EUCAudioPlayerDelegate>)delegate userInfo:(id)userinfo;

/**
 结束播放
 */
- (void)stopAudioPlay;



@end
