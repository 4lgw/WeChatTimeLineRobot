/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "WeChat-Structs.h"
#import "MMService.h"

@class NSString;

@interface EmojiEmoticonChangeMgr : MMService <MMService> {
	map<unsigned long long, tagEmojiItem *, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, tagEmojiItem *> > > m_mapEmojiChangeFromSoftbankToUnified;
	map<unsigned long long, tagEmojiItem *, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, tagEmojiItem *> > > m_mapEmojiChangeFromUnifiedToSoftbank;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(id).cxx_construct;
-(void).cxx_destruct;
-(unsigned long)countEmojiFromSoftbank:(id)softbank;
-(BOOL)stringContainsUnifiedEmoji:(id)emoji;
-(unsigned long)countEmojiFromUnified:(id)unified;
-(id)changeEmojiFromUnifiedToSoftbank:(id)softbank;
-(id)changeEmojiFromSoftbankToUnified:(id)unified;
-(void)dealloc;
-(id)init;
@end
