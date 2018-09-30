//
//  EUCForwardingController.h
//  EUCIMManager
//
//  Created by  ZhuHong on 2017/3/22.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

/**
 * 转发
 */

#import "EUCForwardingBaseController.h"
#import <EUCSDK/EUCUserModel.h>

@interface EUCForwardingController : EUCForwardingBaseController

// 不转发的好友(名片转发不包括当前名片的用户)
@property (nonatomic, strong)  EUCUserModel *notAddUserModel;

// 文章分享传过来的当前搜索
@property (nonatomic, copy) NSString *articleSearchText;

@end
