//
//  DetailViewController.h
//  iOSTesting
//
//  Created by Masrina on 12/11/14.
//  Copyright (c) 2014 Masrina. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

