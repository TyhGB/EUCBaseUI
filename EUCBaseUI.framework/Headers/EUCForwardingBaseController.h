//
//  EUCForwardingBaseController.h
//  EUCIMManager
//
//  Created by  ZhuHong on 2017/3/22.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseTBController.h"
@class EUCDialogItemModel;
@class EUCMessageModel, EUCFileItemModel;

typedef void (^ForwardBlock)(EUCMessageModel *);
// 转发类型
typedef NS_ENUM(NSUInteger, EUCForwardingType)
{
    // 普通转发
    EUCForwardingTypeNormal = 0,
    // 逐条转发
    EUCForwardingTypeOneByOne = 1,
    // 合并转发
    EUCForwardingTypeMerge = 2
};

@interface EUCForwardingBaseController : EUCBaseTBController

// 转发一条消息
@property (nonatomic, strong) EUCMessageModel* messageMode;
// 合并转发 多条消息
@property (nonatomic, strong) NSMutableArray<EUCMessageModel *> *messageModels;
// 合并消息的所在的会话item
@property (nonatomic, strong) EUCDialogItemModel *forwardDialogItem;
// 转发类型 (默认为普通转发)
@property (nonatomic, assign) EUCForwardingType forwardType;

//有可能直接转发压缩包本地文件
@property (nonatomic, strong) EUCFileItemModel *fileModel;

/**
 * 发送消息 (已有的聊天)
 */
- (void)sendMessageWithDialogOrUsers:(NSMutableArray *)models;


@end


