//
//  EUCMusicView.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/11/16.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseView.h"

@interface EUCMusicView : EUCBaseView

// 音频文件路径
@property (nonatomic, copy) NSString *musicPath;
//播放状态 YES 正在播放 NO 暂停播放
@property (nonatomic, assign, getter=playing) BOOL isPlaying;
// 显示
- (void)showInView:(UIView *)superView;

- (void)releaseDisplayLink;

@end
