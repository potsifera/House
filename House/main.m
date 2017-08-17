//
//  main.m
//  House
//
//  Created by Grace Montoya on 8/17/17.
//  Copyright © 2017 Grace Montoya. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "House.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        NSLog(@"Hello, World!");
        House *myHouse = [[House alloc] init];
        int number = myHouse.numberOfBedrooms;
        //myHouse.numberOfBedrooms = 4;
    }
    return 0;
}
