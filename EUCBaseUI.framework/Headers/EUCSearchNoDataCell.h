//
//  EUCSearchNoDataCell.h
//  EUCIMManager
//
//  Created by 栀枯大湿的MBP on 2017/6/20.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseCell.h"

typedef NS_ENUM(NSInteger, EUCSearchNoDataCellType) {
    
    EUCSearchNoDataCellTypeCommon = 1000, // 默认
    EUCSearchNoDataCellTypeFile           // 文件
};

@interface EUCSearchNoDataCell : EUCBaseCell

@property (nonatomic, assign) EUCSearchNoDataCellType cellType;

@end
