//
//  EUCLocalTrackCell.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/8/21.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCVideoCell.h"

@class EUCAVModel;
@interface EUCLocalTrackCell : EUCVideoCell

@property (nonatomic, strong) EUCAVModel *avModel;
- (void)updateCellLayout;

//开启或者关闭本地摄像头
-(void)cameraClick:(BOOL)open;

@end
