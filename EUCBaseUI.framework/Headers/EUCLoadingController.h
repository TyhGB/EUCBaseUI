//
//  EUCLoadingController.h
//  EUCIMManager
//
//  Created by  ZhuHong on 2016/12/26.
//  Copyright © 2016年 BBDTEK. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EUCLoadingController : UIViewController

/** 单例 */
+ (instancetype)shareLoadingController;

/** 是否正在显示
 YES: 正在显示
 NO :   未显示
 */
@property (nonatomic, assign) BOOL showing;

@end
