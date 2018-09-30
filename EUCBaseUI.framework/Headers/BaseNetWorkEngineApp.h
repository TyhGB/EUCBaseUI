//
//  BaseNetWorkEnginApp.h
//  EUCSDK_Sample
//
//  Created by TyhOS on 2018/7/24.
//  Copyright © 2018年 IMMoveMobile. All rights reserved.
//

//#import <Foundation/Foundation.h>
#import <AFNetworking.h>

@interface BaseNetWorkEngineApp : NSObject

/**
 *  POST data from newtork
 *
 *  @param url     path string
 *  @param param   NSDictionary
 *  @param failure error ever occur
 */
+ (void)POSTWithPath:(NSString *)url
               param:(id)param
            progress:(void(^)(NSProgress *  uploadProgress))progress
             success:(void (^)(id dataObject))success
             failure:(void (^)(NSError *error))failure;

/**
 *  GET data from newtork
 *
 *  @param url     path string
 *  @param param   NSDictionary
 *  @param failure error ever occur
 */
+ (void)GETWithPath:(NSString *)url
              param:(id)param
           progress:(void(^)(NSProgress *  uploadProgress))progress
            success:(void (^)(id dataObject))success
            failure:(void (^)(NSError *error))failure;

/**
 *  DELETE data from newtork
 *
 *  @param url     path string
 *  @param param   NSDictionary
 *  @param failure error ever occur
 */
+ (void)DELETEWithPath:(NSString *)url
                 param:(id)param
               success:(void (^)(id dataObject))success
               failure:(void (^)(NSError *error))failure;

/**
 *  PUT data from newtork
 *
 *  @param url     path string
 *  @param param   NSDictionary
 *  @param failure error ever occur
 */
+ (void)PUTWithPath:(NSString *)url
              param:(id)param
            success:(void (^)(id dataObject))success
            failure:(void (^)(NSError *error))failure;



@end
