// Generated by Apple Swift version 4.2.1 effective-3.4.1 (swiftlang-1000.11.40 clang-1000.11.45.1)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import CoreGraphics;
@import EUCSDK;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#import <EUCBaseUI/EUCBaseUI.h>

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="EUCBaseUI",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class EUCDialogItemModel;
@class EUCUserModel;
@class EUCMessageModel;
@class UIView;
@class UICollectionView;
@class UIImageView;
@class UILabel;
@class UITextView;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC9EUCBaseUI32EUCArticleForwardAlertController")
@interface EUCArticleForwardAlertController : EUCBaseController
@property (nonatomic, copy) void (^ _Null_unspecified confirmSendBlock)(void);
@property (nonatomic, copy) void (^ _Null_unspecified cancelSendBlock)(void);
@property (nonatomic, copy) NSArray<EUCDialogItemModel *> * _Nullable dialogModels;
@property (nonatomic, copy) NSArray<EUCUserModel *> * _Nullable userModels;
@property (nonatomic, strong) EUCMessageModel * _Null_unspecified messageModel;
@property (nonatomic, copy) NSArray<EUCMessageModel *> * _Null_unspecified messageModels;
@property (nonatomic, strong) EUCDialogItemModel * _Nullable dialogItemModel;
@property (nonatomic) BOOL isOneByOne;
@property (nonatomic, strong) UIView * _Null_unspecified articleAlertView;
@property (nonatomic, strong) UICollectionView * _Nullable articleImageCollectionView;
@property (nonatomic, strong) UIImageView * _Nullable singleImageView;
@property (nonatomic, strong) UILabel * _Nullable singleNameLabel;
@property (nonatomic, strong) UILabel * _Null_unspecified contentLabel;
@property (nonatomic, strong) UITextView * _Null_unspecified messageTextView;
@property (nonatomic, strong) UILabel * _Null_unspecified messagePlaceLabel;
@property (nonatomic, strong) UILabel * _Null_unspecified fileNameLabel;
@property (nonatomic, strong) UILabel * _Null_unspecified fileSizeLabel;
/// 视图加载完
- (void)viewDidLoad;
/// 调用此方法开启弹窗框(通过会话iD)
- (void)alertWithDialogModels:(NSArray<EUCDialogItemModel *> * _Nonnull)dialogModels cancelSend:(void (^ _Nonnull)(void))cancelSend confirmSend:(void (^ _Nonnull)(void))confirmSend;
/// 调用此方法开启弹窗框(通过用户iD)
- (void)alertWithUserModels:(NSArray<EUCUserModel *> * _Nonnull)userModels cancelSend:(void (^ _Nonnull)(void))cancelSend confirmSend:(void (^ _Nonnull)(void))confirmSend;
/// 取消发送
- (void)cancelSend;
/// 确认发送
- (void)confirmSendArticle;
/// 添加弹框视图
- (void)addArticleSubViews;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UICollectionViewCell;

@interface EUCArticleForwardAlertController (SWIFT_EXTENSION(EUCBaseUI)) <UICollectionViewDataSource, UICollectionViewDelegate>
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end


@interface EUCArticleForwardAlertController (SWIFT_EXTENSION(EUCBaseUI))
- (void)showChatRoom;
- (void)showMapView;
- (void)showImageView;
- (void)showVideoView;
@end


@interface EUCArticleForwardAlertController (SWIFT_EXTENSION(EUCBaseUI)) <UITextViewDelegate>
- (void)textViewDidBeginEditing:(UITextView * _Nonnull)textView;
/// 文字改变时
- (void)textViewDidChange:(UITextView * _Nonnull)textView;
/// 移动到光标处
- (void)textViewDidChangeSelection:(UITextView * _Nonnull)textView;
- (BOOL)textView:(UITextView * _Nonnull)textView shouldChangeTextInRange:(NSRange)range replacementText:(NSString * _Nonnull)text SWIFT_WARN_UNUSED_RESULT;
/// 键盘Frame改变,移动弹框
- (void)keyBoardWillChageWithNotification:(NSNotification * _Nonnull)notification;
@end


