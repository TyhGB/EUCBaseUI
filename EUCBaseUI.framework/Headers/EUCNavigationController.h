//
//  EUCNavigationController.h
//  EUCSDK_Demo
//
//  Created by 肖乐 on 2018/3/5.
//  Copyright © 2018年 IMMoveMobile. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM (NSUInteger, EUCNavigationControllerStatus) {
    /** 开始侧滑 */
    EUCNavigationControllerStatusEdgePanBegan = 0,
    
    /** 结束侧滑。暂时不能写到基类里，需要的话自己在对应控制器的 viewDidAppear: 方法中对 status 赋值即可。 */
    EUCNavigationControllerStatusEdgePanEnded = 1,  // 结束侧滑（暂时不能写在基类里，需要的话自己在）
};

@interface EUCNavigationController : UINavigationController

@property (nonatomic, assign) EUCNavigationControllerStatus status;

@end
