//
//  EUCLinkLabel.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/5/24.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import <UIKit/UIKit.h>

@class EUCLabelRichTextData;

typedef void (^EUCLabelTapAction)(EUCLabelRichTextData *data);

typedef void (^EUCLabelLongPressAction)(EUCLabelRichTextData *data, UIGestureRecognizerState state);


typedef NS_ENUM(NSInteger, EUCLabelRichTextType) {
    EUCLabelRichTextTypeURL = 0,
    EUCLabelRichTextTypePhoneNumber,
    EUCLabelRichTextTypeAt
};

@class EUCLinkLabel;

@interface EUCLabelRichTextData : NSObject

@property (nonatomic) NSRange range;

@property (nonatomic) EUCLabelRichTextType type;

@property (nonatomic) NSURL *url;

@property (nonatomic) NSString *atStr;

@property (nonatomic, copy) NSString *phoneNumber;

- (instancetype)initWithType:(EUCLabelRichTextType)type;

@end


@interface EUCLinkLabel : UITextView

@property (nonatomic) CGFloat longPressDuration;

@property (nonatomic, copy) EUCLabelTapAction tapAction;

@property (nonatomic, copy) EUCLabelLongPressAction longPressAction;

// 只需要ID集合，来对at的成员进行富文本的添加
@property (nonatomic, strong) NSArray *groupNames;

- (BOOL)shouldReceiveTouchAtPoint:(CGPoint)point;

- (void)swallowTouch;

- (void)clearLinkBackground;

// 目前这里的groupModels为ID集合
// 根据消息，转化为处理at，表情，URL，号码富文本的串
+ (NSMutableAttributedString *)createAttributedStringWithEmotionString:(NSString *)emotionString
                                                                  font:(UIFont *)font
                                                           lineSpacing:(NSInteger)lineSpacing
                                                                isFrom:(BOOL)isFrom
                                                            isAtString:(BOOL)isAtString
                                                           groupModels:(NSArray *)groupModels
                                                              senderID:(NSString *)senderID
                                                         dialog_userID:(NSString *)dialog_userID;

// 获取字符串里at成员的id集合
+ (NSDictionary *)memberIDsWithString:(NSString *)messageString groupModels:(NSArray <EUCUserModel *>*)groupModels;

// 将at+id转为at+成员名
+ (NSString *)convertFullNameStringWithOriginString:(NSString *)originString groupModels:(NSArray *)groupModels;

@end
