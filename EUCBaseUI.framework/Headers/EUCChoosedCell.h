//
//  EUCChoosedCell.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/6/2.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseCell.h"

@class EUCChoosedCell;
@protocol EUCChoosedCellDelegate <NSObject>

- (void)choosedCell:(EUCChoosedCell *)cell deleteModel:(id)model;

@end

@interface EUCChoosedCell : EUCBaseCell

@property (nonatomic, strong) id model;
@property (nonatomic, weak) id <EUCChoosedCellDelegate> delegate;

@end
