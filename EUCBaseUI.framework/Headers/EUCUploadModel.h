//
//  EUCUploadModel.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/5/5.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

//#import "EUCBaseModel.h"
#import <EUCSDK/EUCBaseModel.h>
//#import "EUCDialogModel.h"
#import <EUCSDK/EUCDialogModel.h>

@interface EUCUploadModel : EUCBaseModel

/** 上传文件名 */
@property (nonatomic, copy) NSString *uploadFileName;
/** 上传文件二进制 */
@property (nonatomic, strong) NSData *uploadFileData;
/** 上传文件本地路径 */
@property (nonatomic, copy) NSString *uploadFilePath;
/** 上传文件上传进度 */
@property (nonatomic, assign) CGFloat progress;
/** 上传文件的原始尺寸 */
@property (nonatomic, assign) long long uploadFileOriginSize;
/** 上传文件的尺寸 */
@property (nonatomic, copy) NSString *uploadFileSize;
/** 转发的dialog */
@property (nonatomic, strong) EUCDialogItemModel *forwardDialogModel;

@end
