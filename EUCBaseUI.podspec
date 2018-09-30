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
#s.resource  = "EUCBaseUI.bundle"
   s.resources = "EUCBaseUI.bundle"
#s.frameworks = "EUCBaseUI.framework", "EUCSDK.framework"
s.vendored_frameworks = 'EUCSDK.framework', 'EUCBaseUI.framework'
  s.requires_arc = true
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
