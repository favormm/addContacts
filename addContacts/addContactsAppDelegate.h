//
//  addContactsAppDelegate.h
//  addContacts
//
//  Created by Tang Xiaoping on 3/29/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class addContactsViewController;

@interface addContactsAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet addContactsViewController *viewController;

@end
