//
//  EUCMessageContentButton.h
//  BloodSugarForDoc
//
//  Created by shake on 14-8-27.
//  Copyright (c) 2014年 shake. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <EUCSDK/EUCMessageModel.h>


@interface EUCMessageContentButton : UIButton

/**
 分别设置对方和自己的消息展示
 */
@property (nonatomic, assign) BOOL isMyMessage;

//语音长度
- (void)setVoiceSeconds:(NSInteger)seconds;


//播放语音
- (void)startPlay;
//停止播放语音
-(void)stopPlay;

- (void)startDownloadVoice;
- (void)stopDownloadVoice;

@property (nonatomic, strong) EUCMessageModel *msgData;

@end
