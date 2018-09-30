//
//  EUCInviteBottomView.h
//  EUCIMManager
//
//  Created by Tuling Code on 2017/1/15.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseView.h"

typedef NS_ENUM(NSInteger, EUCInviteBottomViewClickType) {
    EUCInviteBottomViewClickTypeSelected = 1000,  //全选
    EUCInviteBottomViewClickTypeSure              //确定
};


@class EUCInviteBottomView;
@protocol EUCInviteBottomViewDelegate <NSObject>
@optional
- (void)bottomView:(EUCInviteBottomView *)bottomView clickType:(EUCInviteBottomViewClickType)clickType isSelected:(BOOL)selected;
- (void)didPressedChooseLable:(EUCInviteBottomView *)bottomView;

@end

@interface EUCInviteBottomView : EUCBaseView

@property (nonatomic, weak) id <EUCInviteBottomViewDelegate> delegate;

// 总人数
@property (nonatomic, assign) NSInteger totalCount;
// 已选择数
@property (nonatomic, assign) NSInteger selectCount;
// 确定按钮是否可点击
@property (nonatomic, assign) BOOL sureBtnEnabled;
/** 是否为删除样式 */
@property (nonatomic, assign) BOOL isDeleteStyle;

// 已选文件模型数组
@property (nonatomic, strong) NSArray *selectFiles;
// 已选消息模型数组
@property (nonatomic, strong) NSArray *selectMessages;

@end
