//
//  Seller.h
//  MLDesignPatterns-OC
//
//  Created by mjpc on 2017/8/22.
//  Copyright © 2017年 mali. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HandWheatCakeBuilder.h"

@interface Seller : NSObject

@property (nonatomic, strong) id<HandWheatCakeBuilder> handWheatCakeBuilder;

- (void)cookFood;

@end
