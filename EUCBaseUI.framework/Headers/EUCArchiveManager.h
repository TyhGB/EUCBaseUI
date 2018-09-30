//
//  EUCArchiveManager.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/4/27.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EUCArchiveManager : NSObject

/**
 *  @brief 解压文件
 *  @param fromPath 待解压文件的位置
 *  @param fileName 文件名，对应存储
 *  @param fileToken   文件fileToken
 *  @param progress 解压进度
 */
+(void)unArchiveFromPath:(NSString*)fromPath fileName:(NSString *)fileName fileToken:(NSString *)fileToken progress:(void (^)(CGFloat unArchiveProgress))progress;

/**
 * @brief 判断是否为zip文件
 * @param fromPath 文件路径
 */
+ (BOOL)isZipfileWithFromPath:(NSString *)fromPath;

/**
 * @brief 获取解压文件路径
 * @param fileName 文件名
 * @param fileToken   文件fileToken
 */
+ (NSString *)zipFilePathWithFileName:(NSString *)fileName WithFileToken:(NSString *)fileToken;

/**
 * @brief 删除压缩文件
 * @param fileName 文件名
 * @param fileToken   文件fileToken
 */
+ (void)deleteZipFileWithFileName:(NSString *)fileName WithFileToken:(NSString *)fileToken;

@end
