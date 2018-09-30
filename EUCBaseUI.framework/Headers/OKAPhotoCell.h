//
//  OKAPhotoCell.h
//  OKAPhotosDemo
//
//  Created by XXL on 2017/9/5.
//  Copyright © 2017年 EasyMoveMobile. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OKAPhotosProtocol.h"

@protocol OKAPhotosCellDelegate <OKAPhotosProtocol>

@end

@interface OKAPhotosCell : UICollectionViewCell

@property (nonatomic, strong) OKAPhotoModel* photoModel;

@property (nonatomic, weak) id<OKAPhotosCellDelegate> delegate;

/**
 选中图标的颜色
 */
@property (nonatomic, strong) UIColor* selecteColor;

@end

