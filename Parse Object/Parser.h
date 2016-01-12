//
//  Parser.h
//  Parse Object
//
//  Created by Francisco Javier Trujillo Lopez on 12/01/16.
//  Copyright © 2016 FZagato. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Declarations.h"

@interface Parser : NSObject
+ (ObjectResponse *)parseRegisterObject;
+ (ObjectResponse *)parseZoneObject;
@end
