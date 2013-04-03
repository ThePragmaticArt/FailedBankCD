//
//  FailedBankInfo.h
//  FailedBankCD
//
//  Created by Brandon Levasseur on 3/22/13.
//  Copyright (c) 2013 TheGamingArt. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class FailedBankDetails;

@interface FailedBankInfo : NSManagedObject

@property (nonatomic, retain) NSString * city;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * state;
@property (nonatomic, retain) FailedBankDetails *details; //Had to change from NSManagedObject. Created this file first so it did not know FailedBankDetails existed yet. After generating FailedBankDetails, you can generate this file again (replace it) and it will fix this

@end
