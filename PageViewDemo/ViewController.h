//
//  ViewController.h
//  PageViewDemo
//
//  Created by Karthi on 30/03/17.
//  Copyright © 2017 Tringapps. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PageContentViewController.h"
@interface ViewController : UIViewController<UIPageViewControllerDataSource>

- (IBAction)startWalkThrough:(id)sender;

@property (strong, nonatomic) UIPageViewController *pageViewController;
@property (strong, nonatomic) NSArray *pageTitles;
@property (strong, nonatomic) NSArray *pageImages;

@end

