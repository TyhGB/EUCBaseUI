//
//  EUCFileCell.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/9/28.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseCell.h"

@class EUCFileCell, EUCMessageModel;
@protocol EUCFileCellDelegate <NSObject>

// 下载
- (void)fileCell:(EUCFileCell *)fileCell didClickDownloadAction:(UIButton *)btn;
// 点击昵称
- (void)fileCell:(EUCFileCell *)fileCell didClickNickNameWithSenderModel:(EUCUserModel *)senderModel;

@end

@interface EUCFileCell : EUCBaseCell

@property (nonatomic, weak) id<EUCFileCellDelegate> delegate;

@property (nonatomic, strong) EUCMessageModel *messageModel;

@property (nonatomic, assign) BOOL isSelect;

- (void)beginDownloading;
- (void)updateStatus;

@end
