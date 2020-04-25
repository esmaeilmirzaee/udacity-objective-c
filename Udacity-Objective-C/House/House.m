//
//  House.m
//  Udacity-Objective-C
//
//  Created by Esmaeil MIRZAEE on 2020-04-24.
//  Copyright © 2020 TheBeaver. All rights reserved.
//

#import "House.h"

@implementation House

-(instancetype)initWithAddress: (NSString*)address {
    self = [super init];
    
    if (self) {
        _address = [address copy];
        _numberOfBedrooms = 2;
        _hasHotTub = false;
    }
    
    return self;
}

@end
