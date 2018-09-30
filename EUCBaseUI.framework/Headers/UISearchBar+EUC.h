//
//  UISearchBar+EUC.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/9/28.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UISearchBar (EUC)

// 使searchBar的placeHolder靠左
- (void)changeLeftPlaceholder:(NSString *)placeholder;

// iOS11使searchBar的placeHolder居中
- (void)changeCenterPlaceholder:(NSString *)placeholder;

@end
