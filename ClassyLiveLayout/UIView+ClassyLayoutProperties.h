//
//  Created by Ole Gammelgaard Poulsen on 15/12/13.
//  Copyright (c) 2013 SHAPE A/S. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UIView (ClassyLayoutProperties)

@property(nonatomic, assign) UIEdgeInsets cas_margin;
@property(nonatomic, assign) CGSize cas_size;

// shorthand properties for setting only a single constant value
@property(nonatomic, assign) CGFloat cas_sizeWidth;
@property(nonatomic, assign) CGFloat cas_sizeHeight;

@property(nonatomic, assign) CGFloat cas_marginTop;
@property(nonatomic, assign) CGFloat cas_marginLeft;
@property(nonatomic, assign) CGFloat cas_marginBottom;
@property(nonatomic, assign) CGFloat cas_marginRight;

@end