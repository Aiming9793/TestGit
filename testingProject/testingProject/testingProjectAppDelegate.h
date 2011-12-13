//
//  testingProjectAppDelegate.h
//  testingProject
//
//  Created by Imran on 12/13/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//


#import <UIKit/UIKit.h>

@class testingProjectViewController;

@interface testingProjectAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet testingProjectViewController *viewController;

@end
