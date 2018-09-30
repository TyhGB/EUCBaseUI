//
//  UIViewController+OKAAlert.h
//  CommonToolsManager
//
//  Created by  ZhuHong on 2017/11/3.
//  Copyright © 2017年 EasyMoveMobile. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (OKAAlert)


- (void)alertWithMessage:(NSString*)message
                 noTitle:(NSString*)noTitle
                yesTitle:(NSString*)yesTitle
           cancelHandler:(void (^)(UIAlertAction *action))cancelHandler
               okHandler:(void (^)(UIAlertAction *action))okHandler;

- (void)alertWithTitle:(NSString*)title
               message:(NSString*)message
               noTitle:(NSString*)noTitle
              yesTitle:(NSString*)yesTitle
         cancelHandler:(void (^)(UIAlertAction *action))cancelHandler
             okHandler:(void (^)(UIAlertAction *action))okHandler;


/*创建一个弹框
 *title - 标题
 *message - 信息
 *cancelTitle - 取消按钮标题
 *okTitle - 确定按钮标题
 *cancelHandler - 取消按钮点击事件，nil则不做任何处理
 *okHandler - 确定按钮点击事件，nil则不做任何处理
 */
- (void)alertWithTitle:(NSString*)title
               message:(NSString*)message
           cancelTitle:(NSString*)cancelTitle
               okTitle:(NSString*)okTitle
         cancelHandler:(void (^)(id object))cancelHandler
             okHandler:(void (^)(id object))okHandler;



/*创建一个弹框
 *title - 标题
 *titleColor - 标题颜色，nil则使用默认颜色
 *message - 信息
 *messageColor - 信息颜色，nil则使用默认颜色
 *textAlignment - 信息对齐方式，传递负数值则使用默认对齐方式
 *cancelTitle - 取消按钮标题
 *cancelColor - 取消按钮颜色，nil则使用默认颜色
 *okTitle - 确定按钮标题
 *okColor - 确定按钮颜色，nil则使用默认颜色
 *cancelHandler - 取消按钮点击事件，nil则不做任何处理
 *okHandler - 确定按钮点击事件，nil则不做任何处理
 */
- (void)alertWithTitle:(NSString*)title
            titleColor:(UIColor *)titleColor
               message:(NSString*)message
          messageColor:(UIColor *)messageColor
         textAlignment:(NSTextAlignment)textAlignment
           cancelTitle:(NSString*)cancelTitle
           cancelColor:(UIColor *)cancelColor
               okTitle:(NSString*)okTitle
               okColor:(UIColor *)okColor
         cancelHandler:(void (^)(id object))cancelHandler
             okHandler:(void (^)(id object))okHandler;


/*创建一个弹框
 *title - 标题
 *titleColor - 标题颜色，nil则使用默认颜色
 *titleFont - 标题字体，nil则使用默认字体
 
 *message - 信息
 *messageColor - 信息颜色，nil则使用默认颜色
 *messageFont - 信息字体，nil则使用默认字体
 *textAlignment - 信息对齐方式，传递负数值则使用默认对齐方式
 
 *cancelTitle - 取消按钮标题
 *cancelColor - 取消按钮颜色，nil则使用默认颜色
 
 *okTitle - 确定按钮标题
 *okColor - 确定按钮颜色，nil则使用默认颜色
 *buttonFont - 按钮字体大小，nil则使用默认字体
 
 *cancelHandler - 取消按钮点击事件，nil则不做任何处理
 *okHandler - 确定按钮点击事件，nil则不做任何处理
 */
- (void)alertWithTitle:(NSString*)title
            titleColor:(UIColor *)titleColor
             titleFont:(UIFont *)titleFont
               message:(NSString*)message
          messageColor:(UIColor *)messageColor
           messageFont:(UIFont *)messageFont
         textAlignment:(NSTextAlignment)textAlignment
           cancelTitle:(NSString*)cancelTitle
           cancelColor:(UIColor *)cancelColor
               okTitle:(NSString*)okTitle
               okColor:(UIColor *)okColor
            buttonFont:(UIFont *)buttoFont
         cancelHandler:(void (^)(id object))cancelHandler
             okHandler:(void (^)(id object))okHandler;

@end
