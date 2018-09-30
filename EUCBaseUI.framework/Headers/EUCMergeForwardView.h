//
//  EUCMergeForwardView.h
//  EUCIMManager
//
//  Created by Rakuyo on 2017/12/11.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EUCMergeForwardView : UIView

+ (EUCMergeForwardView *)initWithTitleString:(NSString *)titleString
                                   dataArray:(NSArray<EUCMessageModel *> *)dataArray;

- (void)titleString:(NSString *)titleString
          dataArray:(NSArray<EUCMessageModel *> *)dataArray;

NS_ASSUME_NONNULL_END

@end
