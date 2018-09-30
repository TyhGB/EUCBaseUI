//
//  NetWorkEngineApp.h
//  EUCSDK_Sample
//
//  Created by TyhOS on 2018/7/25.
//  Copyright © 2018年 IMMoveMobile. All rights reserved.
//

#import "BaseNetWorkEngineApp.h"

@interface NetWorkEngineApp : BaseNetWorkEngineApp
#pragma mark - 注册
/**
 *  注册用户 - Register
 *  POST users
 *
 */
+ (void)registerWithParams:(NSDictionary*)param
                   success:(void (^)(id dataObject))success
                   failure:(void (^)(NSError *error))failure;

/**
 *  推荐注册用户 - Register
 *  POST /friend/register/recommendationUser
 */
+ (void)recommendationUserSuccess:(void (^)(id dataObject))success
                          failure:(void (^)(NSError *error))failure;

#pragma mark -
#pragma mark - 登录
/**
 * 用户密码登录
 * POST app/auth/login
 *
 */
+ (void)loginWithParams:(NSDictionary*)param
                success:(void (^)(id dataObject))success
                failure:(void (^)(NSError *error))failure;

/**
 *  手机验证码登录
 *  POST /auth/verifysms
 *
 */
+ (void)smsloginWithParams:(NSDictionary*)param
                   success:(void (^)(id dataObject))success
                   failure:(void (^)(NSError *error))failure;

/**
 *  登出 - Logout
 *  DELETE login
 *
 *  无参数
 */
+ (void)logoutWithParam:(NSDictionary *)params success:(void (^)(id dataObject))success
                failure:(void (^)(NSError *error))failure;


#pragma mark -
#pragma mark - 信息更新
/**
 *  更新Session - Renew Session
 *  POST session/renew
 *
 */
+ (void)sessionRenewSuccess:(void (^)(id dataObject))success
                    failure:(void (^)(NSError *error))failure;
/**
 重新获取paasToken
 请求路径：paas/getPaasToken
 请求方式：GET
 
 @param success success
 @param failure failure
 */
+ (void)reGetPaasTokenSuccess:(void (^)(id dataObject))success
                      failure:(void (^)(NSError *error))failure;
/**
 *  修改用户信息 - Edit User Info
 *  PUT /users/{id}
 *
 */
+ (void)PUTUserWithParams:(NSDictionary*)param
                   userID:(NSString *)userID
                  success:(void (^)(id dataObject))success
                  failure:(void (^)(NSError *error))failure;

/**
 *  获得用户信息 - Get User Info
 *  GET users
 *
 */
+ (void)userInfoWithUserID:(NSString*)userid
                   success:(void (^)(id dataObject))success
                   failure:(void (^)(NSError *error))failure;

#pragma mark -
#pragma mark - 验证
/**
 *  未登录情况下修改用户密码
 *  POST auth/smspassword
 */
+ (void)smspasswordWithParams:(NSDictionary*)param
                      success:(void (^)(id dataObject))success
                      failure:(void (^)(NSError *error))failure;

/**
 *  验证用户登录密码 - Verify the user password
 *  POST /users/verifypwd
 */
+ (void)verifypwdWithParams:(NSDictionary*)param
                    success:(void (^)(id dataObject))success
                    failure:(void (^)(NSError *error))failure;

/**
 * 验证是否有IMS权限
 * GET auth/verifyIms
 */
+ (void)AuthVerifyIms:(void (^)(id dataObject))success
              failure:(void (^)(NSError *error))failure;
#pragma mark -
#pragma mark - 发送手机验证码
/**
 *  发送手机验证码
 *  GET /auth/sendsms
 *
 */
+ (void)sendsmsWithParams:(NSDictionary*)params
                  success:(void (^)(id dataObject))success
                  failure:(void (^)(NSError *error))failure;

/**
 *  验证手机验证码 （用于 修改手机号）
 *  GET /auth/verifysms?
 *
 */
+ (void)verifysmsWithParams:(NSDictionary*)params
                    success:(void (^)(id dataObject))success
                    failure:(void (^)(NSError *error))failure;

/**
 *  验证手机验证码 （用于 注册的时候）
 *  POST /auth/verifysms?
 *
 *  参数 mobile={mobile}&code={code}
 */

+ (void)verifysmsPOSTWithParams:(NSDictionary*)param
                        success:(void (^)(id dataObject))success
                        failure:(void (^)(NSError *error))failure;
#pragma mark - 扫码登陆相关

/**
 *  扫描二维码--App
 *  POST /app/auth/scanByQRCode
 */
+ (void)scanCodeWithParams:(NSDictionary*)param
                   success:(void (^)(id dataObject))success
                   failure:(void (^)(NSError *error))failure;

/**
 *  扫描二维码确认登陆--App
 *  POST /app/auth/loginByQRCode
 */
+ (void)registerByCodeWithParams:(NSDictionary*)param
                         success:(void (^)(id dataObject))success
                         failure:(void (^)(NSError *error))failure;

/**
 *  二维码登录验证--Web
 *  GET /auth/initQRCode
 */
+ (void)QRCodeSuccess:(void (^)(id dataObject))success
              failure:(void (^)(NSError *error))failure;

/**
 *  二维码验证结果--Web
 *  GET /auth/isRegistered
 */
+ (void)QRRegisteredWithParams:(NSDictionary*)params
                       success:(void (^)(id dataObject))success
                       failure:(void (^)(NSError *error))failure;

#pragma mark -
#pragma mar - 其它
/**
 地区接口
 */
+ (void)loclistSuccess:(void (^)(id dataObject))success
               failure:(void (^)(NSError *error))failure;
@end
