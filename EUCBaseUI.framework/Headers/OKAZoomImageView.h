//
//  OKAZoomImageView.h
//  OKAPhotosDemo
//
//  Created by XXL on 2017/9/5.
//  Copyright © 2017年 EasyMoveMobile. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface OKAZoomImageView : UIView

@property (nonatomic, strong) UIImageView* imageOKAView;

@property (nonatomic, strong) UIImage *image;

@property (nonatomic, assign) CGFloat zoomScale;

- (void)setZoomScale:(CGFloat)zoomScale;

@end
