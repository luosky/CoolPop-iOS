//
//  UISwipeNavigationController.h
//  CoolPop
//
//  Created by ryan on 13-1-29.
//  Copyright (c) 2013年 ryan. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol UISwipePopDelegate <NSObject>

@optional
- (BOOL)isSupportSwipePop;// default is YES;

@end

@interface UISwipeNavigationController : UINavigationController

+ (NSString *)snapshotCachePath;

@end
