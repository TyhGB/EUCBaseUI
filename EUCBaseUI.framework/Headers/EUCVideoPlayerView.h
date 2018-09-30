//
//  EUCVideoPlayerView.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/5/10.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//  自定义本地视频播放器

#import "EUCBaseView.h"
#import <AVFoundation/AVFoundation.h>

typedef void (^CloseBlock)(void);

@interface EUCVideoProgressView : EUCBaseView

@end

@interface EUCVideoPlayerView : EUCBaseView

/** 视频文件路径 */
@property (nonatomic, copy) NSString *filePath;
// 是否为本地视频
@property (nonatomic, assign) BOOL isLocalVideo;
/** 第一帧图片 */
@property (nonatomic, strong) UIImage *thumbImage;
@property (nonatomic, copy) CloseBlock closeBlock;

@property (nonatomic, strong) AVPlayer *player;

@property (nonatomic, assign) BOOL isAutoPlay;

// 销毁播放器方法
- (void)destroyPlayer;

@end
