//
//  OKALocation.h
//  LocationManager
//
//  Created by  ZhuHong on 2017/2/23.
//  Copyright © 2017年 EasyMoveMobile. All rights reserved.
//

/**
 宏定义：过期提醒
 */
#define OKALocationDeprecated(instead) NS_DEPRECATED(2_0, 2_0, 2_0, 2_0, instead)

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

// 数据回调 (用OKALocationModel处理里面的字典数据)
typedef void(^OKALocationBlock)(NSMutableArray *locationDics, NSError* error);

// 定位时机
typedef NS_ENUM(NSInteger, LocationManagerType) {
    // 永不
    LocationManagerTypeNever = 1000,
    // 使用应用期间
    LocationManagerTyperequestWhenInUseAuthorization,
    // 始终
    LocationManagerTypeAlwaysAuthorization
    
};

// 定位类型
typedef NS_ENUM(NSInteger, LocationCountsType){
    /* 自己当前位置 */
    LocationCountsTypeDefault = 1000,
    /* 返回当前位置的10个位置 */
    LocationCountsTypeMore,
};

@interface OKALocation : NSObject

/** 单列 */
+ (instancetype)shareLocation NS_REQUIRES_SUPER;


/** 默认: 使用应用期间 */
@property (nonatomic, assign) LocationManagerType managerType;

/** 定位类型 */
@property (nonatomic, assign) LocationCountsType countsType;


/** 开始定位 */
- (instancetype)startLocation OKALocationDeprecated("请直接调用getLocationCity:方法即可");

/** 结束定位 */
- (void)stopLocation NS_REQUIRES_SUPER;

/** 获取定位信息 */
- (instancetype)getLocationCity:(OKALocationBlock)block NS_REQUIRES_SUPER;

/** 定位主要对象 */
@property (nonatomic, strong, readonly) CLLocationManager *locationManager;

/** 数据返回 */
@property (nonatomic, copy, readonly) OKALocationBlock getcityBlock;

/* 只返回一个时此参数忽略
 * 返回多个时 必填,如果是搜索则传检索条件
 * 附近位置信息则传 “餐饮服务”、“商务住宅”、“生活服务”等等(系统方法弊端,三方待研究)
 */
@property (nonatomic, copy) NSString *searchKey;

/**
 * 主要用于在子类中的回调
 */
- (void)addDataBlock:(OKALocationBlock)block;


/**
 * 定位结果实时返回
 */
- (void)locationManager:(CLLocationManager *)manager
     didUpdateLocations:(NSArray<CLLocation *> *)locations NS_REQUIRES_SUPER;

@end