@interface EUCArticleForwardAlertController (SWIFT_EXTENSION(EUCBaseUI))
- (UIView * _Nonnull)showContentView SWIFT_WARN_UNUSED_RESULT;
/// 添加消息留言（有些消息类型可以不添加）
- (UIView * _Nonnull)addLeaveMessageViewWithLastView:(UIView * _Nonnull)lastView SWIFT_WARN_UNUSED_RESULT;
/// 添加内容
/// \param contentIsCanClick 是否能点击内容
///
/// \param methon 点击内容走的方法（contentIsCanClick为true，必须传这个）
///
/// \param isAddLeaveMessage 是否添加留言
///
///
/// returns:
/// 返回UIView(分割线, 方便布局)
- (UIView * _Nonnull)addContentView:(BOOL)contentIsCanClick methon:(SEL _Nullable)methon isAddLeaveMessage:(BOOL)isAddLeaveMessage SWIFT_WARN_UNUSED_RESULT;
/// 添加名片内容
- (UIView * _Nonnull)addUserCardContentView SWIFT_WARN_UNUSED_RESULT;
/// 添加文章内容
- (UIView * _Nonnull)addArticleContentView SWIFT_WARN_UNUSED_RESULT;
/// 添加图片内容
- (UIView * _Nonnull)addImageContentView SWIFT_WARN_UNUSED_RESULT;
/// 添加位置内容
- (UIView * _Nonnull)addMapContentView SWIFT_WARN_UNUSED_RESULT;
/// 添加视频内容
- (UIView * _Nonnull)addVideoContentView SWIFT_WARN_UNUSED_RESULT;
/// 添加合并消息
- (UIView * _Nonnull)addMergeContentView SWIFT_WARN_UNUSED_RESULT;
/// 添加文件内容
- (UIView * _Nonnull)addFileContentView SWIFT_WARN_UNUSED_RESULT;
@end

@class UIImage;

SWIFT_CLASS("_TtC9EUCBaseUI21EUCArticleMessageCell")
@interface EUCArticleMessageCell : EUCBaseMessageCell
@property (nonatomic, strong) UIView * _Null_unspecified backView;
@property (nonatomic, strong) UIImage * _Null_unspecified senderMaskImage;
@property (nonatomic, strong) UIImage * _Null_unspecified receiverMaskImage;
@property (nonatomic, strong) UIImage * _Null_unspecified senderMaskHLImage;
@property (nonatomic, strong) UIImage * _Null_unspecified receiverMaskHLImage;
@property (nonatomic, strong) UILabel * _Nonnull articleTitleLabel;
@property (nonatomic, strong) UILabel * _Nonnull articleContentLabel;
@property (nonatomic, strong) UIImageView * _Nonnull articleImageView;
/// 初始化
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
/// 布局视图
- (void)setupBaseConstraints;
@property (nonatomic, strong) EUCMessageModel * _Null_unspecified messageModel;
@property (nonatomic, strong) EUCDialogItemModel * _Null_unspecified dialogItemModel;
@end

@class UIColor;

/// 自定义弹框模型
/// <ul>
///   <li>
///   </li>
/// </ul>
SWIFT_CLASS("_TtC9EUCBaseUI18EUCBaseActionModel")
@interface EUCBaseActionModel : EUCBaseModel
- (nonnull instancetype)init:(NSString * _Nonnull)name color:(UIColor * _Nullable)color action:(void (^ _Nonnull)(void))action OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9EUCBaseUI22EUCBaseActionSheetCell")
@interface EUCBaseActionSheetCell : EUCBaseCell
@property (nonatomic, strong) EUCBaseActionModel * _Null_unspecified actionModel;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9EUCBaseUI32EUCBaseActionSheetViewController")
@interface EUCBaseActionSheetViewController : EUCBaseController
@property (nonatomic, copy) NSArray<EUCBaseActionModel *> * _Null_unspecified actions;
@property (nonatomic, strong) UIColor * _Nullable cancelColor;
- (void)viewDidLoad;
- (void)hiddenView;
- (void)show;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITableView;
@class UITableViewCell;

@interface EUCBaseActionSheetViewController (SWIFT_EXTENSION(EUCBaseUI)) <UITableViewDataSource, UITableViewDelegate>
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nullable)tableView:(UITableView * _Nonnull)tableView viewForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end


/// 名片弹框控制器
/// <ul>
///   <li>
///   </li>
/// </ul>
SWIFT_PROTOCOL("_TtP9EUCBaseUI20EUCCardAlertDelegate_")
@protocol EUCCardAlertDelegate <NSObject>
- (void)cardAlertSendButtonDidClick;
@end


