//
//  EUCRTCCallView.h
//  EUCIMManager
//
//  Created by Tuling Code on 2017/1/11.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EUCAVModel.h"
@class EUCRTCCallView;

typedef NS_ENUM(NSInteger, EUCRTCCallViewClickType) {
    EUCRTCCallViewClickTypeAccept = 1000,    //接听
    EUCRTCCallViewClickTypeReject,           //拒绝
    EUCRTCCallViewClickTypeHangup,           //挂断
    EUCRTCCallViewClickTypeCloseAudio,       //静音
    EUCRTCCallViewClickTypeOpenAudio,        //打开声音
    EUCRTCCallViewClickTypeInvite,           //邀请
    EUCRTCCallViewClickTypePackUp,           //收起
    EUCRTCCallViewClickTypeDeploy            //展开
};

typedef void (^clickBlock)(EUCRTCCallViewClickType clickType);

@interface EUCRTCCallView : UIView

#pragma mark - properties
/** 连接信息，如等待对方接听...、对方已拒绝、语音通话、视频通话 */
@property (copy, nonatomic) NSString            *connectText;
/** 是否已接听 */
@property (assign, nonatomic)   BOOL            answered;

@property (nonatomic, copy) clickBlock clickBlock;

/** 用于显示语音聊天对方信息 */
@property (nonatomic, strong)  EUCAVModel* otherModel;

#pragma mark - method
- (instancetype)initWithIsCallee:(BOOL)isCallee;

- (void)showInView:(UIView *)view;

- (void)dismiss:(void (^)(void))completion;

// 在 CallKit 中接听时，修改 UI。
- (void)configUIWhenAnswerClick;

// 设置静音按钮的选中状态，对外暴露给 CallKit
- (void)selectMuteButton:(BOOL)isSelected;

@end
