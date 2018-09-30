//
//  EUCFileItemCell.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/4/13.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseCell.h"

@class EUCFileItemModel, EUCFileItemCell, EUCUserModel, EUCMessageModel, EUCPhotoAssetsModel;
@protocol EUCFileItemCellDelegate <NSObject>

@optional
// 点击进入文件详情
- (void)fileItemCell:(EUCFileItemCell *)cell didClickToCheckWithModel:(id)model;
// 点击进入个人详情
- (void)fileItemCell:(EUCFileItemCell *)cell didClickNameWithSenderModel:(EUCUserModel *)senderModel;

@end

@interface EUCFileItemCell : EUCBaseCell

@property (nonatomic, strong) EUCFileItemModel *fileModel;
@property (nonatomic, strong) EUCMessageModel *messageModel;
@property (nonatomic, strong) EUCPhotoAssetsModel *photoModel;
@property (nonatomic, weak) id <EUCFileItemCellDelegate> delegate;
// 是否隐藏下面分割的线
@property (nonatomic, assign) BOOL isBottomHidden;

@end
