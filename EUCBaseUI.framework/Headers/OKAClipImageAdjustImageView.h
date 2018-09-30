//
//  OKAClipImageAdjustImageView.h
//  OKAPhotosDemo
//
//  Created by XXL on 2017/9/5.
//  Copyright © 2017年 EasyMoveMobile. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSUInteger, OKAClipImageAdjustImageViewType) {
    
    OKAClipImageAdjustImageViewTypeRound,       //圆形框
    OKAClipImageAdjustImageViewTypeRectangle,   //矩形框
};

typedef NS_ENUM(NSUInteger, OKAClipImageAdjustImageViewContentType) {
    
    OKAClipImageAdjustImageViewContentTypeScaleAspectFill,
    OKAClipImageAdjustImageViewContentTypeScaleAspectFit,
    
};

IB_DESIGNABLE

@interface OKAClipImageAdjustImageView : UIView

@property (nonatomic, strong) IBInspectable UIImage *image;

#if TARGET_INTERFACE_BUILDER

@property (nonatomic, assign) IBInspectable NSInteger type;
@property (nonatomic, assign) IBInspectable NSInteger contentType;

#else

@property (nonatomic, assign) OKAClipImageAdjustImageViewType type;
@property (nonatomic, assign) OKAClipImageAdjustImageViewContentType contentType;

#endif


/** 选框的颜色，默认白色 */
@property (nonatomic, strong) IBInspectable UIColor *frameColor;
/** 选框的线宽，默认1 */
@property (nonatomic, assign) IBInspectable CGFloat frameLineWidth;

/** 遮罩颜色，默认[UIColor colorWithWhite:0 alpha:0.6] */
@property (nonatomic, strong) IBInspectable UIColor *maskColor;

/**
 完成裁剪
 
 @return 返回裁剪后的图片
 */
- (UIImage *)completeClipImage;

@end
