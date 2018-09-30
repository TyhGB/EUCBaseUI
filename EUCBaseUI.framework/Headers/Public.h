//
//  Public.h
//  EUCSDK_Demo
//
//  Created by 肖乐 on 2018/3/5.
//  Copyright © 2018年 IMMoveMobile. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OKACommon.h"
#import "EUCRTCCallController.h"
#import <EUCSDK/EUCRTCAudioSession.h>
#import "EUCDialogController.h"
#import <EUCSDK/EUCRTCVideoSession.h>
#import <EUCSDK/EUCMCUVideoSession.h>

#import "EUCRTCVideoController.h"

NS_ASSUME_NONNULL_BEGIN

#define EUCQRCodeUserIDURLTip @"http://u.we-meeting.com/app/introduction.html?wid="

// 快速创建字符串的宏定义
#define EUCStr(...) [NSString stringWithFormat:__VA_ARGS__]
#define EUCFont(size) [UIFont systemFontOfSize:(size)]
#define EUCBFont(size) [UIFont boldSystemFontOfSize:(size)]
#define EUCCGM(X, Y, W, H) CGRectMake((X), (Y), (W), (H))

/** 通知宏 */
#define OKANotificationCenter [NSNotificationCenter defaultCenter]
#define OKAUserDefaults [NSUserDefaults standardUserDefaults]

// 屏幕尺寸
#define UI_SCREEN_WIDTH      ([[UIScreen mainScreen] bounds].size.width)
#define UI_SCREEN_HEIGHT     ([[UIScreen mainScreen] bounds].size.height)
#define UI_STATUS_BAR_WIDTH  ([[UIApplication sharedApplication] statusBarFrame].size.width)
#define UI_STATUS_BAR_HEIGHT ([[UIApplication sharedApplication] statusBarFrame].size.height)

// 版本
#define IOS10_ONLY ([[UIDevice currentDevice].systemVersion doubleValue] >= 10.0 && [[UIDevice currentDevice].systemVersion doubleValue] < 11.0)
#define IOS8 ([[UIDevice currentDevice].systemVersion doubleValue] >= 8.0 && [[UIDevice currentDevice].systemVersion doubleValue] < 9.0)
#define IOS8_10 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0 && [[UIDevice currentDevice].systemVersion doubleValue] < 10.0)
//#define IOS10 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 10.0)
#define IOS9 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 9.0)
#define IOS11 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 11.0)
#define iOSSystemVersion(SV) ([[[UIDevice currentDevice] systemVersion] floatValue] >= (SV))
#define IOS8_2 @available(iOS 8.2, *)
// 颜色
#define RGBA(R, G, B, A) [UIColor colorWithRed:(R)/255.0f green:(G)/255.0f blue:(B)/255.0f alpha:(A)]
#define RGB(R, G, B) RGBA(R, G, B, 1.0)
// 全局色
// 27 165 237
#define EUCGlobalColor RGB(37, 37, 67)


#define IS_IPHONE_X ([[UIScreen mainScreen] bounds].size.width == 375.0f && [[UIScreen mainScreen] bounds].size.height == 812.0f)
#define IS_IPHONE_SE ([[UIScreen mainScreen] bounds].size.width == 320.0f && [[UIScreen mainScreen] bounds].size.height == 568.0f)
#define IS_IPHONE_6S ([[UIScreen mainScreen] bounds].size.width == 375.0f && [[UIScreen mainScreen] bounds].size.height == 667.0f)
#define IS_IPHONE_6S_PLUS ([[UIScreen mainScreen] bounds].size.width == 414.0f && [[UIScreen mainScreen] bounds].size.height == 736.0f)
#define IS_IPHONE_XS_Max ([[UIScreen mainScreen] bounds].size.width == 414.0f && [[UIScreen mainScreen] bounds].size.height == 896.0f)
/** 最短录音时长 */
#define EUCMin_Record_Time  1.0f

