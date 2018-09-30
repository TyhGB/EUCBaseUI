//
//  HttpManangerApp.h
//  EUCSDK_Sample
//
//  Created by TyhOS on 2018/7/24.
//  Copyright © 2018年 IMMoveMobile. All rights reserved.
//  与SDK的不同是请求头的 LKIM-Token不一样，这边的请求专门用于登陆注册和用户相关的操作请求

//#import <Foundation/Foundation.h>
#import <AFNetworking.h>

@interface HttpManagerApp : NSObject



+ (instancetype)shareHttpTool;

@property (strong, nonatomic, readonly) AFHTTPSessionManager *httpManagerApp;

- (AFSecurityPolicy *)customSecurityPolicy;

/**
 *  发送POST请求
 *
 *  @param url     请求路径
 *  @param params  请求参数
 *  @param success 请求成功后的回调（请将请求成功后想做的事情写到这个block中）
 *  @param failure 请求失败后的回调（请将请求失败后想做的事情写到这个block中）
 */

- (void)POST:(NSString *)url
      params:(NSDictionary *)params
    progress:(void(^)(NSProgress *  uploadProgress))progress
     success:(void (^)(NSURLSessionDataTask *operation, id responseObject))success
     failure:(void (^)(NSURLSessionDataTask *operation, NSError *error))failure;

/**
 *  发送GET请求
 *
 *  @param url     请求路径
 *  @param params  请求参数
 *  @param success 请求成功后的回调（请将请求成功后想做的事情写到这个block中）
 *  @param failure 请求失败后的回调（请将请求失败后想做的事情写到这个block中）
 */
- (void)GET:(NSString *)url params:(NSDictionary *)params progress:(void(^)(NSProgress *  uploadProgress))progress success:(void (^)(NSURLSessionDataTask *operation, id responseObject))success failure:(void (^)(NSURLSessionDataTask *operation, NSError *error))failure;

/**
 *  发送DELETE请求
 *
 *  @param url     请求路径
 *  @param params  请求参数
 *  @param success 请求成功后的回调（请将请求成功后想做的事情写到这个block中）
 *  @param failure 请求失败后的回调（请将请求失败后想做的事情写到这个block中）
 */
- (void)DELETE:(NSString *)url
        params:(NSDictionary *)params
       success:(void (^)(NSURLSessionDataTask *, id))success
       failure:(void (^)(NSURLSessionDataTask *, NSError *))failure;

/**
 *  发送PUT请求
 *
 *  @param url     请求路径
 *  @param params  请求参数
 *  @param success 请求成功后的回调（请将请求成功后想做的事情写到这个block中）
 *  @param failure 请求失败后的回调（请将请求失败后想做的事情写到这个block中）
 */
- (void)PUT:(NSString *)url
     params:(NSDictionary *)params
    success:(void (^)(NSURLSessionDataTask *, id))success
    failure:(void (^)(NSURLSessionDataTask *, NSError *))failure;


/** 取消当前正在发送中的请求 */
+ (void)cancelAllRequest;

@end
