//
//  EUCFileHeaderFooterView.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/4/17.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import <UIKit/UIKit.h>
@class EUCFileItemModel, EUCFileHeaderFooterView;

#define ISINWEEK(date) [date isThisWeek]
#define ISOUTWEEK(date) !ISINWEEK(date) && [date isThisMonth]
#define ADDNONULLOBJECT(array, subObject) if (!IsEmptyValue(subObject)) [array addObject:subObject]

@protocol EUCFileHeaderFooterViewDelegate <NSObject>

- (void)headFooterView:(EUCFileHeaderFooterView *)headFooterView didSelectWithFileItemModel:(EUCFileItemModel *)itemModel;

@end

@interface EUCFileHeaderFooterView : UITableViewHeaderFooterView

+ (instancetype)headerFooterViewWithTableView:(UITableView *)tableView;

@property (nonatomic, strong) EUCFileItemModel *itemModel;
@property (nonatomic, weak) id <EUCFileHeaderFooterViewDelegate> delegate;

@end
