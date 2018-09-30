//
//  OKABottomToolBar.h
//  CommonToolsManager
//
//  Created by 肖乐 on 2018/1/29.
//  Copyright © 2018年 EasyMoveMobile. All rights reserved.
//

#import <UIKit/UIKit.h>

@class OKAPhotoModel;
@interface OKABottomToolBar : UIView

// 所有图片集合 (OKAPhotoModel)
@property (nonatomic, strong) NSMutableArray <OKAPhotoModel *>* fetchPhotoResult;
@property (nonatomic, copy) void (^doneBlock)();

@end
