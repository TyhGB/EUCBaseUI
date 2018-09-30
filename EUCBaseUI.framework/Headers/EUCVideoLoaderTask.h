//
//  EUCVideoLoaderTask.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/9/14.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

@class EUCVideoLoaderTask;
@protocol EUCVideoLoaderTaskDelegate <NSObject>

// 接收到响应时, 任务总长度及mimeType回调
- (void)loaderTask:(EUCVideoLoaderTask *)loaderTask didReceiveVideoLength:(NSUInteger)videoLength mimeType:(NSString *)mimeType;
// 接收到下载片段时回调
- (void)didReceiveVideoDataWithLoaderTask:(EUCVideoLoaderTask *)loaderTask;
// 结束任务下载回调
- (void)didFinishWithLoaderTask:(EUCVideoLoaderTask *)loaderTask;
// 任务失败回调
- (void)loaderTask:(EUCVideoLoaderTask *)loaderTask didFailLoading:(NSError *)error;

@end


@interface EUCVideoLoaderTask : NSObject

@property (nonatomic, strong, readonly) NSURL *loaderUrl;
@property (nonatomic, assign, readonly) NSUInteger offset;

@property (nonatomic, assign, readonly) NSUInteger videoLength;
@property (nonatomic, assign, readonly) NSUInteger downloadOffset;
@property (nonatomic, copy, readonly) NSString *mimeType;

// 原始链接
@property (nonatomic, copy) NSString *videoUrl;

@property (nonatomic, weak) id<EUCVideoLoaderTaskDelegate> delegate;

- (void)setLoaderUrl:(NSURL *)loaderUrl offset:(NSUInteger)offset;
- (void)cancelLoader;

@end
