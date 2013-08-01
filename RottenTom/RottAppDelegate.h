//
//  RottAppDelegate.h
//  RottenTom
//
//  Created by Jakub SIkora on 7/31/13.
//  Copyright (c) 2013 Jakub Sikora. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RottAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
