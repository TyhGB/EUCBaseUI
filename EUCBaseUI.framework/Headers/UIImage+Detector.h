//
//  UIImage+Detector.h
//  CommonToolsManager
//
//  Created by  ZhuHong on 2017/10/14.
//  Copyright © 2017年 EasyMoveMobile. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Detector)

/**
 返回一张图片的二维码数据
 
 @return 二维码数据 返回nil.表示费二维码数据
 */
- (NSString*)contentQR;

@end
