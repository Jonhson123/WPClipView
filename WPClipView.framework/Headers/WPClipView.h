//
//  WPClipView.h
//
//  Created by johnson on 14/12/11.
//  Email: scocsdn@gmail.com
//  Copyright © 2014 Johnson All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPClipCommon.h"

@interface WPClipView : UIView

@property (strong, nonatomic) UIImage *image;

@property (assign, nonatomic) CGFloat initMaskScale;
@property (strong, nonatomic) UIColor *maskColor;

@property (assign, nonatomic) CGFloat cropAspectRatio;
@property (strong, nonatomic) UIColor *cropLineColor;
@property (assign, nonatomic) CGFloat cropLineWidth;

@property (assign, nonatomic) CGFloat cornerWidth;
@property (assign, nonatomic) CGFloat cornerHeight;
@property (strong, nonatomic) UIColor *cornerLineColor;
@property (assign, nonatomic) CGFloat cornerLineWidth;

@property (assign, nonatomic) BOOL showMidLines;
@property (strong, nonatomic) UIColor *cropMidLineColor;
@property (assign, nonatomic) CGFloat cropMidLineWidth;
@property (assign, nonatomic) CGFloat cropMidLineHeight;

@property (assign, nonatomic) CGFloat minSpace;

@property (strong, nonatomic) NSArray *areas;
@property (strong, nonatomic) UIColor *areaLineColor;
@property (strong, nonatomic) UIColor *areaFillColor;
@property (strong, nonatomic) UIColor *areaSelectedColor;
@property (assign, nonatomic) BOOL hiddenArea;

@property (strong, nonatomic) NSArray *points;
@property (assign, nonatomic) CGFloat pointRadius;
@property (assign, nonatomic) CGFloat pointInnerRadius;
@property (assign, nonatomic) CGFloat pointLineWidth;
@property (strong, nonatomic) UIColor *pointLineColor;
@property (strong, nonatomic) UIColor *pointFillColor;
@property (strong, nonatomic) UIColor *pointSelectedColor;
@property (assign, nonatomic) BOOL hiddenPoint;

@property (nonatomic, copy) void(^selectedChanged)(NSArray *selectedAreas, NSArray *selectedPoints);

@end
