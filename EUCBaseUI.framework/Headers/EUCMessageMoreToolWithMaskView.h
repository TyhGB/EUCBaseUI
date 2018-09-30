//
//  EUCMessageMoreToolWithMaskView.h
//  EUCIMManager
//
//  Created by ShaoShanPeng on 2016/12/27.
//  Copyright © 2016年 BBDTEK. All rights reserved.
//

#import "EUCBaseView.h"
#import <EUCSDK/EUCDialogModel.h>
@class EUCMessageToolBoxModel;

@protocol EUCMessageMoreToolWithMaskViewDelegate <NSObject>

- (void)messageToolWithMaskView:(EUCBaseView *)maskView toolDidSelectModel:(EUCMessageToolBoxModel *)itemModel;

@end

@interface EUCMessageMoreToolWithMaskView : EUCBaseView
@property (nonatomic, weak) id<EUCMessageMoreToolWithMaskViewDelegate> delegate;

@property (nonatomic, strong) EUCDialogItemModel* itemModel;

- (void)showOnView:(UIView *) aview;

- (void)hideToolBox;
@property (nonatomic, copy) void(^hidenBlock)(void);

@end
