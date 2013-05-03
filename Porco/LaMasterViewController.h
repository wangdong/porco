//
//  LaMasterViewController.h
//  Porco
//
//  Created by 王冬 on 13-5-3.
//  Copyright (c) 2013年 王冬. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LaDetailViewController;

#import <CoreData/CoreData.h>

@interface LaMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) LaDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
