//
//  EUCMemberCell.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/6/1.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EUCMemberCell : UICollectionViewCell

/** 成员列表需要做UI上的改动 */
@property (nonatomic, assign) BOOL isMemberList;
@property (nonatomic, strong) EUCUserModel *userModel;

@end
