//
//  PicturesViewController.h
//  FlickrBrowser
//
//  Created by Aurélien Fontaine on 09/10/13.
//  Copyright (c) 2013 Aurelien Fontaine. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FBPageSwiper.h"

@interface PicturesViewController : UIViewController <FBPageSwiperDataSource>

@property (weak, nonatomic) IBOutlet FBPageSwiper *swipeView;



@end
