//
//  GameViewController.h
//  LHShooter
//
//  Created by Monica Mollica on 2016-03-22.
//  Copyright © 2016 Sergio Mollica. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Game.h"

@interface GameViewController : UIViewController

@property (nonatomic) Game *game;
@property (nonatomic) float record;

@end
