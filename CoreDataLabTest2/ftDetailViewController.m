//
//  ftDetailViewController.m
//  CoreDataLabTest2
//
//  Created by Fergal Tobin on 28/04/2015.
//  Copyright (c) 2015 ___FULLUSERNAME___. All rights reserved.
//








#import "ftDetailViewController.h"

@interface ftDetailViewController ()


@property (weak, nonatomic) IBOutlet UILabel *screenCourseName;
@property (weak, nonatomic) IBOutlet UILabel *screenRoomNum;
@property (weak, nonatomic) IBOutlet UILabel *screenLecturer;



- (void)configureView;
@end

@implementation ftDetailViewController

#pragma mark - Managing the detail item

- (void)setDetailItem:(id)newDetailItem
{
    if (_detailItem != newDetailItem) {
        _detailItem = newDetailItem;
        
        // Update the view.
        [self configureView];
    }
}

- (void)configureView
{
    // Update the user interface for the detail item.

    if (self.detailItem)
    
    {
       
    /*    self.detailDescriptionLabel.text = [[self.detailItem valueForKey:@"timeStamp"] description];
 */
           _screenCourseName.text = [[self.detailItem valueForKey:@"courseName"] description];

         _screenRoomNum.text = [[_detailItem valueForKey:@"courseRoom"] description];


         _screenLecturer.text = [[self.detailItem valueForKey:@"courseLecturer"] description];
  
 
 }

}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    [self configureView];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
