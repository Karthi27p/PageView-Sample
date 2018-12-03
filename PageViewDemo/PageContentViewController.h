//
//  PageContentViewController.h
//  PageViewDemo
//
//  Created by Karthi on 30/03/17.
//  Copyright © 2017 Tringapps. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PageContentViewController : UIViewController
@property (strong, nonatomic) IBOutlet UIWebView *contentBodyWebView;
@property (strong, nonatomic) IBOutlet UILabel *titleLabel;
@property (strong, nonatomic) IBOutlet UIImageView *backgroundImageView;
@property NSUInteger pageIndex;
@property NSString *titleText;
@property NSString *imageFile;
@end
