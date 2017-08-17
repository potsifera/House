//
//  Bedroom.h
//  House
//
//  Created by Grace Montoya on 8/17/17.
//  Copyright © 2017 Grace Montoya. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger,Direction){
    North,
    South,
    East,
    West
};

@interface Bedroom : NSObject


@property (nonatomic) BOOL privateBath;
@property (nonatomic) Direction directionWindowFaces;

@end
