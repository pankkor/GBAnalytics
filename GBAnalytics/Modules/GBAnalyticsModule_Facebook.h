//
//  GBAnalyticsModule_Facebook.h
//  GBAnalytics
//
//  Created by Luka Mirosevic on 29/01/2013.
//  Copyright (c) 2015 Goonbee. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "GBAnalyticsModule.h"

#define kGBAnalyticsFacebookAppIDFromPlist nil

@interface GBAnalyticsModule_Facebook : NSObject <GBAnalyticsModule>

@end

@interface GBAnalyticsSettings (Facebook)

@property (strong, nonatomic, readonly) GBAnalyticsModule_Facebook     *Facebook;

@end
