//
//  EUCFileDetailDelegate.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/11/24.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import <Foundation/Foundation.h>

@class EUCMessageModel;
@protocol EUCFileDetailDelegate <NSObject>

@optional
- (void)fileController:(id)fileVC didClickPauseBtnClick:(EUCMessageModel *)messageModel;
// return 新模型
- (void)fileController:(id)fileVC didClickRepeatBtn:(EUCMessageModel *)messageModel isTrySend:(BOOL)isTrySend;

@end
