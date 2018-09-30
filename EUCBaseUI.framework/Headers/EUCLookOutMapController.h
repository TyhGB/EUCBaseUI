//
//  EUCLookOutMapController.h
//  EUCIMManager
//
//  Created by 栀枯大湿的MBP on 2017/9/8.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseController.h"
#import <EUCSDK/EUCMessageModel.h>

@interface EUCLookOutMapController : EUCBaseController

@property (nonatomic, strong) EUCMessageModel *messageModel;
@property (nonatomic, copy) NSString *favoriteID;

@end
