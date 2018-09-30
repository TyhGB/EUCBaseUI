//
//  OKAPhotosProtocol.h
//  OKAPhotosDemo
//
//  Created by XXL on 2017/9/5.
//  Copyright © 2017年 EasyMoveMobile. All rights reserved.
//

#import <Foundation/Foundation.h>

@class OKAPhotoModel;

typedef NS_ENUM(NSUInteger, OKAPhotosProtocolTipType) {
    OKAPhotosProtocolTipTypeMoreThanMaximumLimit,/** 选择图片的数量大于最大限制数 */
    OKAPhotosProtocolTipTypeLessThanMinimumLimit,/** 选择图片的数量小于最小限制数 */
    OKAPhotosProtocolTipTypeImageAndVideoSimultaneously,/** 同时选择图片和视频 */
    OKAPhotosProtocolTipTypeMoreThanOneVideo,/** 选择超过一个视频 */
    
};

@protocol OKAPhotosProtocol <NSObject>

@optional

/** 选择图片的一些警告 */
- (void)photosProtocol:(id)photosProtocol selectPhotosTipWithTipType:(OKAPhotosProtocolTipType)tipType;

/** 将要选择图片,返回值决定执行不执行didSelectPhotoAtIndex */
- (BOOL)photosProtocol:(id)photosProtocol willSelectPhotoAtIndex:(NSInteger)index photoModel:(OKAPhotoModel *)photoModel;

/** 选择图片 */
- (void)photosProtocol:(id)photosProtocol didSelectPhotoAtIndex:(NSInteger)index photoModel:(OKAPhotoModel *)photoModel;

/** 将要选择图片,返回值决定执行不执行didSelectPhotoAtIndex （不需要index）*/
- (BOOL)photosProtocol:(id)photosProtocol willSelectPhotoModel:(OKAPhotoModel *)photoModel;

/** 选择图片（不需要index）*/
- (void)photosProtocol:(id)photosProtocol didSelectPhotoModel:(OKAPhotoModel *)photoModel;

/** 取消选择图片 */
- (void)photosProtocol:(id)photosProtocol didDeselectPhotoAtIndex:(NSInteger)index photoModel:(OKAPhotoModel *)photoModel;

/** 在选择完图片的情况下选择完成 */
- (void)photosProtocol:(id)photosProtocol selectDonePhotoWithPhotoModels:(NSArray <OKAPhotoModel *>*)photoModels;

@end
