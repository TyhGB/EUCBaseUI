//
//  EUCRecentFileController.h
//  EUCIMManager
//
//  Created by Rakuyo on 2017/12/20.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseController.h"

@protocol EUCCloudFileControllerDelegate;
@interface EUCRecentFileController : EUCBaseController

@property (nonatomic, weak) id<EUCCloudFileControllerDelegate> delegate;

@end
