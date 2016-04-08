/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class NSString;

@interface WCCardUsedStoreInfo : MMObject {
	NSString* _name;
	NSString* _descriptor;
	NSString* _phone;
	NSString* _country;
	NSString* _province;
	NSString* _city;
	NSString* _address;
	unsigned long _distance;
	NSString* _jumpUrl;
	double _longitude;
	double _latitude;
}
@property(retain, nonatomic) NSString* jumpUrl;
@property(assign, nonatomic) unsigned long distance;
@property(retain, nonatomic) NSString* address;
@property(retain, nonatomic) NSString* city;
@property(retain, nonatomic) NSString* province;
@property(retain, nonatomic) NSString* country;
@property(retain, nonatomic) NSString* phone;
@property(retain, nonatomic) NSString* descriptor;
@property(assign, nonatomic) double latitude;
@property(assign, nonatomic) double longitude;
@property(retain, nonatomic) NSString* name;
-(void).cxx_destruct;
-(void)parseFromJSONDic:(id)jsondic;
-(void)dealloc;
@end
