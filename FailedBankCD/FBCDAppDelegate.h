//
//  FBCDAppDelegate.h
//  FailedBankCD
//
//  Created by Brandon Levasseur on 3/22/13.
//  Copyright (c) 2013 TheGamingArt. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FBCDAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;//contains the database schema
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;// for the most part, this is where you call methods to insert/delete/get objects from the database
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; //database connection.. set names and locations of databases. If the managed object context needs saving, it goes through here

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
