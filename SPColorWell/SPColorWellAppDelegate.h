//
//  SPColorWellAppDelegate.h
//  SPColorWell
//
//  Created by Philip Dow on 11/18/11.
//  Copyright 2011 Sprouted. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface SPColorWellAppDelegate : NSObject <NSApplicationDelegate> {
@private
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
