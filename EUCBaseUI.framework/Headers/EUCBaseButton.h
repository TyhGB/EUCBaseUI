//
//  EUCBaseButton.h
//  EUCSDK_Demo
//
//  Created by 肖乐 on 2018/3/5.
//  Copyright © 2018年 IMMoveMobile. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EUCBaseButton : UIButton

/** 快速创建按钮 */
+ (instancetype)okaButton;

#pragma mark - 便捷设置title, image
@property (nonatomic, copy) NSString* okaTitle;
@property (nonatomic, copy) NSString* okaImage;

/** 快速的绑定事件 */
- (void)addTarget:(nullable id)target action:(nonnull SEL)sel;

@end
