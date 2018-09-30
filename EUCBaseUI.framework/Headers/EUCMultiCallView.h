//
//  EUCMultiCallView.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/6/6.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//  多人语音页面

#import <UIKit/UIKit.h>
#import "EUCRTCCallView.h"
#import "EUCAVModel.h"

typedef void (^clickBlock)(EUCRTCCallViewClickType clickType);

@interface EUCMultiCallView : UIView

#pragma mark - properties
/** 连接信息，如等待对方接听...、对方已拒绝、语音通话、视频通话 */
@property (copy, nonatomic) NSString *connectText;
/** 是否已接听 */
@property (assign, nonatomic)   BOOL answered;

@property (nonatomic, strong) UICollectionView *collectionView;
// 接收方显示的头像，昵称信息
@property (nonatomic, strong) EUCAVModel *callerModel;

/** 在拨打时就要显示 */
@property (nonatomic, strong) NSMutableArray *audioArray;
/** 提示语数组 */
@property (nonatomic, strong) NSMutableArray *tipsArray;
@property (nonatomic, copy) clickBlock clickBlock;

@property (nonatomic, assign) BOOL isJoinMeeting;

#pragma mark - method
- (instancetype)initWithIsCallee:(BOOL)isCallee;

- (void)showInView:(UIView *)view;

- (void)dismiss:(void (^)(void))completion;

// 在 CallKit 中接听时，修改 UI。
- (void)configUIWhenAnswerClick;

// 设置静音按钮的选中状态，对外暴露给 CallKit
- (void)selectMuteButton:(BOOL)isSelected;

@end
