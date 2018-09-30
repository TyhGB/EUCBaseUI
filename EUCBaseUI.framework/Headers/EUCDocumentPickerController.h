//
//  EUCDocumentPickerController.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/12/12.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//  iOS8-iOS10，需打开Capabilities-iCloud，iOS11不需要（配合UIDocument使用，效果更佳）

#import <UIKit/UIKit.h>

@interface EUCDocumentPickerController : UIDocumentPickerViewController

@property (nonatomic, copy) void(^chooseBlock)(NSURL *fileUrl);

- (void)presentPickerVC;

@end
