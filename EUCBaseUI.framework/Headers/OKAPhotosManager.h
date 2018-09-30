//
//  OKAPhotosManager.h
//  OKAPhotosDemo
//
//  Created by XXL on 2017/9/5.
//  Copyright © 2017年 EasyMoveMobile. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Photos/Photos.h>

typedef NS_ENUM(NSUInteger, OKAPhotosAuthorizationStatus) {
    OKAPhotosAuthorizationStatusNotDetermined = 0,
    OKAPhotosAuthorizationStatusNotAuthorized,
    OKAPhotosAuthorizationStatusAuthorized,
};

@interface OKAPhotosManager : NSObject

/* 获取相册的权限 */
+ (OKAPhotosAuthorizationStatus)authorizationStatus;

/* 请求相册权限 */
+ (void)requestAuthorizationWithCompletionHandler:(void(^)(BOOL granted))handler;

/**
 根据权限做处理,如果第一次会有系统的授权弹窗
 
 @param handler 是否授权的block
 */
+ (void)accordingToAuthorityWithHandler:(void(^)(BOOL authorized))handler;

@end
