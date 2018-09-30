//
//  EUCRTCButton+EUCDrag.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/2/9.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCRTCButton.h"

@interface EUCRTCButton (EUCDrag)

// 是否能够拖动
@property(nonatomic, assign, getter=isDragEnable) BOOL dragEnable;
// 底部吸附距离
@property (nonatomic, assign) CGFloat bottomMargin;

@end
