//
//  DetailViewController.h
//  BTGM
//
//  Created by Michael Coombs on 12/8/12.
//  Copyright (c) 2012 Michael Coombs. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
