//
//  EUCLocationDetailModel.h
//  EUCIMManager
//
//  Created by 栀枯大湿的MBP on 2017/9/6.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import <EUCSDK/EUCBaseModel.h>

@interface EUCLocationDetailModel : EUCBaseModel

// BMKReverseGeoCodeResult .poiList 
@property (nonatomic, copy) NSString *name;

@property (nonatomic, copy) NSString *address;

@property (nonatomic, assign) BOOL isChoose;

@end