SWIFT_CLASS("_TtC9EUCBaseUI26EUCCardAlertViewController")
@interface EUCCardAlertViewController : UIViewController
@property (nonatomic, readonly) CGFloat cardAlertHeight;
@property (nonatomic, readonly) CGFloat cardAlertWidth;
@property (nonatomic, weak) id <EUCCardAlertDelegate> _Null_unspecified cardAlertDelegate;
@property (nonatomic, strong) EUCDialogItemModel * _Null_unspecified cardReceiverModel;
@property (nonatomic, strong) EUCUserModel * _Null_unspecified cardUserModel;
@property (nonatomic, strong) UIView * _Null_unspecified cardAlertView;
@property (nonatomic, strong) UILabel * _Null_unspecified sendFriendLabel;
@property (nonatomic, strong) UIImageView * _Null_unspecified senderImageView;
@property (nonatomic, strong) UILabel * _Null_unspecified cardUserLabel;
@property (nonatomic, strong) UITextView * _Null_unspecified messageTextView;
@property (nonatomic, strong) UILabel * _Null_unspecified messagePlaceLabel;
- (void)viewDidLoad;
/// 取消按钮点击
- (void)cancelSelecCard;
/// 确认按钮点击
- (void)confirmSendCard;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface EUCCardAlertViewController (SWIFT_EXTENSION(EUCBaseUI)) <UITextViewDelegate>
- (void)textViewDidBeginEditing:(UITextView * _Nonnull)textView;
/// 文字改变时
- (void)textViewDidChange:(UITextView * _Nonnull)textView;
/// 移动到光标处
- (void)textViewDidChangeSelection:(UITextView * _Nonnull)textView;
- (BOOL)textView:(UITextView * _Nonnull)textView shouldChangeTextInRange:(NSRange)range replacementText:(NSString * _Nonnull)text SWIFT_WARN_UNUSED_RESULT;
/// 键盘Frame改变,移动弹框
- (void)keyBoardDidChageWithNotification:(NSNotification * _Nonnull)notification;
@end

@class NSLayoutConstraint;

SWIFT_CLASS("_TtC9EUCBaseUI18EUCCardMessageCell")
@interface EUCCardMessageCell : EUCBaseMessageCell
@property (nonatomic, strong) UIView * _Null_unspecified backView;
@property (nonatomic, strong) UILabel * _Null_unspecified cardLabel;
@property (nonatomic, strong) UIImageView * _Null_unspecified lineView;
@property (nonatomic, strong) UIImageView * _Null_unspecified cardImageView;
@property (nonatomic, strong) UILabel * _Null_unspecified cardNameLabel;
@property (nonatomic, strong) NSLayoutConstraint * _Null_unspecified cardLabelLeft;
@property (nonatomic, strong) NSLayoutConstraint * _Null_unspecified lineViewLeft;
@property (nonatomic, strong) NSLayoutConstraint * _Null_unspecified cardImageLeft;
@property (nonatomic, strong) UIImage * _Null_unspecified senderMaskImage;
@property (nonatomic, strong) UIImage * _Null_unspecified receiverMaskImage;
@property (nonatomic, strong) UIImage * _Null_unspecified senderMaskHLImage;
@property (nonatomic, strong) UIImage * _Null_unspecified receiverMaskHLImage;
@property (nonatomic, strong) EUCDialogItemModel * _Null_unspecified dialogItemModel;
@property (nonatomic, strong) EUCMessageModel * _Null_unspecified messageModel;
/// 初始化
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
/// 布局视图
- (void)setConstraints;
@end

@class UITextField;
@protocol EUCContactInfoControllerDelegate;
@class UITouch;
@class UIEvent;

SWIFT_CLASS("_TtC9EUCBaseUI24EUCContactInfoController")
@interface EUCContactInfoController : UIViewController
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified memoField;
@property (nonatomic, strong) EUCUserModel * _Null_unspecified userModel;
@property (nonatomic, weak) id <EUCContactInfoControllerDelegate> _Null_unspecified delegate;
- (void)viewDidLoad;
- (IBAction)deleteBtnClick:(id _Nonnull)sender;
- (IBAction)fixBtnClick:(id _Nonnull)sender;
- (void)touchesBegan:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_PROTOCOL("_TtP9EUCBaseUI32EUCContactInfoControllerDelegate_")
@protocol EUCContactInfoControllerDelegate
- (void)didSelectedWithInfoVC:(EUCContactInfoController * _Nonnull)infoVC isDelete:(BOOL)isDelete;
@end

@class EUCFileTypeModel;

