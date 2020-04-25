//
//  RPSController.m
//  Udacity-Objective-C
//
//  Created by Esmaeil MIRZAEE on 2020-04-25.
//  Copyright © 2020 TheBeaver. All rights reserved.
//

#import "RPSController.h"
#import "RPSTurn.h"

@implementation RPSController

-(void)thrownDown:(Move) playersMove {
    
    RPSTurn* playersTurn = [[RPSTurn alloc]initWithMove:playersMove];
    RPSTurn* computersTurn = [[RPSTurn alloc] init];
    
    computersTurn.move = playersTurn.move;
    
    self.game = [[RPSGame alloc] initWithFirstTurn:playersTurn SecondTurn:computersTurn];
}

-(NSString*)messageForGame:(RPSGame *)game {
    
    NSString *winnerString = [[game winner] description];
    
    NSString *wholeString = @"";
    
    return wholeString;
}
@end
