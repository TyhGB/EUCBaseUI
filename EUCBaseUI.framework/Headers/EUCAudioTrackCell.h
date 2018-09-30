//
//  EUCAudioTrackCell.h
//  EUCIMManager
//
//  Created by Tuling Code on 2017/1/13.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, EUCAudioTrackCellType) {
    EUCAudioTrackCellTypeDefault = 0,   // 正常样式。
    EUCAudioTrackCellTypeAdd            // 添加样式。
};

@class EUCAVModel, EUCAudioTrackCell;

@interface EUCAudioTrackCell : UICollectionViewCell


@property (nonatomic, strong) EUCAVModel *avModel;

// 类型
@property (nonatomic, assign) EUCAudioTrackCellType cellType;

@end
