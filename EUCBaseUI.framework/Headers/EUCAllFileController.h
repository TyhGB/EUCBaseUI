//
//  EUCAllFileController.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/9/28.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseTBController.h"

@class EUCAllFileController, EUCFileItemModel, OKAPhotoModel, EUCDialogItemModel, EUCMessageModel;
@protocol EUCAllFileControllerDelegate <NSObject>

- (void)allFileController:(EUCAllFileController *)allFileVC didSelectedFileList:(NSArray *)fileList;

- (void)allFileController:(EUCAllFileController *)allFileVC didSelectedPhotoList:(NSArray <OKAPhotoModel *>*)photoList;

@end

@interface EUCAllFileController : EUCBaseTBController

@property (nonatomic, weak) id <EUCAllFileControllerDelegate> delegate;

@end
