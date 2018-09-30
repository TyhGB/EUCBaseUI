//
//  EUCFileHeaderView.h
//  EUCIMManager
//
//  Created by Rakuyo on 2017/12/20.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseView.h"
@class EUCFileHeaderView;

NS_ASSUME_NONNULL_BEGIN

@protocol EUCFileHeaderViewDelegate <NSObject>

/**
 选项按钮点击事件

 @param fileHeaderView 视图
 @param itemButton 被点击按钮（可使用 tag 判断）
 */
- (void)fileHeaderView:(EUCFileHeaderView *)fileHeaderView didClickItemButton:(UIButton *)itemButton;

@end

@interface EUCFileHeaderView : EUCBaseView

/**
 初始化方法

 @param frame 尺寸位置
 @param dataArray 数据源。格式要求：枚举类型的key：要显示的文字。 eg:@"1"：@"图片"
 @return FileHeaderView
 */
+ (EUCFileHeaderView *)fileHeaderViewWithFrame:(CGRect)frame
                                     dataArray:(NSArray<NSDictionary<NSString *, NSString *> *> *)dataArray;
/**
 根据 ScrollView 的 contentOffset 的 X 值进行滚动
 请在 ScrollView 的 disScrollView: 方法中调用该方法

 @param contentOffsetX contentOffset.x
 */
- (void)scrollWithContenOffsetX:(NSInteger)contentOffsetX;

@property (nonatomic, weak) id<EUCFileHeaderViewDelegate> delegate;

NS_ASSUME_NONNULL_END

@end
