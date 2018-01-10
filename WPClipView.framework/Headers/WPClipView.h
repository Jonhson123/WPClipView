//
//  WPClipView.h
//  imapic
//
//  Created by tony on 17/5/11.
//  Copyright © 2017年 银羽网络. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPClipCommon.h"

@interface WPClipView : UIView

@property (strong, nonatomic) UIImage *image;                       //图片

@property (assign, nonatomic) CGFloat initMaskScale;                //遮罩显示大小比例 0 ~ 1
@property (strong, nonatomic) UIColor *maskColor;                   //遮罩背景色

@property (assign, nonatomic) CGFloat cropAspectRatio;              //裁剪框的宽高比
@property (strong, nonatomic) UIColor *cropLineColor;               //裁剪边框的颜色
@property (assign, nonatomic) CGFloat cropLineWidth;                //裁剪边框的线宽

@property (assign, nonatomic) CGFloat cornerWidth;                  //裁剪边框四个角的宽度
@property (assign, nonatomic) CGFloat cornerHeight;                 //裁剪边框四个角的高度
@property (strong, nonatomic) UIColor *cornerLineColor;             //裁剪边框四个角的颜色
@property (assign, nonatomic) CGFloat cornerLineWidth;              //裁剪边框四个角的线宽

@property (assign, nonatomic) BOOL showMidLines;                    //是否显示裁剪边框中间线
@property (strong, nonatomic) UIColor *cropMidLineColor;            //裁剪边框中间线颜色
@property (assign, nonatomic) CGFloat cropMidLineWidth;             //裁剪边框中间线长度
@property (assign, nonatomic) CGFloat cropMidLineHeight;            //裁剪边框中间线线宽

@property (assign, nonatomic) CGFloat minSpace;                     //相邻角之间的最小距离

@property (strong, nonatomic) NSArray *areas;                       //矩形块集合
@property (strong, nonatomic) UIColor *areaLineColor;               //矩形线的颜色
@property (strong, nonatomic) UIColor *areaFillColor;               //矩形填充颜色
@property (strong, nonatomic) UIColor *areaSelectedColor;           //矩形选择时颜色
@property (assign, nonatomic) BOOL hiddenArea;                      //显示或隐藏矩形

@property (strong, nonatomic) NSArray *points;                      //点集合
@property (assign, nonatomic) CGFloat pointRadius;                  //点的视图半径
@property (assign, nonatomic) CGFloat pointInnerRadius;             //点的内圆半径
@property (assign, nonatomic) CGFloat pointLineWidth;               //点的线条宽度
@property (strong, nonatomic) UIColor *pointLineColor;              //点的线颜色
@property (strong, nonatomic) UIColor *pointFillColor;              //点的填充颜色
@property (strong, nonatomic) UIColor *pointSelectedColor;          //点选择时颜色
@property (assign, nonatomic) BOOL hiddenPoint;                     //显示或隐藏点

@property (nonatomic, copy) void(^selectedChanged)(NSArray *selectedAreas, NSArray *selectedPoints);    //选择改变事件

@end
