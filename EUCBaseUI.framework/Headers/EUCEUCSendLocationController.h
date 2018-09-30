//
//  EUCEUCSendLocationController.h
//  EUCIMManager
//
//  Created by 栀枯大湿的MBP on 2017/9/4.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseController.h"
// 数据回调
typedef void(^EUCEUCSendLocationControllerBlock)(CLLocationCoordinate2D coordine, NSString *location, NSString *address, NSString *encodedImageStr);

@interface EUCEUCSendLocationController : EUCBaseController

@property (nonatomic, copy) EUCEUCSendLocationControllerBlock sendMapBlock;

@end
