//
//  RPSTurn.m
//  Udacity-Objective-C
//
//  Created by Esmaeil MIRZAEE on 2020-04-25.
//  Copyright © 2020 TheBeaver. All rights reserved.
//

#import "RPSTurn.h"

@implementation RPSTurn

-(instancetype)initWithMove:(Move*)move {
    self = [super init];
    
    if (self) {
        _move = *move;
    }
    
    return self;
}

@end
