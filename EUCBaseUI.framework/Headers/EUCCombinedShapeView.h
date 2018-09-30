//
//  EUCCombinedShapeView.h
//  EUCIMManager
//
//  Created by Rakuyo on 2017/10/10.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseView.h"

@class EUCMeModel, EUCCombinedShapeView;
@protocol EUCCombinedShapeViewDelegate <NSObject>

@required
- (void)combinedShapeView:(EUCCombinedShapeView *)shapeView didSelectMeModel:(EUCMeModel *)meModel;

@end

@interface EUCCombinedShapeView : EUCBaseView

// 初始化方法。
+ (instancetype)combinedShapeViewWithFrame:(CGRect)frame
                                 cellArray:(NSArray<EUCMeModel *> *)cellArray
                           collectionViewY:(CGFloat)collectionViewY
                           backgroundColor:(UIColor *)backgroundColor;

// 弹出弹窗。
- (void)showCombinedShapeViewWithTriggerViewCenterX:(CGFloat)triggerViewCenterX;

@property (nonatomic, weak) id <EUCCombinedShapeViewDelegate> delegate;
@property (nonatomic, assign) BOOL isShowing;

@end
