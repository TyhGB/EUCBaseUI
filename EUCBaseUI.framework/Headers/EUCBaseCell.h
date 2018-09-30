//
//  EUCBaseCell.h
//  EUCSDK_Sample
//
//  Created by 肖乐 on 2018/3/6.
//  Copyright © 2018年 IMMoveMobile. All rights reserved.
//

#import <UIKit/UIKit.h>
@interface EUCBaseCell : UITableViewCell

/**
 返回一个Cell实例, 通常用于纯代码编写的子类
 
 @param tableView 当前表视图视图
 @return 返回Cell
 */
+ (instancetype)cell:(UITableView*)tableView;

/**
 返回一个Cell实例, 通常用于XIB
 
 @param tableView 当前表视图视图
 @return 返回Cell
 */
+ (instancetype)xibCell:(UITableView*)tableView;

/**
 返回一个空白Cell, 主要用于占位Cell
 
 @param tableView 当前表视图视图
 @return 返回Cell
 */
+ (id)blankCell:(UITableView*)tableView;

@end