SWIFT_CLASS("_TtC9EUCBaseUI25EUCFileTypeCollectionCell")
@interface EUCFileTypeCollectionCell : UICollectionViewCell
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified fileIconImageView;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified fileTypeNameLabel;
@property (nonatomic, strong) EUCFileTypeModel * _Null_unspecified cellModel;
- (void)awakeFromNib;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9EUCBaseUI16EUCFileTypeModel")
@interface EUCFileTypeModel : EUCBaseModel
@property (nonatomic, strong) UIImage * _Nullable fileImage;
@property (nonatomic, copy) NSString * _Nonnull fileTypeName;
@property (nonatomic) EUCCloudFileType fileType;
- (nonnull instancetype)initWithFileType:(EUCCloudFileType)fileType fileTypeName:(NSString * _Nonnull)fileTypeName fileImageStr:(NSString * _Nonnull)fileImageStr OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9EUCBaseUI19EUCMergeMessageCell")
@interface EUCMergeMessageCell : EUCBaseMessageCell
@property (nonatomic, strong) UIView * _Null_unspecified backView;
@property (nonatomic, strong) UIImage * _Null_unspecified senderMaskImage;
@property (nonatomic, strong) UIImage * _Null_unspecified receiverMaskImage;
@property (nonatomic, strong) UIImage * _Null_unspecified senderMaskHLImage;
@property (nonatomic, strong) UIImage * _Null_unspecified receiverMaskHLImage;
@property (nonatomic, copy) NSArray<EUCMessageModel *> * _Null_unspecified messageModels;
@property (nonatomic, copy) NSString * _Null_unspecified messageTimeSpan;
@property (nonatomic, strong) EUCMessageModel * _Null_unspecified messageModel;
@property (nonatomic, strong) EUCDialogItemModel * _Null_unspecified dialogItemModel;
/// 初始化
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface EUCMergeMessageCell (SWIFT_EXTENSION(EUCBaseUI)) <UITableViewDataSource, UITableViewDelegate>
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end

@class recentFileModel;
@protocol EUCRecentFileHeadViewDelegate;

SWIFT_CLASS("_TtC9EUCBaseUI21EUCRecentFileHeadView")
@interface EUCRecentFileHeadView : UITableViewHeaderFooterView
@property (nonatomic, strong) recentFileModel * _Null_unspecified model;
@property (nonatomic, weak) id <EUCRecentFileHeadViewDelegate> _Null_unspecified delegate;
@property (nonatomic, strong) UIImageView * _Nonnull arrowImageView;
@property (nonatomic, strong) UILabel * _Nonnull headTitleLabel;
@property (nonatomic, strong) UIView * _Nonnull lineView;
- (nonnull instancetype)initWithReuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)didSelect;
@end




SWIFT_PROTOCOL("_TtP9EUCBaseUI29EUCRecentFileHeadViewDelegate_")
@protocol EUCRecentFileHeadViewDelegate
- (void)didSelectViewWithRecentFileHeadView:(EUCRecentFileHeadView * _Nonnull)recentFileHeadView;
@end

@protocol EUCFileItemCellDelegate;
@class NSMutableArray;
@class EUCInviteBottomView;
@class NSDate;

SWIFT_CLASS("_TtC9EUCBaseUI22EUCRecentFileTableView")
@interface EUCRecentFileTableView : UITableView
@property (nonatomic, copy) NSArray * _Null_unspecified fileModels;
@property (nonatomic, copy) NSArray<recentFileModel *> * _Nonnull timeFileModel;
@property (nonatomic, weak) id <EUCFileItemCellDelegate> _Null_unspecified fileCellDelgate;
@property (nonatomic, weak) NSMutableArray * _Null_unspecified selectArr;
@property (nonatomic, weak) EUCInviteBottomView * _Null_unspecified bottomView;
/// 初始化
- (nonnull instancetype)initWithFrame:(CGRect)frame style:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
/// 数据分类
- (void)sortDataWithDateWithDate:(NSDate * _Nonnull)date model:(id _Nonnull)model;
@end


@interface EUCRecentFileTableView (SWIFT_EXTENSION(EUCBaseUI)) <EUCRecentFileHeadViewDelegate>
- (void)didSelectViewWithRecentFileHeadView:(EUCRecentFileHeadView * _Nonnull)recentFileHeadView;
@end


@interface EUCRecentFileTableView (SWIFT_EXTENSION(EUCBaseUI)) <UITableViewDataSource, UITableViewDelegate>
/// head
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nullable)tableView:(UITableView * _Nonnull)tableView viewForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
/// cell
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end

@class UIButton;
@class UIWindow;
@protocol EUCSelectFileTypeViewDlegate;

