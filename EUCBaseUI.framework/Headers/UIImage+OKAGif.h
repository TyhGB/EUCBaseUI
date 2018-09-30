//
//  UIImage+OKAGif.h
//  CategoryManager
//
//  Created by  ZhuHong on 2017/2/22.
//  Copyright © 2017年 OKA_APP. All rights reserved.
//

/**
 * 如果使用了 SDWebImage 那就直接用 UIImage+GIF.h .
 */

#import <UIKit/UIKit.h>

@interface UIImage (OKAGif)

+ (UIImage *)oka_animatedGIFWithData:(NSData *)data ;

+ (UIImage *)oka_animatedGIFWithURL:(NSURL *)url ;

@end
