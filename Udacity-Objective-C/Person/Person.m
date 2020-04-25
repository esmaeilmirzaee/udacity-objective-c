//
//  Person.m
//  Udacity-Objective-C
//
//  Created by Esmaeil MIRZAEE on 2020-04-25.
//  Copyright © 2020 TheBeaver. All rights reserved.
//

#import "Person.h"

@implementation Person

-(instancetype)initWithName:(NSString*) name
                   birthday:(int) birthday {
    self = [super init];
    
    if (self) {
        _name = name;
        _birthday = birthday;
    }
    
    return self;
}

@end
