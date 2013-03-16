//
//  DetailViewController.h
//  CoreDataMultiContext
//
//  Created by xzolian on 3/16/13.
//  Copyright (c) 2013 Matthew Morey. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
