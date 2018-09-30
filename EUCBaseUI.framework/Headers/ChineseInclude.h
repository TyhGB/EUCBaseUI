//
//  ChineseInclude.h
//  Search
//
//  Created by LYZ on 14-1-24.
//  Copyright (c) 2014年 LYZ. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ChineseInclude : NSObject

/**
 判断一个字符串中是否含有中文字符

 @param str 字符串
 @return true or false
 */
+ (BOOL)isIncludeChineseInString:(NSString*)str;
@end
