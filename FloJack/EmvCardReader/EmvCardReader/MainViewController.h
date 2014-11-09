//
//  MainViewController.h
//  EMVCardReader
//
//  Created by Boris  on 10/17/14.
//  Copyright (c) 2014 LLT. All rights reserved.
//
#import <UIKit/UIKit.h>
#import "AudioJack.h"
#import "LeftMenuView.h"

@interface MainViewController : UIViewController <ACRAudioJackReaderDelegate>{
    
    LeftMenuView *leftMenu;
    CGPoint startPosition;

    //Application Delegate
    //AppDelegate *appDelegate;
    NSString  *filePath;
}

@property (nonatomic, strong) dispatch_source_t timerSource;
@property (getter = isObservingMessages) BOOL observingMessages;

- (void)resetReader;
- (void)setSleep;

@end
