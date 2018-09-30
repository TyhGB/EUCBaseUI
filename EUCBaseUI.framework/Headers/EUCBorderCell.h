//
//  EUCBorderCell.h
//  EUCIMManager
//
//  Created by XXL on 2017/9/11.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseMessageCell.h"

@interface EUCBorderCell : EUCBaseMessageCell

// 遮罩image
@property (nonatomic, strong) UIImage* senderMaskImage;
@property (nonatomic, strong) UIImage* receiverMaskImage;

// 边框
@property (nonatomic, strong) UIImageView *borderView;

// 边框image
@property (nonatomic, strong) UIImage* senderBorderImage;

@property (nonatomic, strong) UIImage* receiverBorderImage;

@property (nonatomic, strong) UIView *chatContentView;

@end
