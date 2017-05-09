//
//  PNPieChartDataItem.h
//  PNChartDemo
//
//  Created by sambo on 11/4/17.
//  Copyright (c) 2017 sambo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface PNPieChartDataItem : NSObject

+ (instancetype)dataItemWithValue:(CGFloat)value
                            color:(UIColor*)color;

+ (instancetype)dataItemWithValue:(CGFloat)value
                            color:(UIColor*)color
                      description:(NSString *)description;

@property (nonatomic) CGFloat   value;
@property (nonatomic) UIColor  *color;
@property (nonatomic) NSString *textDescription;

@end
