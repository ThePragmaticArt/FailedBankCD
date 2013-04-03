//
//  FBCDMasterViewController.h
//  FailedBankCD
//
//  Created by Brandon Levasseur on 3/22/13.
//  Copyright (c) 2013 TheGamingArt. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FBCDMasterViewController : UITableViewController

@property (nonatomic, strong) NSManagedObjectContext *managedObjectContext;

@property (nonatomic, strong) NSArray *failedBankInfos;

@end
