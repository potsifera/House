//
//  House.m
//  House
//
//  Created by Grace Montoya on 8/17/17.
//  Copyright © 2017 Grace Montoya. All rights reserved.
//

#import "House.h"

@interface House()
@property (nonatomic,readwrite) int numberOfBedrooms; //you can read and write to this variable inside this class
@end

@implementation House

-(instancetype)initWithAddress:(NSString*)address{
    self = [super init];
    if (self){
        _address = [address copy];
        _numberOfBedrooms = 2;
        _hasHotTub = false;
    }
    return self;
}

@end
