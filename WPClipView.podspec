Pod::Spec.new do |s|
  s.name             = 'WPClipView'
  s.version          = '1.0.12'
  s.summary          = 'WPClipView'
  s.description      = 'a clip view for the image'

  s.homepage         = 'https://github.com/Jonhson123/WPClipView'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Johnson' => 'scocsdn@gmail.com' }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.platform        = :ios
  s.ios.deployment_target = '8.0'

  s.source           = { :git => 'https://github.com/Jonhson123/WPClipView.git', :tag => s.version }

  s.frameworks = 'Foundation', 'UIKit'
  s.vendored_frameworks = 'WPClipView.framework'

  s.requires_arc = true

end