// 会话类型
typedef NS_ENUM(NSInteger, EUCDialogEnterType) {
    EUCDialogEnterTypeVedio, // 视频
    EUCDialogEnterTypeVoice, // 语音
    EUCDialogEnterTypeMSG,   // 消息
};

// 随机色
#define RandomColor RGB(arc4random()%255, arc4random()%255, arc4random()%255)

/** 语音,说明有人加入进来了 */
UIKIT_EXTERN NSString *const EUCJoinAudioNotification;
/** 音视频开始计时 */
UIKIT_EXTERN NSString *const EUCStartCountNotification;
/** token过期 */
UIKIT_EXTERN NSString *const EUCOutTokenNotificaiton;
/** 收到avinfo信令 */
UIKIT_EXTERN NSString *const EUCReceiveAVInfoNotification;
/** 收到消息通知房间 */
UIKIT_EXTERN NSString *const EUCReceiveMsgNotification;
/** 收到系统消息通知房间 */
UIKIT_EXTERN NSString *const EUCReceiveNtfMsgNotification;
/** 收到已读回执通知房间 */
UIKIT_EXTERN NSString *const EUCReceiveReadNotification;
/** 转发前通知房间 */
UIKIT_EXTERN NSString *const EUCBeforeForwardNotification;
/** 撤回消息通知 */
UIKIT_EXTERN NSString *const EUCRecallMessageNotification;
/** 已经在当前房间被@,刷新dialogVC view */
UIKIT_EXTERN NSString *const EUCDialogDeleteAtNotification;
/** 消息同步完成 */
UIKIT_EXTERN NSString *const EUCMsgSyncSuccessNotification;

/** 存储登陆时密码的key 用于更换手机时的本地密码验证 */
UIKIT_EXTERN NSString *const EUCLoginPasswordKey;
/** 存储获取token的时间 的key*/
UIKIT_EXTERN NSString *const EUCSaveTokenTimeKey;
/** 存储获取PaasToken的时间 的key*/
UIKIT_EXTERN NSString *const EUCSavePaasTokenTimeKey;
/** 进入个人详情请求出最新数据通知 */
UIKIT_EXTERN NSString *const EUCNewPersonInfoNotification;
/** 刷新新的好友界面 */
UIKIT_EXTERN NSString *const EUCUpdateNewContactNotification;
/** 未读数获取成功 */
UIKIT_EXTERN NSString* const EUCUnreadFriendInfoUpdateNotification;
/** 生成一条未上传的文件消息通知 */
UIKIT_EXTERN NSString *const EUCSendNotUploadFileMessageNotification;
/** 转发消息通知 */
UIKIT_EXTERN NSString *const EUCForwardingMessageNotification;
/** 视频消息中间字符串*/
UIKIT_EXTERN NSString *const EUCVideoMessageMiddleString_IOS;
//图片加载完成通知
UIKIT_EXTERN NSString *const EUCReceiveImageCompletedNotification;

UIKIT_EXTERN CGFloat EUCKeyboardHeight;
UIKIT_EXTERN CGFloat EUCNavigationHeight;
/** iphoneX导航高度(包括状态栏高度，主要是状态栏高度变为44) */
UIKIT_EXTERN CGFloat EUCPhoneXNavigationHeight;
@interface Public : OKACommon

//+ (NSString *)user_id;

/**
 监测网络及socket链接

 @return 链接是否正常
 */
+ (BOOL)checkNetworkContectandSocket;

// 打印日志
#ifdef DEBUG
#   define DLog(fmt, ...) {NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);}
#   define ELog(err) {if(err) DLog(@"%@", err)}
#else
#   define DLog(...)
#   define ELog(err)
#endif

/** 全局提示框 */
+ (void)globalTipsVC:(UIViewController *)vc tips:(NSString *)tips;

/** 临时语音通话UI显示 */
+ (void)showSDKUI:(EUCRTCAudioSession *)audioSession rtcVC:(EUCRTCCallController *)rtcVC delegateVC:(EUCDialogController *)dialogVC isJoin:(BOOL)isJoin;

