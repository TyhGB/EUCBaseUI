//
//  EUCDocumentBrowserController.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/12/11.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//  iOS11新类：对picker的一次升级（现在有局限性）

#import <UIKit/UIKit.h>

@interface EUCDocumentBrowserController : UIDocumentBrowserViewController

@property (nonatomic, copy) void(^chooseBlock)(NSURL *fileUrl);

@end
