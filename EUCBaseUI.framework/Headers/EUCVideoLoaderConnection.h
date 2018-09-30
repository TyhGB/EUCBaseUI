//
//  EUCVideoLoaderConnection.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/9/14.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <MobileCoreServices/MobileCoreServices.h>

@class EUCVideoLoaderTask;
@protocol EUCVideoLoaderConnectionDelegate <NSObject>

- (void)didFinishLoadingWithTask:(EUCVideoLoaderTask *)task;
- (void)didFailLoadingWithTask:(EUCVideoLoaderTask *)task withError:(NSInteger )errorCode;

@end

@interface EUCVideoLoaderConnection : NSURLConnection <AVAssetResourceLoaderDelegate>

@property (nonatomic, strong) EUCVideoLoaderTask *loaderTask;
@property (nonatomic, weak) id<EUCVideoLoaderConnectionDelegate> delegate;

@property (nonatomic, copy) NSString *videoUrl;
- (NSURL *)getVideoStreamUrl:(NSURL *)url;
- (void)cancelLoaderTask;

@end

