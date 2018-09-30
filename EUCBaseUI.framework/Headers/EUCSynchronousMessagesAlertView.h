//
//  EUCSynchronousMessagesAlertView.h
//  EUCIMManager
//
//  Created by XXL on 2017/9/13.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseView.h"

typedef NS_ENUM(NSUInteger, EUCSynchronousMessagesType) {
    EUCSynchronousMessagesTypeSevenDay = 0,
    EUCSynchronousMessagesTypeThirtyDay = 1,
    EUCSynchronousMessagesTypeAll = 2,
    EUCSynchronousMessagesTypeCancel = 3,
};

@interface EUCSynchronousMessagesAlertView : EUCBaseView

@property (nonatomic, copy) NSString *message;

+ (instancetype)alertViewWithClickButtonHandler:(void(^)(EUCSynchronousMessagesType synType))clickHander;

- (void)show;

@end
