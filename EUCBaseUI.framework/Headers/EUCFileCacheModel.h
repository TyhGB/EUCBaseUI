//
//  EUCFileCacheModel.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/10/16.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//  文件下载信息模型

//#import "EUCBaseModel.h"
#import <EUCSDK/EUCBaseModel.h>

@interface EUCFileCacheModel : EUCBaseModel

@property (nonatomic, copy) NSString *fileToken;
@property (nonatomic, copy) NSString *fileUrl;

@end
