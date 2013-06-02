//
//  DetailViewController.h
//  FirstTest
//
//  Created by Luke Carelsen on 2013/06/02.
//  Copyright (c) 2013 Luke Carelsen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
