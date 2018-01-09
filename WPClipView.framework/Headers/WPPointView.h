//
//  WPPointView.h
//
//  Created by johnson on 14/12/11.
//  Email: scocsdn@gmail.com
//  Copyright © 2014 Johnson All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPClipCommon.h"

@interface WPPointView : UIView

@property (strong, nonatomic) UIColor *lineColor;
@property (strong, nonatomic) UIColor *fillColor;
@property (strong, nonatomic) UIColor *selectedColor;

@property (nonatomic, assign) BOOL selected;

@property (nonatomic, assign) CGPoint point;

@property (nonatomic, strong) id data;

- (instancetype)initWithCenter: (CGPoint)center
                     lineColor: (UIColor *)lineColor
                     fillColor: (UIColor *)fillColor
                 selectedColor: (UIColor *)selectedColor;

@end
