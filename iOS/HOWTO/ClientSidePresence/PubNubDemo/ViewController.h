//
//  ViewController.h
//  PubNubDemo
//
//  Created by geremy cohen on 3/27/13.
//  Copyright (c) 2013 geremy cohen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PNImports.h"

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextView *textView;
- (IBAction)clearAll:(id)sender;
@property (weak, nonatomic) IBOutlet UITextView *presenceView;
@property (weak, nonatomic) IBOutlet UITextField *uuidView;

@property NSTimer *pingPongTimer;

@property PNChannel *myChannel;
@property id presenceChannel;
@property NSMutableDictionary *occupants;

@end
