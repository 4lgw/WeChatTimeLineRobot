/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WloginTlv.h"

@class NSData;

@interface WloginTlv_0x123 : WloginTlv {
	NSData* G;
	NSData* N;
	NSData* Y;
	NSData* X;
	unsigned dwCalTime;
}
@property(assign) unsigned dwCalTime;
@property(retain) NSData* X;
@property(retain) NSData* Y;
@property(retain) NSData* N;
@property(retain) NSData* G;
-(void)dealloc;
-(int)encode:(id)encode;
@end

