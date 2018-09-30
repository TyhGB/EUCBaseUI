//
//  EUCMergeForwardArticleView.h
//  EUCIMManager
//
//  Created by Rakuyo on 2017/12/7.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EUCMergeForwardArticleView : UIView

+ (EUCMergeForwardArticleView *)initWithArticleImgStr:(nullable NSString *)articleImgStr
                                             imageURL:(nullable NSString *)imageURL
                                                title:(NSString *)title
                                              website:(NSString *)website;

- (void)articleImgStr:(nullable NSString *)articleImgStr
             imageURL:(nullable NSString *)imageURL
                title:(NSString *)title
              website:(NSString *)website;

NS_ASSUME_NONNULL_END

@end