SWIFT_CLASS("_TtC9EUCBaseUI21EUCSelectFileTypeView")
@interface EUCSelectFileTypeView : UIView
@property (nonatomic, readonly) CGFloat arrowHeight;
@property (nonatomic, readonly) CGFloat arrowWidth;
@property (nonatomic, readonly) CGFloat cornerRadius;
@property (nonatomic, strong) UIButton * _Null_unspecified pointView;
@property (nonatomic, strong) UIView * _Null_unspecified backView;
@property (nonatomic, readonly, strong) UIWindow * _Nullable keyWindow;
@property (nonatomic, weak) id <EUCSelectFileTypeViewDlegate> _Null_unspecified delegate;
- (nonnull instancetype)initWithFileModels:(NSArray<EUCFileTypeModel *> * _Nonnull)fileModels frame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
/// 根据视图显示视图
- (void)showToViewWithPointView:(UIView * _Nonnull)pointView;
/// 根据给出的点(相对于当前窗口)显示视图
- (void)showToPointWithPoint:(CGPoint)point;
/// 动画隐藏
- (void)hidden;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

@class UICollectionViewLayout;

@interface EUCSelectFileTypeView (SWIFT_EXTENSION(EUCBaseUI)) <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
- (CGSize)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (UIEdgeInsets)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout insetForSectionAtIndex:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout minimumLineSpacingForSectionAtIndex:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout minimumInteritemSpacingForSectionAtIndex:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)collectionView:(UICollectionView * _Nonnull)collectionView didSelectItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end


SWIFT_PROTOCOL("_TtP9EUCBaseUI28EUCSelectFileTypeViewDlegate_")
@protocol EUCSelectFileTypeViewDlegate
- (void)EUCSelectFileItemWithSelectFileTypeView:(EUCSelectFileTypeView * _Nonnull)selectFileTypeView fileTypeCollectionCell:(EUCFileTypeCollectionCell * _Nonnull)fileTypeCollectionCell;
@end


SWIFT_CLASS("_TtC9EUCBaseUI22EUCSubMergeMessageCell")
@interface EUCSubMergeMessageCell : EUCBaseCell
@property (nonatomic, copy) NSString * _Null_unspecified message;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface NSDate (SWIFT_EXTENSION(EUCBaseUI))
- (NSInteger)month SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)year SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isSevenDay SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isThirtyDay SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isLastMonth SWIFT_WARN_UNUSED_RESULT;
@end

@class UIFont;

@interface NSString (SWIFT_EXTENSION(EUCBaseUI))
- (CGSize)widthForStringWithFont:(UIFont * _Nonnull)font height:(CGFloat)height SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)timeStampToString SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)stringToTimeStamp SWIFT_WARN_UNUSED_RESULT;
- (BOOL)downCompareStrWithStr:(NSString * _Nonnull)str SWIFT_WARN_UNUSED_RESULT;
@end


@interface UIColor (SWIFT_EXTENSION(EUCBaseUI))
/// 设置颜色
+ (UIColor * _Nonnull)colorWithRGBWithRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha SWIFT_WARN_UNUSED_RESULT;
/// 设置颜色
- (UIColor * _Nonnull)colorWithRGBWithRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha SWIFT_WARN_UNUSED_RESULT;
@end


@interface UIImage (SWIFT_EXTENSION(EUCBaseUI))
- (UIImage * _Nullable)imageWithDottedLineWithLineSize:(CGSize)lineSize color:(UIColor * _Nonnull)color SWIFT_WARN_UNUSED_RESULT;
@end


@interface UIScrollView (SWIFT_EXTENSION(EUCBaseUI))
/// 适配 iOS 11 automaticallyAdjustsScrollViewInsets属性
- (void)scrollViewAdjustWithTargetVC:(UIViewController * _Nonnull)targetVC;
@end

@class NSObject;

@interface UIView (SWIFT_EXTENSION(EUCBaseUI))
- (CGFloat)maxX SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)maxY SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)X SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)Y SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)Width SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)Height SWIFT_WARN_UNUSED_RESULT;
/// 得到当前UIView所在的控制器
- (NSObject * _Nullable)getCurrentVCWithVCType:(Class _Nonnull)VCType SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC9EUCBaseUI15recentFileModel")
@interface recentFileModel : EUCBaseModel
@property (nonatomic) BOOL isShow;
@property (nonatomic) NSInteger section;
@property (nonatomic, copy) NSArray * _Nonnull fileModels;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
