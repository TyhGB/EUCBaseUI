//
//  EUCCloudDiskController.h
//  EUCIMManager
//
//  Created by jintao on 2017/12/20.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//
/**
   微会议云盘
      **/
// 文件显示类型
typedef NS_ENUM(NSInteger, EUCCloudFileType) {
    EUCCloudFileTypeOther = 0,           // 其他文件
    EUCCloudFileTypePicture = 1,         // 图片
    EUCCloudFileTypeDoc = 2,             // 文档
    EUCCloudFileTypeVideo = 3,           // 视频
    EUCCloudFileTypeMusic = 4,           // 音频
    EUCCloudFileTypeAll = 5,            // 所有文件
};

#import "EUCBaseTBController.h"
#import <EUCSDK/EUCNewFileModel.h>

@class EUCCloudDiskController, OKAPhotoModel;
@protocol EUCCloudFileControllerDelegate <NSObject>

- (void)allFileController:(EUCCloudDiskController *)cloudVC didSelectedFileList:(NSArray *)fileList;

- (void)allFileController:(EUCCloudDiskController *)cloudVC didSelectedPhotoList:(NSArray <OKAPhotoModel *>*)photoList;

- (void)allFileController:(EUCCloudDiskController *)cloudVC didSelectedNewFileModel:(EUCNewFileModel *)newModel;

@end

@interface EUCCloudDiskController : EUCBaseTBController

@property (nonatomic, weak) id <EUCCloudFileControllerDelegate> delegate;

@end

