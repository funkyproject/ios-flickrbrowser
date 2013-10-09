//
//  FBPageSwiper.h
//  FlickrBrowser
//
//  Created by Aurélien Fontaine on 09/10/13.
//  Copyright (c) 2013 Aurelien Fontaine. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol FBPageSwiperDataSource <NSObject>

- (int) numberOfPages;

- (UIView *) pageAtIndex: (int)index;

@end

@interface FBPageSwiper : UIView

@property (weak, nonatomic) id<FBPageSwiperDataSource> dataSource;

@end
