//
//  EUCForwardingThumbnailController.h
//  EUCIMManager
//
//  Created by Rakuyo on 2017/12/5.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseTBController.h"

NS_ASSUME_NONNULL_BEGIN

@interface EUCForwardingThumbnailController : EUCBaseController

/**
 * 以添加到父视图上的方式，推出视图

 * @param superView 父视图
 * @param title 显示的标题
 * @param dataArray 消息数据源

 */
- (void)showInSuperView:(UIView *)superView
                  title:(NSString *)title
              dataArray:(NSArray<EUCMessageModel *> *)dataArray;

@end

NS_ASSUME_NONNULL_END
