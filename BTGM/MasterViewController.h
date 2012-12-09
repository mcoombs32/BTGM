//
//  MasterViewController.h
//  BTGM
//
//  Created by Michael Coombs on 12/8/12.
//  Copyright (c) 2012 Michael Coombs. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
