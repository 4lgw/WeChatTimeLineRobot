/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class Rank, Share, NSMutableArray, GroupInfo, GiftEntrance, NSString, BaseResponse, AppItem, Introduction, GiftInfo, GuideInfo;

@interface GetGameDetailResponse_V2 : WXPBGeneratedMessage {
}
@property(retain, nonatomic) GiftEntrance* giftentrance;
@property(retain, nonatomic) GroupInfo* groupinfo;
@property(retain, nonatomic) Share* share;
@property(retain, nonatomic) NSMutableArray* friendPlayList;
@property(retain, nonatomic) Rank* rank;
@property(retain, nonatomic) GiftInfo* giftInfo;
@property(retain, nonatomic) GuideInfo* guideInfo;
@property(retain, nonatomic) Introduction* introduction;
@property(retain, nonatomic) NSMutableArray* friendFeedList;
@property(retain, nonatomic) NSString* backGroundUrl;
@property(retain, nonatomic) AppItem* appItem;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end
