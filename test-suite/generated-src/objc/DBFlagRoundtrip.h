// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from enum.djinni

#import "DBAccessFlags.h"
#import "DBEmptyFlags.h"
#import <Foundation/Foundation.h>


@interface DBFlagRoundtrip : NSObject

+ (DBAccessFlags)roundtripAccess:(DBAccessFlags)flag;

+ (DBEmptyFlags)roundtripEmpty:(DBEmptyFlags)flag;

+ (nullable NSNumber *)roundtripAccessBoxed:(nullable NSNumber *)flag;

+ (nullable NSNumber *)roundtripEmptyBoxed:(nullable NSNumber *)flag;

@end
