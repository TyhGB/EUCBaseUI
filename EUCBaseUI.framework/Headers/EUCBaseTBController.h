//
//  EUCBaseTBController.h
//  EUCSDK_Sample
//
//  Created by 肖乐 on 2018/3/6.
//  Copyright © 2018年 IMMoveMobile. All rights reserved.
//

#import "EUCBaseController.h"

@interface EUCBaseTBController : EUCBaseController<UITableViewDataSource, UITableViewDelegate>

/** 一定要在[super viewDidLoad];之前调用 */
@property (nonatomic, assign) UITableViewStyle tableViewStyle;

@property (nonatomic, weak, readonly) UITableView *tableView;

@end
