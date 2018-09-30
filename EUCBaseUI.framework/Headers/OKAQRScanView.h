//
//  OKAQRScanView.h
//  CommonToolsManager
//
//  Created by  ZhuHong on 2017/10/14.
//  Copyright © 2017年 EasyMoveMobile. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, OKAQRScanRangeType) {
    OKAQRScanRangeTypeFrameIn,  //扫描框内侧
    OKAQRScanRangeTypeFrameOut,//扫描框外侧
};


@interface OKAQRScanView : UIView


/**
 扫描区域的大小 (默认是width与height最小的一半)
 */
@property (nonatomic, assign) CGFloat qrScanSize;


// 可选设置属性
@property (nonatomic, strong) CALayer* previewLayer;

/**
 扫描框周边区域透明度（可调整扫描框与周边区域的亮度对比度）
 */
@property (assign, nonatomic) CGFloat alphaOfScanArea;

/**
 扫描框下方文字
 */
@property (copy, nonatomic) NSString *scanTitle;

@property (assign, nonatomic) CGFloat scanTitleFontSize;

/**
 扫描条颜色
 */
@property (strong, nonatomic) UIColor *scanBarColor;

/**
 拐角处线条宽度
 */
@property (assign, nonatomic) CGFloat cornerLineWidth;

/**
 拐角处线条长度
 */
@property (assign, nonatomic) CGFloat cornerLineLength;
@property (strong, nonatomic) UIColor *cornerLineColor;

/**
 四周线条宽度
 */
@property (assign, nonatomic) CGFloat frameLineWidth;
@property (strong, nonatomic) UIColor *frameLineColor;

/**
 顶部所占的比例
 范围 : 0 ~ 1.0
 默认是 1.0
 */
@property (nonatomic, assign) CGFloat topScale;

/* 设置扫描框范围类型，扫描框外侧或者内侧 */
@property (nonatomic, assign) OKAQRScanRangeType scanRangeType;

/**
 是否授权扫描
 */
@property (nonatomic, assign, getter=isAuthorizationScan) BOOL authorizationScan;

- (void)startScanBarAnimation;
- (void)stopScanBarAnimation;

@end
