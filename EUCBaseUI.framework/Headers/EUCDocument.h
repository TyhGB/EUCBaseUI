//
//  EUCDocument.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/12/12.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//  此类很神奇，因为他爸比是UIDocument

#import <UIKit/UIKit.h>

@interface EUCDocument : UIDocument

- (BOOL)saveOutSandBoxDocument:(NSString *)client_msg_id name:(NSString *)name;

@end
