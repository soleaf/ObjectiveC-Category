//
//  UIButton.h
//
//  Created by soleaf on 13. 11. 4..
//  Copyright (c) 2013년 soleaf. All rights reserved.
//

// This Class Scraped on Stackoverflow

#import <UIKit/UIKit.h>
#import <objc/runtime.h>
typedef void (^ActionBlock)();
static char UIButtonBlockKey;

@interface UIButton (UIBlockButton)

- (void)handleControlEvent:(UIControlEvents)event withBlock:(ActionBlock)block;
- (void)callActionBlock:(id)sender;

@end
