//
//  Created by sambo on 11/4/17.
//  Copyright (c) 2017 sambo. All rights reserved.
//

#import "PNLineChartData.h"


@implementation PNLineChartColorRange

- (id)initWithRange:(NSRange)range color:(UIColor *)color {
    self = [super init];
    if (self) {
        self.range = range;
        self.color = color;
    }
    return self;
}


- (id)copyWithZone:(NSZone *)zone {
    PNLineChartColorRange *copy = [[self class] allocWithZone:zone];
    copy.color = self.color;
    copy.range = self.range;
    return copy;
}

@end

@implementation PNLineChartData

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
    _inflexionPointStyle = PNLineChartPointStyleNone;
    _inflexionPointWidth = 6.f;
    _lineWidth = 2.f;
    _alpha = 1.f;
    _showPointLabel = NO;
    _pointLabelColor = [UIColor blackColor];
    _pointLabelFormat = @"%1.f";
    _rangeColors = nil;
}

@end
