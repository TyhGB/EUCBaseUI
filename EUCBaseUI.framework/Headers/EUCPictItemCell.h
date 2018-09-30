//
//  EUCPictItemCell.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/11/10.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseCell.h"

@class EUCPhotoAssetsModel, EUCPictItemCell;
@protocol EUCPictItemCellDelegate <NSObject>

@optional
- (void)pictItemCell:(EUCPictItemCell *)itemCell didSelectedPhotoModel:(EUCPhotoAssetsModel *)photoModel;

@end

@interface EUCPictItemCell : EUCBaseCell

@property (nonatomic, strong) NSArray <EUCPhotoAssetsModel *>*photoArray;
@property (nonatomic, weak) id <EUCPictItemCellDelegate> delegate;

@end
