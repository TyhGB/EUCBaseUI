//
//  EUCGroupNameUtil.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/7/12.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//  管理群组成员名称类

#import <Foundation/Foundation.h>
#import <EUCSDK/EUCUserModel.h>
@class EUCDialogItemModel;
@interface EUCGroupNameUtil : NSObject


/**
 根据userID获取此人在dialogID应该显示的名字，头像

 @param dialogID 会话ID
 @param userID 用户ID
 @param complete 回调数据
 */
+ (void)nameInDialogID:(NSString *)dialogID withUserID:(NSString *)userID complete:(void (^)(NSString *groupName, NSString *groupIcon))complete;


/**
 根据userID的集合获取此人在dialogID的模型集合

 @param dialogID 会话ID
 @param occupantIds 用户ID集合
 @param complete 获取所有用户集合之后的回调
 */
+ (void)mutilNameInDialogID:(NSString *)dialogID withOccupantIds:(NSMutableArray *)occupantIds complete:(void (^)(NSMutableArray <EUCUserModel *>*memberArray))complete;



/**
 此方法只适用于添加群成员与邀请成员进行语音会议，因为这里的展示成员，有群成员也有好友
 所以名字展示规则有差别

 @param dialogID 会话ID
 @param complete 好友与群成员混合模型
 */
+ (void)groupOrFriendNameInDialogID:(NSString *)dialogID complete:(void (^)(NSMutableArray <EUCUserModel *>*memberArray))complete;



/**
 根据会话模型获取该会话名称

 @param itemModel 会话模型
 @return 会话正确的名字
 */
+ (NSString *)dialogNameWithDialogModel:(EUCDialogItemModel *)itemModel;


/**
 优化根据ID集合获取此人在dialogID的模型集合,30个30个查

 @param dialogID 会话ID
 @param occupantIds 群成员ID
 @param complete 成功回调
 */
+ (void)speedMutilNameInDialogI:(NSString *)dialogID withOccupantIds:(NSMutableArray *)occupantIds complete:(void (^)(NSMutableArray <EUCUserModel *>*memberArray))complete;


@end
