//
//  OKABrowserCell.h
//  OKAPhotosDemo
//
//  Created by XXL on 2017/9/5.
//  Copyright © 2017年 EasyMoveMobile. All rights reserved.
//

#import <UIKit/UIKit.h>

@class OKAPhotoModel;

typedef NS_ENUM(NSUInteger, OKABrowserCellType) {
    
    OKABrowserCellTypeDisplay,
    OKABrowserCellTypeSelectable,
};

@interface OKABrowserCell : UICollectionViewCell

@property (nonatomic, assign) OKABrowserCellType type;

@property (nonatomic, strong) OKAPhotoModel *model;

@property (nonatomic, assign) CGFloat zoomScale;

@end
