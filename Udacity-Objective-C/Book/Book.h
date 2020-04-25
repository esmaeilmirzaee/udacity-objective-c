//
//  Book.h
//  Udacity-Objective-C
//
//  Created by Esmaeil MIRZAEE on 2020-04-25.
//  Copyright © 2020 TheBeaver. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Person.h"

NS_ASSUME_NONNULL_BEGIN

@interface Book : NSObject

@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) Person *authour;
@property (nonatomic, readonly) int publicationYear;

-(instancetype)initWithTitle:(NSString*)title
                        authour:(Person*)authour
                        year:(int)year;

@end

NS_ASSUME_NONNULL_END
