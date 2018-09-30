//
//  EUCForwardingCell.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/4/25.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseCell.h"
@class EUCDialogItemModel;

typedef NS_ENUM(NSInteger, EUCForwardingCellType) {
    EUCForwardingCellTypeDefault,   //普通模式
    EUCForwardingCellTypeEdit       //编辑模式
};

@interface EUCForwardingCell : EUCBaseCell

@property (nonatomic, strong) EUCDialogItemModel *itemModel;
@property (nonatomic, assign) EUCForwardingCellType cellType;

@end
