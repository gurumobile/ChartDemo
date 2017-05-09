//
//  PNRadarChartDataItem.h
//  PNChartDemo
//
//  Created by sambo on 11/4/17.
//  Copyright (c) 2017 sambo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PNRadarChartDataItem : NSObject

+ (instancetype)dataItemWithValue:(CGFloat)value
                      description:(NSString *)description;

@property (nonatomic) CGFloat   value;
@property (nonatomic,copy) NSString *textDescription;

@end
