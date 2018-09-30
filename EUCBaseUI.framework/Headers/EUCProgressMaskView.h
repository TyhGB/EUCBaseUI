//
//  EUCProgressMaskView.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/5/8.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseView.h"

typedef NS_ENUM(NSInteger, EUCProgressMaskType) {
    EUCProgressMaskTypeDownloading,  // 正在上传中
    EUCProgressMaskTypeunDownload,   // 未下载
    EUCProgressMaskTypeVideoFinished // 视频上传完成
};
@class EUCProgressMaskView;

typedef void (^DownloadBlock)(EUCProgressMaskView *maskView);


@interface EUCProgressMaskView : EUCBaseView

@property (nonatomic, assign) CGFloat progressValue;
@property (nonatomic, assign) EUCProgressMaskType maskType;

@property (nonatomic, copy) DownloadBlock downloadBlock;

// 小视频的播放大小处理
@property (nonatomic, assign) BOOL isVideoCell;
// 是否为视频文件
@property (nonatomic, assign) BOOL isVideoFile;
// 小视频的发送接收方播放位置处理
@property (nonatomic, assign) BOOL isSender;

@end
