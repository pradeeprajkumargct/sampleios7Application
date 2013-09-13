//
//  DetailViewController.h
//  SampleiOS7Application
//
//  Created by Pradeep Rajkumar on 13/09/13.
//  Copyright (c) 2013 Pradeep Rajkumar. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
