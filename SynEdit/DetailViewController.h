//
//  DetailViewController.h
//  SynEdit
//
//  Created by Shelby Munsch on 4/28/15.
//  Copyright (c) 2015 Shelby Munsch. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

