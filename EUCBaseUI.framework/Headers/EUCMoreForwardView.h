//
//  EUCMoreForwardView.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/12/3.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseView.h"
@class EUCLeftRightToolBar;

//typedef NS_ENUM(NSInteger, EUCCloudFileType) {
//    EUCCloudFileTypeOther = 0,           // 其他文件
//    EUCCloudFileTypePicture = 1,         // 图片
//    EUCCloudFileTypeDoc = 2,             // 文档
//    EUCCloudFileTypeVideo = 3,           // 视频
//    EUCCloudFileTypeMusic = 4,           // 音频
//    EUCCloudFileTypeAll = 5,            // 所有文件
//};

@protocol EUCLeftRightToolBarDelegate <NSObject>

/// 左边按钮的点击回调
- (void)moreForwardButtonDidClick:(EUCLeftRightToolBar *)moreForwardView;
/// 右边按钮的点击回调
- (void)moreCollectionButtonDidClick: (EUCLeftRightToolBar *)moreForwardView;

@end

@interface EUCLeftRightToolBar : EUCBaseView

@property (nonatomic, weak) id<EUCLeftRightToolBarDelegate> delegate;

/**
 初始化方法

 @param leftTitle 左边按钮的名称
 @param leftImageName 左边按钮的图片名称
 @param rightTitle 右边按钮的名称
 @param rightImageName 右边按钮的图片名称
 @return View 实例对象
 */
+ (instancetype)viewWithLeftTitle:(NSString *)leftTitle
                    leftImageName:(NSString *)leftImageName
                       rightTitle:(NSString *)rightTitle
                   rightImageName:(NSString *)rightImageName;

@end
