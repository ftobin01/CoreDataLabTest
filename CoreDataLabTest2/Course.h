//
//  Course.h
//  CoreDataLabTest2
//
//  Created by Fergal Tobin on 28/04/2015.
//  Copyright (c) 2015 Fergal Tobin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Course : NSManagedObject

@property (nonatomic, retain) NSDate * timeStamp;
@property (nonatomic, retain) NSString * courseLecturer;
@property (nonatomic, retain) NSString * courseRoom;
@property (nonatomic, retain) NSString * courseName;
@property (nonatomic, retain) NSManagedObject *haslotsof;

@end
