//
//  EUCContactCell.h
//  EUCIMManager
//
//  Created by  ZhuHong on 2016/12/31.
//  Copyright © 2016年 BBDTEK. All rights reserved.
//

#import "EUCBaseCell.h"
#import <EUCSDK/EUCUserModel.h>

@class EUCContactCell;
typedef NS_ENUM(NSInteger, EUCContactCellType) {
    EUCContactCellTypeDefault,   // 默认样式
    EUCContactCellTypeEdit       // 编辑样式
};


@interface EUCContactCell : EUCBaseCell

@property (nonatomic, strong) EUCUserModel *userModel;

@property (nonatomic, assign) EUCContactCellType cellType;

@end
