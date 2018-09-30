//
//  EUCBaseSearchController.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/4/26.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//  点击searchBar,搜索框上升控制器


#import "EUCBaseTBController.h"

@interface EUCBaseSearchController : EUCBaseTBController

//搜索框滑到导航条
- (void)showInAtFactionController:(EUCBaseController *)vc;
//搜索框还原
-(void)hiden:(void(^)())complection;

@property (nonatomic, strong) NSArray *searchArray;

@property (nonatomic, assign) BOOL isShowTb;
//存储所有数据的数组,从这个数组里进行检索
@property (nonatomic, strong) NSMutableArray *memberArray;

// 检索条件（可以有多个条件）
@property (nonatomic, strong) NSArray *predicateFormats;

@property (nonatomic, strong) UISearchBar *searchBar;

- (void)reloadViewLayouts;

@end
