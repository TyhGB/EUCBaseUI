//
//  EUCVideoMessageCell.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/5/22.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//  视频类型cell

#import "EUCBaseMessageCell.h"

@class EUCProgressMaskView;
@interface EUCVideoMessageCell : EUCBaseMessageCell

// 加载视图
@property (nonatomic, strong) EUCProgressMaskView *progressView;
// 视频时间
@property (nonatomic, strong) UILabel *timeLabel;
// 视频大小
@property (nonatomic, strong) UILabel *sizeLabel;

// 视频第一帧图片
@property (nonatomic, strong) UIImageView *videoThumbView;

@end
