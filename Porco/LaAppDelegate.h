//
//  LaAppDelegate.h
//  Porco
//
//  Created by 王冬 on 13-5-3.
//  Copyright (c) 2013年 王冬. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LaAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
