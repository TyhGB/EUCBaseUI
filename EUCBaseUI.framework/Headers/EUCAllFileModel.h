//
//  EUCAllFileModel.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/10/16.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

//#import "EUCBaseModel.h"
#import <EUCSDK/EUCBaseModel.h>

@class EUCAllFileParamModel;
@interface EUCAllFileModel : EUCBaseModel

/**
fileName    String    文件名
fileSize    Long    文件大小
fileToken    String    文件token
userId    String    用户ID
hashCode    String    hashcode
success    boolean    是否完全上传成功
createdTime    Long    创建时间
updatedTime    Long    更新时间
 */

// 文件名
@property (nonatomic, copy) NSString *fileName;
// 文件大小
@property (nonatomic, strong) NSNumber *fileSize;
// 文件token
@property (nonatomic, copy) NSString *fileToken;//1 fileurl senderid fileid
//--------------------------------------------------
/**
 修改文件存储服务器后，返回数据的参数有所改变fileToken、userId、hashCode三个参数没有了
 多了fileurl、senderid、fileid、三个属性 设置fileId的时候将原来的fileToken一并设置
 设置senderId的时候将原来的userId一并设置
 **/
//--------------------------------------------------
@property (nonatomic,copy) NSString *fileId;
@property (nonatomic,copy) NSString *senderId;
@property (nonatomic,copy) NSString *fileUrl;

// 用户ID
@property (nonatomic, copy) NSString *userId;//2
// 文件hashCode
@property (nonatomic, copy) NSString *hashCode;//3
// 文件是否完全上传成功
@property (nonatomic, strong) NSNumber *success;
// 创建时间
@property (nonatomic, copy) NSString *createdTime;
// 更新时间
@property (nonatomic, copy) NSNumber *updatedTime;
// 多余参数
@property (nonatomic, strong) EUCAllFileParamModel *params;

@end

@interface EUCAllFileParamModel : EUCBaseModel

// 时长
@property (nonatomic, copy) NSString *duration;
// 缩略图
@property (nonatomic, copy) NSString *thumb;

@end
