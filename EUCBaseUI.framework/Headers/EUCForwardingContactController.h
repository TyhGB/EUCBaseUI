//
//  EUCForwardingContactController.h
//  EUCIMManager
//
//  Created by  ZhuHong on 2017/3/22.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

/**
 * 转发联系人
 */

#import "EUCForwardingBaseController.h"

@interface EUCForwardingContactController : EUCForwardingBaseController

// 不转发的好友(名片转发不包括当前名片的用户)
@property (nonatomic, strong)  EUCUserModel *notAddUserModel;

@end
