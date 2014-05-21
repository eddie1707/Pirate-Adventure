//
//  EWCharacter.h
//  Pirate Adventure
//
//  Created by Edwin Wiersma on 16-05-14.
//  Copyright (c) 2014 Apps4Mobile. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EWArmor.h"
#import "EWWeapon.h"

@interface EWCharacter : NSObject

@property (strong, nonatomic) EWArmor *armor;
@property (strong, nonatomic) EWWeapon *weapon;
@property (nonatomic) int damage;
@property (nonatomic) int health;

@end
