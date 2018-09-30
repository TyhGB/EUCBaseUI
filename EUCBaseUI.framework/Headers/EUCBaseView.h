//
//  EUCBaseView.h
//  EUCSDK_Demo
//
//  Created by 肖乐 on 2018/3/5.
//  Copyright © 2018年 IMMoveMobile. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EUCBaseView : UIView

/**
 获取一个实例对象（与new方法类似）
 
 @return 返回对象
 */
+ (instancetype)view;

/**
 获取一个xib关联的对象（保证xib文件名与类名一致）
 
 @return 返回对象
 */
+ (instancetype)xibView;

@end
