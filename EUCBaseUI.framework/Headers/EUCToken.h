//
//  EUCToken.h
//  EUCIMManager
//
//  Created by  ZhuHong on 2017/10/30.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import <UIKit/UIKit.h>
UIKIT_EXTERN NSString* const LKIMTokenKey;

@interface EUCToken : NSObject

/**
app server平台LKIM-Token
 */
+ (NSString*)lkimToken;




/**
 appServer token

 @param token appServerToken
 */
+ (void)saveLkimToken:(NSString *)token;
@end
