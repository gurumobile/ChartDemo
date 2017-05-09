//
//  PNScatterChartData.m
//  PNChartDemo
//
//  Created by sambo on 11/4/17.
//  Copyright (c) 2017 sambo. All rights reserved.
//

#import "PNScatterChartData.h"

@implementation PNScatterChartData

- (id)init
{
    self = [super init];
    if (self) {
        [self setupDefaultValues];
    }
    
    return self;
}

- (void)setupDefaultValues
{
    _inflexionPointStyle = PNScatterChartPointStyleCircle;
    _fillColor = [UIColor grayColor];
    _strokeColor = [UIColor clearColor];
    _size = 3 ;
}

@end
