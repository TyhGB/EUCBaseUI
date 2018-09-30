//
//  OKAAlbumController.h
//  OKAPhotosDemo
//
//  Created by XXL on 2017/9/5.
//  Copyright © 2017年 EasyMoveMobile. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, OKAFetchMediaType) {
    OKAFetchMediaTypeAll = 0,
    OKAFetchMediaTypeImage   = 1,
    OKAFetchMediaTypeVideo   = 2,
    OKAFetchMediaTypeAudio   = 3,
};

@class OKAAlbumController;
@class OKAAlbumModel;
@class OKAPhotoController;

// 相册代理
@protocol OKAAlbumControllerDelegate <NSObject>

// 提供这个代理的目的在于可能 OKAPhotoController 可能需要创建子类
@required
- (OKAPhotoController *)photoControllerForAlbumController;

@end

@interface OKAAlbumController : UIViewController

@property (nonatomic, weak) id<OKAAlbumControllerDelegate> delegate;

@property (nonatomic, assign) OKAFetchMediaType fetchMediaType;

@end
