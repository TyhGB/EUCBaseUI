//
//  OKAQRScanController.h
//  CommonToolsManager
//
//  Created by  ZhuHong on 2017/10/14.
//  Copyright © 2017年 EasyMoveMobile. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, QRScanBackType) {
    QRScanBackTypeSuccess, // 成功
    QRScanBackTypeFailure, // 失败
    QRScanBackTypeCameraNotUse, // 相机不可用
    QRScanBackTypeDenied, // 被拒绝过
};

@interface OKAQRScanController : UIViewController


/**
 事件回调
 */
@property (nonatomic, copy) void (^qrScanBackBlock)(OKAQRScanController* vc, QRScanBackType type, NSString* info);


/**
 扫描区域的大小 (默认是220.0*220.0)
 */
@property (nonatomic, assign) CGFloat qrScanSize;



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

@end
