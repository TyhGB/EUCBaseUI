//
//  UICollectionView+EUC.h
//  EUCIMManager
//
//  Created by Tuling Code on 2016/12/29.
//  Copyright © 2016年 BBDTEK. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UICollectionView (EUC)

+ (instancetype)xlCollectionView:(void (^)(UICollectionViewFlowLayout *layout))backBlock;

@end
