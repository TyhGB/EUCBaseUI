//
//  EUCInviteCell.h
//  EUCIMManager
//
//  Created by Tuling Code on 2017/1/3.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseCell.h"

typedef NS_ENUM(NSInteger, EUCInviteCellType) {
    EUCInviteCellTypeDefault = 1000,  //默认样式
    EUCInviteCellTypeEdit,            //编辑样式
    EUCInviteCellTypeIms              //IMS样式
};

@class EUCInviteCell;
@protocol EUCInviteCellDelegate <NSObject>

@optional
- (void)didClickImsBtn:(EUCInviteCell *)cell;

@end

@interface EUCInviteCell : EUCBaseCell

@property (nonatomic, strong) EUCUserModel* userModel;
@property (nonatomic, assign) BOOL hiddenSepLine;

// 是否为群主
@property (nonatomic, assign) BOOL isMaster;
@property (nonatomic, assign) EUCInviteCellType cellType;
@property (nonatomic, weak) id <EUCInviteCellDelegate> delegate;

@end
