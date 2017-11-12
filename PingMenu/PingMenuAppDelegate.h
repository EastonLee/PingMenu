//
//  PingMenuAppDelegate.h
//  PingMenu
//
//  Created by Baron Karl on 11/08/01.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "SimplePing.h"
#import "PreferencesWindowController.h"

@interface PingMenuAppDelegate : NSObject <NSApplicationDelegate,SimplePingDelegate> {
    NSWindow *window;
    NSStatusItem* theItem;
    NSMenu* theMenu;
    SimplePing* pinger;
    NSTimer* pingTimer;
    NSTimer* updateTimer;
    NSMutableDictionary* pings;
    NSString* currentTitle;
    BOOL didStart;
    BOOL didStartHasSucceeded;
    NSString* latestError;
    NSMenuItem* menuRow0;
    NSMenuItem* menuRow1;
    NSMenuItem* menuRow2;
    NSMenuItem* menuRow3;
    NSMenuItem* menuRow4;
    NSMenuItem* menuRow5;
    NSMenuItem* menuRow6;
    NSMenuItem* menuRow7;
    NSMenuItem* menuRow8;
    NSMenuItem* menuRow9;
    NSMenuItem* menuRow10;
    NSMenuItem* menuRow11;
    NSMenuItem* menuRow12;
    NSMenuItem* menuRow13;
    NSMenuItem* menuRow14;
    NSMenuItem* menuRow15;
    NSMenuItem* menuRow16;
    NSMenuItem* menuRow17;
    NSMenuItem* menuRow18;
    NSMenuItem* menuRow19;
    NSMenuItem* menuRow20;
    NSMenuItem* menuRow21;
    NSMenuItem* menuRow22;
    NSMenuItem* menuRow23;
    NSMenuItem* menuRow24;
    NSMenuItem* menuRow25;
    NSMenuItem* menuRow26;
    NSMenuItem* menuRow27;
    NSMenuItem* menuRow28;
    NSMenuItem* menuRow29;
    BOOL darkModeOn;
}

@property (assign) IBOutlet NSWindow *window;
@property (retain,nonatomic) NSStatusItem* theItem;
@property (assign) IBOutlet NSMenu* theMenu;
@property (retain,nonatomic) SimplePing* pinger;
@property (retain,nonatomic) NSTimer* pingTimer;
@property (retain,nonatomic) NSTimer* updateTimer;
@property (retain,nonatomic) NSMutableDictionary* pings;
@property (retain,nonatomic) NSString* currentTitle;
@property (retain,nonatomic) NSString* latestError;
@property (assign) IBOutlet NSMenuItem* menuRow0;
@property (assign) IBOutlet NSMenuItem* menuRow1;
@property (assign) IBOutlet NSMenuItem* menuRow2;
@property (assign) IBOutlet NSMenuItem* menuRow3;
@property (assign) IBOutlet NSMenuItem* menuRow4;
@property (assign) IBOutlet NSMenuItem* menuRow5;
@property (assign) IBOutlet NSMenuItem* menuRow6;
@property (assign) IBOutlet NSMenuItem* menuRow7;
@property (assign) IBOutlet NSMenuItem* menuRow8;
@property (assign) IBOutlet NSMenuItem* menuRow9;
@property (assign) IBOutlet NSMenuItem* menuRow10;
@property (assign) IBOutlet NSMenuItem* menuRow11;
@property (assign) IBOutlet NSMenuItem* menuRow12;
@property (assign) IBOutlet NSMenuItem* menuRow13;
@property (assign) IBOutlet NSMenuItem* menuRow14;
@property (assign) IBOutlet NSMenuItem* menuRow15;
@property (assign) IBOutlet NSMenuItem* menuRow16;
@property (assign) IBOutlet NSMenuItem* menuRow17;
@property (assign) IBOutlet NSMenuItem* menuRow18;
@property (assign) IBOutlet NSMenuItem* menuRow19;
@property (assign) IBOutlet NSMenuItem* menuRow20;
@property (assign) IBOutlet NSMenuItem* menuRow21;
@property (assign) IBOutlet NSMenuItem* menuRow22;
@property (assign) IBOutlet NSMenuItem* menuRow23;
@property (assign) IBOutlet NSMenuItem* menuRow24;
@property (assign) IBOutlet NSMenuItem* menuRow25;
@property (assign) IBOutlet NSMenuItem* menuRow26;
@property (assign) IBOutlet NSMenuItem* menuRow27;
@property (assign) IBOutlet NSMenuItem* menuRow28;
@property (assign) IBOutlet NSMenuItem* menuRow29;
@property (retain,nonatomic) NSString* pingHost;
@property (retain,nonatomic) NSDate* lastSeen;


@property (assign, nonatomic) PreferencesWindowController *prefWindowController;
-(IBAction)quitMe:(id)sender;
-(IBAction)openPreferences:(id)sender;

@end
