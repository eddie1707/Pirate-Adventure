//
//  EWFactory.h
//  Pirate Adventure
//
//  Created by Edwin Wiersma on 14-05-14.
//  Copyright (c) 2014 Apps4Mobile. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EWCharacter.h"
#import "EWBoss.h"

@interface EWFactory : NSObject

-(NSArray *)tiles;
-(EWCharacter *)character;
-(EWBoss *)boss;

@end
