//
//  EUCImageMessageCell.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/5/22.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//  图片类型cell

#import "EUCBaseMessageCell.h"

@interface EUCImageMessageCell : EUCBaseMessageCell

- (void)updateStatusWithProgress:(CGFloat )showProgress;
// 展示图片
@property (nonatomic, strong, readonly) UIImageView *chatImageView;

@end
