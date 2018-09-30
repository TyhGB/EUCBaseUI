//
//  EUCCheckZipController.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/4/26.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//  压缩包控制器

#import "EUCBaseTBController.h"

@interface EUCCheckZipController : EUCBaseTBController

/** 压缩文件在自己名下的fileToken */
@property (nonatomic, copy) NSString *fileToken;
- (instancetype)initWithDirectory:(NSString *)directory isRoot:(BOOL)isRoot;

@end
