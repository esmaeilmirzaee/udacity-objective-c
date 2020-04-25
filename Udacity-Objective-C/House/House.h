//
//  House.h
//  Udacity-Objective-C
//
//  Created by Esmaeil MIRZAEE on 2020-04-24.
//  Copyright © 2020 TheBeaver. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface House : NSObject

@property (nonatomic, copy) NSString *address;
@property (nonatomic, readonly) int numberOfBedrooms;
@property (nonatomic) BOOL hasHotTub;

-(instancetype)initWithAddress:(NSString*)address;

@end

NS_ASSUME_NONNULL_END
