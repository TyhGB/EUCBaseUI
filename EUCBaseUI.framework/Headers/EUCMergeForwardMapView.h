//
//  EUCMergeForwardMapView.h
//  EUCIMManager
//
//  Created by Rakuyo on 2017/12/7.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EUCMergeForwardMapView : UIView

+ (EUCMergeForwardMapView *)initWithLocation:(NSString *)location
                                     address:(nullable NSString *)address; // 兼容老版本，所以可为 nil

- (void)location:(NSString *)location address:(nullable NSString *)address; // 兼容老版本，所以可为 nil

NS_ASSUME_NONNULL_END

@end
