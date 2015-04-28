//
//  ftMasterViewController.h
//  CoreDataLabTest2
//
//  Created by Fergal Tobin on 28/04/2015.
//  Copyright (c) 2015 ___FULLUSERNAME___. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface ftMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsControllerCourse;


@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
