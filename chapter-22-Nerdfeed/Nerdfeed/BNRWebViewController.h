//
//  BNRWebViewController.h
//  Nerdfeed
//
//  Created by John Gallagher on 1/9/14.
//  Copyright (c) 2014 Big Nerd Ranch. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BNRWebViewController : UIViewController <UISplitViewControllerDelegate>

@property (nonatomic, strong) NSURL *URL;

@end
