//
//  MainViewController.h
//  Stickie
//
//  Created by 晓东 杨 on 1/9/14.
//  Copyright (c) 2014 晓东 杨. All rights reserved.
//

#import "FlipsideViewController.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end
