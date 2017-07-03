//
//  WPClipView.h
//
//  Created by johnson on 14/12/11.
//  Email: scocsdn@gmail.com
//  Copyright © 2014 Johnson All rights reserved.
//

#ifndef WPClipCommon_h
#define WPClipCommon_h

#define WIDTH(_view) CGRectGetWidth(_view.bounds)
#define HEIGHT(_view) CGRectGetHeight(_view.bounds)
#define MAXX(_view) CGRectGetMaxX(_view.frame)
#define MAXY(_view) CGRectGetMaxY(_view.frame)
#define MINX(_view) CGRectGetMinX(_view.frame)
#define MINY(_view) CGRectGetMinY(_view.frame)

#define WPLineView_WIDTH 44
#define WPLineView_HEIGHT 44

#define WPPointView_RADIUS 10
#define WPPointView_LINEWIDTH 5

typedef NS_ENUM(NSInteger , WPClipCornerPosition) {
    WPClipCornerPositionTopLeft,
    WPClipCornerPositionTopRight,
    WPClipCornerPositionBottomLeft,
    WPClipCornerPositionBottomRight
};

typedef NS_ENUM(NSInteger, WPLineType) {
    WPLineTypeTop,
    WPLineTypeBottom,
    WPLineTypeLeft,
    WPLineTypeRight
};

#endif /* WPClipCommon_h */
