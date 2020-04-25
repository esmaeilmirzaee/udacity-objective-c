//
//  Person.h
//  Udacity-Objective-C
//
//  Created by Esmaeil MIRZAEE on 2020-04-25.
//  Copyright © 2020 TheBeaver. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Person : NSObject

@property (nonatomic)NSString *name;
@property (nonatomic)int birthday;

-(instancetype)initWithName:(NSString*) name
                        birthday: (int) birthday;

@end

NS_ASSUME_NONNULL_END
