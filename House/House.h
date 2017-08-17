//
//  House.h
//  House
//
//  Created by Grace Montoya on 8/17/17.
//  Copyright © 2017 Grace Montoya. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Bedroom.h"

@interface House : NSObject

@property (nonatomic,copy) NSString *address;
@property (nonatomic,readonly) int numberOfBedrooms; //can read but not write to it from public
@property (nonatomic) BOOL hasHotTub;

@property (nonatomic) Bedroom *frontBedroom;
@property (nonatomic) Bedroom *backBedroom;

-(instancetype)initWithAddress: (NSString*)address;

@end
