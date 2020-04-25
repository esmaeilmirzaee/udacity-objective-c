//
//  Book.m
//  Udacity-Objective-C
//
//  Created by Esmaeil MIRZAEE on 2020-04-25.
//  Copyright © 2020 TheBeaver. All rights reserved.
//

#import "Book.h"

@implementation Book

-(instancetype)initWithTitle:(NSString*)title
                     authour:(NSString*)authour
                        year:(int)year {
    self = [super init];
    
    if (self) {
        _title = title;
        _publicationYear = year;
        _authour = authour;
    }
    
    return self;
}

@end
