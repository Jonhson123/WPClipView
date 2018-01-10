//
//  WPPointView.h
//  imapic
//
//  Created by tony on 17/6/11.
//  Copyright © 2017年 银羽网络. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPClipCommon.h"

@interface WPPointView : UIView

@property (assign, nonatomic) CGFloat pointRadius;              //视图半径
@property (assign, nonatomic) CGFloat innerRadius;              //内部圆半径
@property (assign, nonatomic) CGFloat lineWidth;                //线条宽度
@property (strong, nonatomic) UIColor *lineColor;               //线条颜色
@property (strong, nonatomic) UIColor *fillColor;               //填充颜色
@property (strong, nonatomic) UIColor *selectedColor;           //选中颜色

@property (nonatomic, assign) BOOL selected;                    //是否选中

@property (nonatomic, assign) CGPoint point;                    //点坐标

@property (nonatomic, strong) id data;

- (instancetype)initWithCenter: (CGPoint)center
                   pointRadius: (CGFloat)pointRadius
                   innerRadius: (CGFloat)innerRadius
                     lineWidth: (CGFloat)lineWidth
                     lineColor: (UIColor *)lineColor
                     fillColor: (UIColor *)fillColor
                 selectedColor: (UIColor *)selectedColor;

@end
