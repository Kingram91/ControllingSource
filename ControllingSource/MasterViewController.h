//
//  MasterViewController.h
//  ControllingSource
//
//  Created by Kquane Ingram on 6/25/14.
//  Copyright (c) 2014 King Blk Studios. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
