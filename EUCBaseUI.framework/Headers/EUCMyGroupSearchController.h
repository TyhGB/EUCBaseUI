//
//  EUCMyGroupSearchController.h
//  EUCIMManager
//
//  Created by 栀枯大湿的MBP on 2017/6/14.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseSearchController.h"

typedef NS_ENUM(NSInteger, EUCMyGroupSearchControllerType) {
    /** 手机通讯录 **/
    EUCMyGroupSearchControllerTypePhoneBook,
    /** 新的朋友 **/
    EUCMyGroupSearchControllerTypeNewFriend,
};
@interface EUCMyGroupSearchController : EUCBaseSearchController

@property (nonatomic, assign) EUCMyGroupSearchControllerType searchType;
// 是否为选择模式
@property (nonatomic, assign) BOOL selectType;

@end
