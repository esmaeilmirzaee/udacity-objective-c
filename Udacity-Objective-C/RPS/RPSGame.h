//
//  RPSGame.h
//  Udacity-Objective-C
//
//  Created by Esmaeil MIRZAEE on 2020-04-25.
//  Copyright © 2020 TheBeaver. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RPSTurn.h"

NS_ASSUME_NONNULL_BEGIN

@interface RPSGame : NSObject

@property (nonatomic) RPSTurn* firstTurn;
@property (nonatomic) RPSTurn* secondTurn;

-(instancetype)initWithFirstTurn:(RPSTurn*) playerTurn
                        SecondTurn:(RPSTurn*) computerTurn;

-(RPSTurn*)winner;
-(RPSTurn*)loser;
-(BOOL)defeats:(RPSTurn*)opponent;
@end

NS_ASSUME_NONNULL_END
