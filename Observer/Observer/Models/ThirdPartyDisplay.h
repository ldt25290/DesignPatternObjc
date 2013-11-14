//
//  ThirdPartyDisplay.h
//  Observer
//
//  Created by Vito on 13-11-13.
//  Copyright (c) 2013年 Vito. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Observer.h"
#import "DisplayElement.h"

@interface ThirdPartyDisplay : NSObject <Observer, DisplayElement>

@end
