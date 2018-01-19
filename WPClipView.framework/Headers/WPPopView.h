//
//  WPClipView.h
//
//  Created by johnson on 15/02/14.
//  Email: scocsdn@gmail.com
//  Copyright © 2015 Johnson All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPClipCommon.h"
#import "WPPointView.h"

@interface WPPopView : UIView

@property (strong, nonatomic) UIImage *image;

@property (strong, nonatomic) NSArray *points;
@property (assign, nonatomic) CGFloat pointRadius;
@property (assign, nonatomic) CGFloat pointInnerRadius;
@property (assign, nonatomic) CGFloat pointLineWidth;
@property (strong, nonatomic) UIColor *pointLineColor;
@property (strong, nonatomic) UIColor *pointFillColor;
@property (strong, nonatomic) UIColor *pointSelectedColor;

@property (nonatomic, copy) void(^pointSelected)(WPPointView *pointView);

@end

