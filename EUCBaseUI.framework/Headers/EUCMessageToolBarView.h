//
//  EUCMessageToolBarView.h
//  EUCIMManager
//
//  Created by ShaoShanPeng on 2016/12/27.
//  Copyright © 2016年 BBDTEK. All rights reserved.
//

#import "EUCBaseView.h"
#import <EUCSDK/EUCDialogModel.h>
#import "EUCInputTextView.h"
#import <BQMM/MMEmoji.h>
#import <BQMM/MMEmotionCentre.h>

@class MMEmojim, EUCReceivedMessageModel;

@protocol EUCMessageToolBarViewDelegate <NSObject>

- (void)showToolBox:(UIButton *)toolBtn;

- (void)showEmoji:(UIButton *)emojiBtn;

//切换语音/文字输入
- (void)showVoice:(UIButton *)toolBtn;

- (void)textViewFrameDidChange:(CGFloat)changedHeight;
- (void)inputTextViewShouldBeginEditing:(EUCInputTextView *)textView;

- (void)voiceRecordingShouldStart;
- (void)voiceRecordingTooShort;
- (void)voiceRecordingShouldFinish;
- (void)voiceRecordingShouldCancel;
- (void)voiceRecordingDidDragoutside;
- (void)voiceRecordingDidDragEnterside;

- (void)sendText:(NSString *)text RetrySend:(BOOL)isRetry emjoyDic:(NSDictionary *)mmExt
isAllSpace:(BOOL)isAllSpace;

- (void)showAtPeople;

//Integrate BQMM
/*!
 the delegate method handles the click of `return` key in keyboard
 
 @param inputView    UITextView
 */
- (void)didTouchKeyboardReturnKey:(UITextView *)inputView;

/*!
 the delegate method handles the click of emoji button
 
 @param sender  emoji button
 */
- (void)didTouchEmojiButton:(UIButton *)sender;

/**
 *  the delegate method handles send big emoji message
 *
 *  @param emoji MMemoji object
 */
- (void)didSendMMFace:(MMEmoji *)emoji;

@end

@interface EUCMessageToolBarView : EUCBaseView <MMEmotionCentreDelegate>


@property (nonatomic, weak) id<EUCMessageToolBarViewDelegate>   delegate;

@property (nonatomic, strong) EUCDialogItemModel*   itemModel;

@property (weak, nonatomic) IBOutlet UIButton *emojiBtn;
@property (weak, nonatomic) IBOutlet EUCInputTextView *inputTextView;
@property (weak, nonatomic) IBOutlet UILabel *inputPlaceHolder;
@property (weak, nonatomic) IBOutlet UIButton *moreBtn;

@property (nonatomic, strong) NSMutableArray *atLists;


//当为语音模式的时候，在inputView成为第一响应者之后，让其变为输入模式
- (void)convertToInput;

- (void)cleanInput;

- (void)textViewChanged;

@end

