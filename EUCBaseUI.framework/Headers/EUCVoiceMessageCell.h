//
//  EUCVoiceMessageCell.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/5/22.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseMessageCell.h"

@interface EUCVoiceMessageCell : EUCBaseMessageCell

- (void)startDownloadVoice;
- (void)stopDownloadVoice;

- (void)startVoiceAnimation;
- (void)stopVoiceAnimation;

@end
