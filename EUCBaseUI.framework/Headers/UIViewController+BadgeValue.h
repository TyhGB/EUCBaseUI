//
//  UIViewController+BadgeValue.h
//  EUCIMManager
//
//  Created by XXL on 2017/6/26.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (BadgeValue)

@property (nonatomic, copy) NSString *badgeValue;

@property (nonatomic, assign) BOOL showBadge;


/**
 在将badge动画消除之后

 @param badgeValue badgeValue
 */
- (void)messageReadWithBadgeValue:(NSString *)badgeValue;

@end
