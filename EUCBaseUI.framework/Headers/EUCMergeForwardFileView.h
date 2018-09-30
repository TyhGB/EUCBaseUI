//
//  EUCMergeForwardFileView.h
//  EUCIMManager
//
//  Created by Rakuyo on 2017/12/7.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EUCMergeForwardFileView : UIView

+ (EUCMergeForwardFileView *)initWithIconImageName:(NSString *)iconImageName
                                          fileName:(NSString *)fileName
                                          fileSize:(long)fileSize;

- (void)iconImageName:(NSString *)iconImageName
             fileName:(NSString *)fileName
             fileSize:(long)fileSize;

NS_ASSUME_NONNULL_END

@end
