//
//  CarDetailViewController.h
//  TableViewStory
//
//  Created by Neil Smyth on 9/17/13.
//  Copyright (c) 2013 Neil Smyth. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CarDetailViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *makeLabel;
@property (strong, nonatomic) IBOutlet UILabel *modelLabel;
@property (strong, nonatomic) IBOutlet UIImageView *imageView;
@property (strong, nonatomic) NSArray *carDetailModel;

@end
