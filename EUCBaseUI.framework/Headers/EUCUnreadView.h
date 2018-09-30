//
//  EUCUnreadView.h
//  EUCIMManager
//
//  Created by XXL on 2017/6/26.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import <UIKit/UIKit.h>

@class EUCUnreadView;

@protocol EUCUnreadViewDelegate <NSObject>

- (void)unreadViewSetMessageRead:(nonnull EUCUnreadView *)unreadView;

@end

@interface EUCUnreadView : UIView

@property (nullable,nonatomic, copy) NSString *text;

@property(null_resettable, nonatomic,strong) UIFont *font;

@property (nullable,nonatomic, strong) UIColor * textColor;

@property (nullable, nonatomic, strong) UIColor *backColor;

@property(nullable, nonatomic,copy) NSAttributedString *attributedText;

@property (nonatomic, weak, nullable) id<EUCUnreadViewDelegate> delegate;

@end
