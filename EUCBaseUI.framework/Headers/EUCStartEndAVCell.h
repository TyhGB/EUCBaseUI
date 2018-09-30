//
//  EUCStartEndAVCell.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/2/23.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseCell.h"
#import <EUCSDK/EUCMessageModel.h>

typedef void (^AddFriendBlock)(EUCMessageType);

@interface EUCStartEndAVCell : EUCBaseCell

@property (nonatomic, strong) EUCMessageModel *messageModel;
@property (nonatomic, copy) AddFriendBlock addFriend;

@end
