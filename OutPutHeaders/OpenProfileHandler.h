/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class NSURL, NSString;

@interface OpenProfileHandler : MMObject {
	NSString* _appID;
	NSString* _bundleID;
	NSURL* _infoUrl;
}
-(void).cxx_destruct;
-(void)cancelOpenProfile;
-(void)createWechatOpenProfile;
-(void)startHandleOpenProfile:(id)profile BundleID:(id)anId Info:(id)info;
-(void)dealloc;
@end

