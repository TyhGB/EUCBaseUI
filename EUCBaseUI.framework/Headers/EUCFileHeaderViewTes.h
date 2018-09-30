//
//  EUCFileHeaderView.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/4/12.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseView.h"
#import <EUCSDK/EUCFileItemModel.h>
//typedef NS_ENUM(NSInteger, EUCFileHeaderViewType) {
//    EUCFileHeaderViewTypePict = 0,       //图片
//    EUCFileHeaderViewTypeDocument,       //文档
//    EUCFileHeaderViewTypeVideo,          //视频
//    EUCFileHeaderViewTypeMusic,          //音乐
//    EUCFileHeaderViewTypeOther           //其他
//};

@class EUCFileHeaderViewTes;
@protocol EUCFileHeaderViewTesDelegate <NSObject>

@optional
- (void)fileHeaderView:(EUCFileHeaderViewTes *)fileView didSelectedWithFileType:(EUCFileHeaderViewType)fileType;

@end

@interface EUCFileHeaderViewTes : EUCBaseView

@property (nonatomic, assign) CGFloat leftMargin;
@property (nonatomic, assign) EUCFileHeaderViewType fileType;
@property (nonatomic, weak) id <EUCFileHeaderViewTesDelegate> delegate;

@end
