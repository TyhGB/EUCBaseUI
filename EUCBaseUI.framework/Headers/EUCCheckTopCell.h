//
//  EUCCheckTopCell.h
//  EUCIMManager
//
//  Created by  ZhuHong on 2017/1/11.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseCell.h"
@class EUCMeModel;
@class EUCCheckTopCell;

@protocol EUCCheckTopCellDelegate <NSObject>

- (void)checkValueCheckTopCell:(EUCCheckTopCell*)cell;

@end

@interface EUCCheckTopCell : EUCBaseCell

@property (nonatomic, strong) EUCMeModel* mode;

@property (nonatomic, weak) id<EUCCheckTopCellDelegate> deleate;


@end
