//
//  FailedBankDetails.h
//  FailedBankCD
//
//  Created by Brandon Levasseur on 3/22/13.
//  Copyright (c) 2013 TheGamingArt. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class FailedBankInfo;

@interface FailedBankDetails : NSManagedObject

@property (nonatomic, retain) NSDate * closeDate;
@property (nonatomic, retain) NSDate * updateDate;
@property (nonatomic, retain) NSNumber * zip;
@property (nonatomic, retain) FailedBankInfo *info;

@end
