//
//  GTAppDelegate.h
//  git-tutorial
//
//  Created by Takeshi Shoji on 12/11/05.
//  Copyright (c) 2012年 Takeshi Shoji. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GTAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
