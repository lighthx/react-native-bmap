//
//  BaiduMapModule.h
//  RCTBaiduMap
//
//  Created by zachary on 2/11/2017.
//  Copyright © 2017 zachary. All rights reserved.
//

#ifndef BaiduMapModule_h
#define BaiduMapModule_h

#import "BaseModule.h"

#import "RCTBaiduMapViewManager.h"

@interface BaiduMapModule : BaseModule <BMKMapViewDelegate>

-(BMKGeoCodeSearch *)getGeocodesearch;

-(void)sendEvent:(NSString *)name body:(NSMutableDictionary *)body;

-(NSMutableDictionary *)getEmptyBody;

-(CLLocationCoordinate2D)getBaiduCoor:(double)lat lng:(double)lng;

-(RCTBaiduMapView *) getBaiduMapView;
@end

#endif /* BaiduMapModule_h */
