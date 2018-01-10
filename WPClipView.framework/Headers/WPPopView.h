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

@property (strong, nonatomic) UIImage *image;                                   //图片

@property (strong, nonatomic) NSArray *points;                                  //点集合
@property (assign, nonatomic) CGFloat pointRadius;                              //点的视图半径
@property (assign, nonatomic) CGFloat pointInnerRadius;                         //点的内圆半径
@property (assign, nonatomic) CGFloat pointLineWidth;                           //点的线条宽度
@property (strong, nonatomic) UIColor *pointLineColor;                          //点的线颜色
@property (strong, nonatomic) UIColor *pointFillColor;                          //点的填充颜色
@property (strong, nonatomic) UIColor *pointSelectedColor;                      //点选择时颜色

@property (nonatomic, copy) void(^pointSelected)(WPPointView *pointView);       //选中节点事件

@end

