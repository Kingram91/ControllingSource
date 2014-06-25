//
//  DetailViewController.h
//  ControllingSource
//
//  Created by Kquane Ingram on 6/25/14.
//  Copyright (c) 2014 King Blk Studios. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
