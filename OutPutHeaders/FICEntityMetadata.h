/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "PBCoding.h"

@class NSString;

@interface FICEntityMetadata : XXUnknownSuperclass <PBCoding> {
	NSString* entityUUID;
	unsigned eliminationFactor;
	unsigned LRUFactor;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned LRUFactor;
@property(assign, nonatomic) unsigned eliminationFactor;
@property(retain, nonatomic) NSString* entityUUID;
+(void)initialize;
-(void).cxx_destruct;
-(BOOL)isEqual:(id)equal;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
@end

