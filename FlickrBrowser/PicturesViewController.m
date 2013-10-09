//
//  PicturesViewController.m
//  FlickrBrowser
//
//  Created by Aurélien Fontaine on 09/10/13.
//  Copyright (c) 2013 Aurelien Fontaine. All rights reserved.
//

#import "PicturesViewController.h"

@interface PicturesViewController ()

@end

@implementation PicturesViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    self.swipeView.dataSource = self;
}

- (int) numberOfPages {
    return 0;
}

- (UIView *) pageAtIndex: (int)index
{
    return [[UIView alloc] init];
}


@end
