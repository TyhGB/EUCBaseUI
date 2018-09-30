//
//  EUCDocumentCheckController.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/4/26.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//  文档查看器

#import "EUCBaseController.h"
@class EUCFileItemModel, EUCMessageModel;


@interface EUCDocumentCheckController : EUCBaseController

@property (nonatomic, strong) EUCFileItemModel *fileModel;

// 用于右上角转发
@property (nonatomic, strong) EUCMessageModel *messageModel;
@property (nonatomic, copy) NSString *favoriteID;

@end
