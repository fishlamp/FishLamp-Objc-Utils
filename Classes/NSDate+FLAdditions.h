//
//  NSDate+FLAdditions.h
//  FishLamp
//
//  Created by Mike Fullerton on 7/14/12.
//  Copyright (c) 2013 GreenTongue Software LLC, Mike Fullerton. 
//  The FishLamp Framework is released under the MIT License: http://fishlamp.com/license 
//

#import "FLCocoaRequired.h"

@interface NSDate (FLAdditions)

@end

NS_INLINE
BOOL FLIsValidDate(NSDate* date) {
	return date != nil && !fabs(date.timeIntervalSinceReferenceDate) < FLT_EPSILON;
}
