//
//  OKAVideoController.h
//  OKAPhotosDemo
//
//  Created by XXL on 2017/9/5.
//  Copyright © 2017年 EasyMoveMobile. All rights reserved.
//

#import <UIKit/UIKit.h>
@class OKAPhotoModel, OKAVideoController;
@protocol OKAVideoControllerDelegate <NSObject>

- (BOOL)videoController:(OKAVideoController *)video willSelectPhotoModel:(OKAPhotoModel *)photoModel;
- (void)videoController:(OKAVideoController *)videoVC didSelectPhotoModel:(OKAPhotoModel *)photoModel;

@end

@interface OKAVideoController : UIViewController

@property (nonatomic, strong) OKAPhotoModel *model;
@property (nonatomic, weak) id <OKAVideoControllerDelegate> delegate;

@end
