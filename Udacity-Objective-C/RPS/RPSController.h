//
//  RPSController.h
//  Udacity-Objective-C
//
//  Created by Esmaeil MIRZAEE on 2020-04-25.
//  Copyright © 2020 TheBeaver. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RPSTurn.h"
#import "RPSGame.h"

NS_ASSUME_NONNULL_BEGIN

@interface RPSController : NSObject

@property (nonatomic) RPSGame* game;

-(void)thrownDown:(Move) playersMove;

-(NSString*)messageForGame:(RPSGame*)game;
@end

NS_ASSUME_NONNULL_END
