//
//  OKALocationModel.h
//  LocationManager
//
//  Created by  ZhuHong on 2017/2/23.
//  Copyright © 2017年 EasyMoveMobile. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OKALocationModel : NSObject

@property (nonatomic, copy) NSString* City;
@property (nonatomic, copy) NSString* Country;
@property (nonatomic, copy) NSString* CountryCode;
@property (nonatomic, strong) NSArray* FormattedAddressLines;
@property (nonatomic, copy) NSString* Name;
@property (nonatomic, copy) NSString* State;
@property (nonatomic, copy) NSString* Street;
@property (nonatomic, copy) NSString* SubLocality;
@property (nonatomic, copy) NSString* SubThoroughfare;
@property (nonatomic, copy) NSString* Thoroughfare;

@end
