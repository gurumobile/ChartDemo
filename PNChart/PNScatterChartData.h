//
//  PNScatterChartData.h
//  PNChartDemo
//
//  Created by sambo on 11/4/17.
//  Copyright (c) 2017 sambo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, PNScatterChartPointStyle) {
    PNScatterChartPointStyleCircle = 0,
    PNScatterChartPointStyleSquare = 1,
};

@class PNScatterChartDataItem;

typedef PNScatterChartDataItem *(^LCScatterChartDataGetter)(NSUInteger item);

@interface PNScatterChartData : NSObject

@property (strong) UIColor *fillColor;
@property (strong) UIColor *strokeColor;

@property NSUInteger itemCount;
@property (copy) LCScatterChartDataGetter getData;

@property (nonatomic, assign) PNScatterChartPointStyle inflexionPointStyle;

/**
 * If PNLineChartPointStyle is circle, this returns the circle's diameter.
 * If PNLineChartPointStyle is square, each point is a square with each side equal in length to this value.
 */
@property (nonatomic, assign) CGFloat size;


@end
