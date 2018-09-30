//
//  EUCChatFileHeaderView.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/9/28.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseView.h"

@class EUCChatFileHeaderView;
@protocol EUCChatFileHeaderViewDelegate <NSObject>

- (void)headerView:(EUCChatFileHeaderView *)headerView didClickChooseBtn:(UIButton *)chooseBtn;
// 搜索回调
- (void)headerView:(EUCChatFileHeaderView *)headerView didChangeSearchText:(NSString *)searchText;
// 开始搜索回调
- (void)headerViewShouldBeginEditing:(EUCChatFileHeaderView *)headerView;

@end

@interface EUCChatFileHeaderView : EUCBaseView

// 箭头是否为向上状态
@property (nonatomic, assign) BOOL upStatus;
// 标题
@property (nonatomic, copy) NSString *titleStr;
@property (nonatomic, weak) id <EUCChatFileHeaderViewDelegate> delegate;

- (void)resignSearchBarResponder;

@end
