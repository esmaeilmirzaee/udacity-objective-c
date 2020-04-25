//
//  RPSTurn.h
//  Udacity-Objective-C
//
//  Created by Esmaeil MIRZAEE on 2020-04-25.
//  Copyright © 2020 TheBeaver. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, Move) {
    Paper,
    Rock,
    Scissors
};

@interface RPSTurn : NSObject

@property (nonatomic) Move move;

-(instancetype)initWithMove:(Move*)move;

@end

NS_ASSUME_NONNULL_END
