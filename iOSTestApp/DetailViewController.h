//
//  DetailViewController.h
//  iOSTestApp
//
//  Created by Bret Johnson on 10/6/16.
//  Copyright © 2016 Bret Johnson. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

