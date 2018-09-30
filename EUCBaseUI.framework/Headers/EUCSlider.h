//
//  EUCSlider.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/5/4.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseView.h"
@class EUCSlider;

typedef void (^SliderValueChangeBlock)(EUCSlider *slider);
typedef void (^SliderFinishChangeBlock)(EUCSlider *slider);
typedef void (^DraggingSliderBlock)(EUCSlider *slider);

@interface EUCSlider : EUCBaseView

/** 滑动条当前值 */
@property (nonatomic, assign) CGFloat value;        /* From 0 to 1 */
@property (nonatomic, assign) CGFloat middleValue;  /* From 0 to 1 */

/** 滑条线的宽度 */
@property (nonatomic, assign) CGFloat lineWidth;
@property (nonatomic, assign) CGFloat sliderDiameter;
/** 滑条颜色 */
@property (nonatomic, strong) UIColor *sliderColor;
/** 滑条未到达的颜色 */
@property (nonatomic, strong) UIColor *maxColor;
/** 滑条到达颜色 */
@property (nonatomic, strong) UIColor *middleColor;
/** 滑条已经过去的颜色 */
@property (nonatomic, strong) UIColor *minColor;

//进度值改变回调
@property (nonatomic, copy) SliderValueChangeBlock valueChangeBlock;
//完成进度回调
@property (nonatomic, copy) SliderFinishChangeBlock finishChangeBlock;
//拖动滑动条回调
@property (nonatomic, copy) DraggingSliderBlock draggingSliderBlock;


@end
