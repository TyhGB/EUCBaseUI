//
//  EUCHeaderFooterView.h
//  EUCIMManager
//
//  Created by  ZhuHong on 2017/6/8.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EUCHeaderFooterView : UITableViewHeaderFooterView

/**
 快速创建
 
 @param tableView 当前的tableView
 */
+ (instancetype)headerFooterView:(UITableView*)tableView;

@property (nonatomic, copy) NSString* eucText;

@end
