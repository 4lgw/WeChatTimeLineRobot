/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IMMWebViewPluginProtocol.h"
#import "MMObject.h"

@class NSString, MMWebViewController;

@interface MMWebViewPluginBase : MMObject <IMMWebViewPluginProtocol> {
	MMWebViewController* _webViewController;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) __weak MMWebViewController* webViewController;
-(void).cxx_destruct;
-(void)setWebViewOwner:(id)owner;
-(void)dealloc;
-(id)init;
@end

