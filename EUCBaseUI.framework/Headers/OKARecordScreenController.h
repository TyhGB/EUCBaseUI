//
//  OKARecordScreenController.h
//  RecordScreen
//
//  Created by 肖乐 on 2017/8/30.
//  Copyright © 2017年 IMMoveMobile. All rights reserved.
//  录屏控制器

#import <UIKit/UIKit.h>

@class OKARecordScreenController, RecordScreenModel;
@protocol OKARecordScreenControllerDelegate <NSObject>

/**
 回调录制视频模型

 @param recordVC 录屏控制器
 @param recordModel 录屏数据模型
 */
- (void)recordScreenController:(OKARecordScreenController *)recordVC didBackRecordScreenModel:(RecordScreenModel *)recordModel;

@end

@interface OKARecordScreenController : UIViewController

@property (nonatomic, weak) id <OKARecordScreenControllerDelegate> delegate;

@end
