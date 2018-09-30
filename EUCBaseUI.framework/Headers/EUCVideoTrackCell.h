//
//  EUCVideoTrackCell.h
//  EUCIMManager
//
//  Created by Tuling Code on 2017/1/13.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCVideoCell.h"

@class EUCAVModel;
@interface EUCVideoTrackCell : EUCVideoCell

@property (nonatomic, strong) EUCAVModel *avModel;
- (void)updateCellConstraints;

@end
