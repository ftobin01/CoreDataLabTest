//
//  ftDetailViewController.h
//  CoreDataLabTest2
//
//  Created by Fergal Tobin on 28/04/2015.
//  Copyright (c) 2015 ___FULLUSERNAME___. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ftDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@property (weak, nonatomic) IBOutlet UILabel *courseName;
@end
