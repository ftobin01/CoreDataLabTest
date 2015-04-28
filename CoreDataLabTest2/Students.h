//
//  Students.h
//  CoreDataLabTest2
//
//  Created by Fergal Tobin on 28/04/2015.
//  Copyright (c) 2015 Fergal Tobin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Course;

@interface Students : NSManagedObject

@property (nonatomic, retain) NSString * studentCourse;
@property (nonatomic, retain) NSString * studentName;
@property (nonatomic, retain) NSNumber * studentGrade;
@property (nonatomic, retain) Course *hasa;

@end
