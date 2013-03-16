//
//  MasterViewController.h
//  CoreDataMultiContext
//
//  Created by xzolian on 3/16/13.
//  Copyright (c) 2013 Matthew Morey. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
