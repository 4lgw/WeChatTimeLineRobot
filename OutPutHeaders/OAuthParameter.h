/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface OAuthParameter : XXUnknownSuperclass {
	NSString* name_;
	NSString* value_;
}
@property(copy, nonatomic) NSString* value;
@property(copy, nonatomic) NSString* name;
+(id)sortDescriptors;
+(id)parameterWithName:(id)name value:(id)value;
-(id)description;
-(id)quotedEncodedParam;
-(id)encodedParam;
-(id)encodedName;
-(id)encodedValue;
-(void)dealloc;
@end

