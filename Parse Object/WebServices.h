//
//  WebServices.h
//  Parse Object
//
//  Created by Francisco Javier Trujillo Lopez on 12/01/16.
//  Copyright © 2016 FZagato. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WebServices : NSObject
+ (NSDictionary *)userRegister:(NSString *)pushToken;
+ (NSDictionary *)getRiskZones:(NSString *)publicKey;

@end
