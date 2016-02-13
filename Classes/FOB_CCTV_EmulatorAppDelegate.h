//
//  FOB_CCTV_EmulatorAppDelegate.h
//  FOB-CCTV-Emulator
//
//  Created by jaime jaime on 2/13/16.
//  Copyright 2016 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FOB_CCTV_EmulatorViewController;

@interface FOB_CCTV_EmulatorAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    FOB_CCTV_EmulatorViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet FOB_CCTV_EmulatorViewController *viewController;

@end

