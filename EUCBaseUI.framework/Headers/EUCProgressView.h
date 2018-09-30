//
//  EUCProgressView.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/4/13.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseButton.h"

@interface EUCProgressView : EUCBaseButton

- (id)initWithFrame:(CGRect)frame
  andGradientColors:(NSArray *)gradientColors;

@property (nonatomic) float minimumValue; // default: 0.0f
@property (nonatomic) float maximumValue; // default: 1.0f
@property (nonatomic) float progress; // default: 0.0f
@property (nonatomic) float emptyPartAlpha; // from 0.0f -transparent, nonsense- to 1.0f -white- (default: 0.75f)
@property (nonatomic) float progressAnimationDuration; // default: 0.2f

@property (nonatomic, strong, readonly) NSArray *gradientColors; // must be specified via initializer method

@end
