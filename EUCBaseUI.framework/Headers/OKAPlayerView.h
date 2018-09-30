//
//  OKAPlayerView.h
//  RecordScreen
//
//  Created by 肖乐 on 2017/9/5.
//  Copyright © 2017年 IMMoveMobile. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface OKAPlayerView : UIView

- (void)play;

- (void)stop;
@property (nonatomic, strong) NSURL *videoUrl;

@end
