/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, NSString, BaseRequest;

@interface AcceptCardListFromAppRequest : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned statisticScene;
@property(retain, nonatomic) NSString* jsCheckinfoSessionUsername;
@property(retain, nonatomic) NSString* jsCheckinfoUrl;
@property(assign, nonatomic) unsigned fromScene;
@property(retain, nonatomic) NSMutableArray* cardList;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end
