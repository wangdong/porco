//
//  LaDetailViewController.h
//  Porco
//
//  Created by 王冬 on 13-5-3.
//  Copyright (c) 2013年 王冬. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LaDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
