//
//  NetWorkEngineApp+Favorites.h
//  EUCSDK_Sample
//
//  Created by TyhOS on 2018/7/25.
//  Copyright © 2018年 IMMoveMobile. All rights reserved.
//

#import "NetWorkEngineApp.h"

@interface NetWorkEngineApp (Favorites)
/**
 * 新增用户收藏
 * POST users/saveUserFavorites
 */
+ (void)saveUserFavoritesWithParams:(NSDictionary *)params
                            success:(void(^)(id dataObject))success
                            failure:(void(^)(NSError *error))failure;

/**
 * 删除用户收藏
 * DELETE users/removeUserFavorites
 */
+ (void)removeUserFavoritesWithParams:(NSDictionary *)params
                              success:(void(^)(id dataObject))success
                              failure:(void(^)(NSError *error))failure;

/**
 * 查询用户的所有收藏
 * GET users/findAllUserFavorites
 */
+ (void)findAllUserFavoritesWithParams:(NSDictionary *)params
                               success:(void(^)(id dataObject))success
                               failure:(void(^)(NSError *error))failure;

/**
 * 根据条件查询用户的收藏
 * GET users/findUserFavoritesByCondition
 */
+ (void)findUserFavoritesByConditionWithParams:(NSDictionary *)params
                                       success:(void(^)(id dataObject))success
                                       failure:(void(^)(NSError *error))failure;
@end
