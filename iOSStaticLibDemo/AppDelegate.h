//
//  AppDelegate.h
//  iOSStaticLibDemo
//
//  Created by Aleksandr Medvedev on 18.08.2022.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

