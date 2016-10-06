//
//  MasterViewController.h
//  iOSTestApp
//
//  Created by Bret Johnson on 10/6/16.
//  Copyright © 2016 Bret Johnson. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;


@end

