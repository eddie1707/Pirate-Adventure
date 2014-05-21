//
//  EWTile.h
//  Pirate Adventure
//
//  Created by Edwin Wiersma on 14-05-14.
//  Copyright (c) 2014 Apps4Mobile. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EWWeapon.h"
#import "EWArmor.h"

@interface EWTile : NSObject

@property (strong, nonatomic) NSString *story;
@property (strong, nonatomic) UIImage *backgroundImage;
@property (strong, nonatomic) NSString *actionButtonName;
@property (strong, nonatomic) EWWeapon *weapon;
@property (strong, nonatomic) EWArmor *armor;
@property (nonatomic) int healthEffect;

@end
