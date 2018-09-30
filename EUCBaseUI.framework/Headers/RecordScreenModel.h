//
//  RecordScreenModel.h
//  RecordScreen
//
//  Created by 肖乐 on 2017/9/4.
//  Copyright © 2017年 IMMoveMobile. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface RecordScreenModel : NSObject

// 小视频本地完整存储路径
@property (nonatomic, copy) NSString *localAbsolutePath;
// 缩略图完整存储路径
@property (nonatomic, copy) NSString *thumbAbsolutePath;
// 录制日期
@property (nonatomic, strong) NSDate *recordDate;
// 录制时长
@property (nonatomic, assign) NSInteger recordTime;
// 视频二进制
@property (nonatomic, strong) NSData *videoData;
// 缩略图二进制
@property (nonatomic, strong) NSData *thumbData;
// 缩略图
@property (nonatomic, strong) UIImage *thumbImage;

@end
