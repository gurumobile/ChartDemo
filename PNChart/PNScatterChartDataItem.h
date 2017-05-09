//
//  PNScatterChartDataItem.h
//  PNChartDemo
//
//  Created by sambo on 11/4/17.
//  Copyright (c) 2017 sambo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface PNScatterChartDataItem : NSObject

+ (PNScatterChartDataItem *)dataItemWithX:(CGFloat)x AndWithY:(CGFloat)y;

@property (readonly) CGFloat x; // should be within the x range
@property (readonly) CGFloat y; // should be within the y range

@end
