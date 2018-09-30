//
//  EUCMapSearchResultController.h
//  EUCIMManager
//
//  Created by 栀枯大湿的MBP on 2017/9/6.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseSearchController.h"
// 数据回调
//typedef void(^EUCMapSearchResultControllerBlock)(BMKPoiInfo *poi);
@interface EUCMapSearchResultController : EUCBaseSearchController

@property (nonatomic, copy) NSString *myCity;

//@property (nonatomic, copy) EUCMapSearchResultControllerBlock poiBlock;

@end