+ (void)updateSDKUIWithSignalingMessage:(EUCSignalingMessage *)signalingMessage audioSession:(EUCRTCAudioSession *)audioSession rtcVC:(EUCRTCCallController *)rtcVC;

/** 视频通话显示*/
+ (void)showVideoSDKUI:(EUCRTCVideoSession *)vdieoSeesion rtcVC:(EUCRTCVideoController *)rtcVC delegateVC:(EUCDialogController *)dialogVC isJoin:(BOOL)isJoin;
+ (void)updateVideoSDKUIWithSignalingMessage:(EUCSignalingMessage *)signalingMessage videoSession:(EUCRTCVideoSession *)audioSession rtcVC:(EUCRTCVideoController *)rtcVC;

/** MCU视频通话显示*/
+ (void)showMCUVideoSDKUI:(EUCMCUVideoSession *)vdieoSeesion rtcVC:(EUCRTCVideoController *)rtcVC delegateVC:(EUCDialogController *)dialogVC isJoin:(BOOL)isJoin;
+ (void)updateMCUVideoSDKUIWithSignalingMessage:(EUCSignalingMessage *)signalingMessage videoSession:(EUCMCUVideoSession *)audioSession rtcVC:(EUCRTCVideoController *)rtcVC;

/** 显示加载框 */
+ (void)showLoadingView;

/** 隐藏加载框 */
+ (void)hideLoadingView;

// 保存用户信息
+ (BOOL)saveUserModel:(EUCUserModel*)userMode;


/**
 提示用户app需要相册权限
 */
+ (void)alertAuthority;

/**
 匹配老版本数据

 @return bool
 */
+ (BOOL)oldVersionDataMoveToNew;

/**
 deviceToken
 */
+ (NSString*)deviceToken;


/** 退出登录 单点登录需要传 msg  */
+ (void)logoutWithMsg:(NSString*)msg;

//存储登陆时的密码
+ (void)saveLoginPassword:(NSString *)password;


/**
 保存该用户是否获取过通讯录
 */
+ (void)setYesForHadEverFetchABWithUserID:(NSString*)userID;

/**
 通过用户ID获取是否第一次访问保存通讯录
 */
+ (BOOL)hadEverFetchABWithUserID:(NSString*)userID;


/**
 是否开启的指纹开关
 */
+ (BOOL)isOpenFingerprintSwitch;

/**
 是否开启的手势开关
 */
+ (BOOL)isOPenGestureSwitch;

/**
 手势密码是否可见
 */
+ (BOOL)isGestureSwitchVisible;

/**
 是否因验证失败导致退出
 */
+ (BOOL)isLogOutByVerifyFailed;

/**
 用户是否手动关闭/删除了系统指纹
 */
+ (BOOL)isUserTurnOffSystemFingerprint;

/**
 用户是否跳转到了设置
 */
+ (BOOL)isjumpToSettings;

/**
 返回用户设置的手势密码
 */
+ (NSString *)gesturePwd;


#pragma -mark 关于token过期时间的方法
/**
 存储获取到token的时间
 */
+ (void)saveGetTokenTime;

/**
 存储获取到PaasToken的时间
 */
+ (void)saveGetPaasTokenTime;


/**
 获得距离存储token的时间到现在的时间的秒数

 @return 返回相差的秒数
 */
+ (NSTimeInterval)getTimeFromTokenToPresent;

/**
 获得距离存储PaasToken的时间到现在的时间的秒数

 @return 返回相差的秒数
 */
+ (NSTimeInterval)getTimeFromPaasTokenToPresent;

/**
 查看是否过期 超过7天就过期

 @param time 传入的时间
 @return yes 过期
        no 没有过期
 */
+ (BOOL)isTimeOut:(NSTimeInterval)time;



@end

NS_ASSUME_NONNULL_END
