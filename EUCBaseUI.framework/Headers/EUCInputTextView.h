//
//  EUCInputTextView.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/2/17.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import <UIKit/UIKit.h>
@class EUCLinkLabel;

typedef void (^ChangeTextBlock)();

@interface EUCInputTextView : UITextView

@property (nonatomic, copy) ChangeTextBlock changeBlock;
- (void)runSuperDeleteBack;

@end
