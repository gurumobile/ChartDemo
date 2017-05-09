//
//  PNRadarChartDataItem.m
//  PNChartDemo
//
//  Created by sambo on 11/4/17.
//  Copyright (c) 2017 sambo. All rights reserved.
//

#import "PNRadarChartDataItem.h"

@implementation PNRadarChartDataItem

+ (instancetype)dataItemWithValue:(CGFloat)value
                      description:(NSString *)description {
    PNRadarChartDataItem *item = [PNRadarChartDataItem new];
    item.value = value;
    item.textDescription = description;
    return item;
}

- (void)setValue:(CGFloat)value {
    if (value < 0) {
        value = 0;
        NSLog(@"Value value can not be negative");
    }
    _value = value;
}

@end
