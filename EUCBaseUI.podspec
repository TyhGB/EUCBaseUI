#
#  Be sure to run `pod spec lint EUCBaseUI.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|

  # ―――  Spec Metadata  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  These will help people to find your library, and whilst it
  #  can feel like a chore to fill in it's definitely to your advantage. The
  #  summary should be tweet-length, and the description more in depth.
  #

  s.name         = "EUCBaseUI"
  s.version      = "1.0.0"
  s.summary      = "EUCBaseUI."
  s.description  = <<-DESC
            EUCBaseUI.
                   DESC

  s.homepage     = "https://github.com/TyhGB/EUCBaseUI"
  s.license      = "MIT"
  s.author       = { "TYH" => "562080971@qq.com" }

  s.platform     = :ios, "8.0"
  s.source       = { :git => "https://github.com/TyhGB/EUCBaseUI.git", :tag => s.version }
   s.resources = "EUCBaseUIBundle.bundle"
#s.frameworks = "EUCBaseUI.framework", "EUCSDK.framework"
s.vendored_frameworks = 'EUCSDK.framework', 'EUCBaseUI.framework'
  s.requires_arc = true
s.prefix_header_contents =<<-EOS

#ifdef __OBJC__
#import <UIkit/UIkit.h>
#import "Public.h"
#import "UIView+EUC.h"
#import "UIView+OKAQuick.h"
#import "NSString+EUC.h"
#import "EUCGroupNameUtil.h"
#import "NSArray+EUCDemo.h"
#import "UIBarButtonItem+EUC.h"
#import "EUCBaseButton.h"
#import "MJExtension.h"
#import "UIView+MJExtension.h"
#import <EUCSDK/EUCGlobalConsts.h>
#import <EUCSDK/EUCDialogSingleton.h>
#import <EUCSDK/EUCIMClient.h>
#import <EUCSDK/EUCContactManager.h>
#import <EUCSDK/EUCStyleDefine.h>
#import <EUCSDK/EUCCacheModel.h>
#import <EUCSDK/EUCCacheGlobal.h>
#import <EUCSDK/EUCDataBaseSingleton.h>
#import <EUCSDK/EUCIMClient.h>
#endif /* __OBJC__*/



EOS

#s.xcconfig = { "FRAMEWORK_SEARCH_PATHS" => "$(HOME)/Library/SDKs/ArcGIS/iOS/" }
s.dependency "WebRTC", "~> 58.17.16937"
s.dependency "AFNetworking"
s.dependency "MJExtension"
s.dependency "FMDB", "~> 2.6.2"
s.dependency "BQMM", "~> 1.7.12"
s.dependency "CLPlayer"
s.dependency "Masonry", "~> 1.0.2"
s.dependency "libwebp", "~> 0.6.0"
s.dependency "SDWebImage"
s.dependency "MJRefresh"
s.dependency "UnzipKit", "~> 1.8.5"
end
