/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "WCOutCouponCgiDelegate.h"
#import "WCOutGetProductListCgiDelegate.h"
#import "MMService.h"

@class WCOutGetProductListCgi, WCOutCouponCgi, NSString;

@interface WCOutCgiMgr : MMService <WCOutCouponCgiDelegate, WCOutGetProductListCgiDelegate, MMService> {
	WCOutCouponCgi* _couponCgi;
	WCOutGetProductListCgi* _getproductlistCgi;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) WCOutGetProductListCgi* getproductlistCgi;
@property(retain, nonatomic) WCOutCouponCgi* couponCgi;
-(void).cxx_destruct;
-(void)WCOutGetProductListCgiDidFail:(id)wcoutGetProductListCgi;
-(void)WCOutGetProductListCgi:(id)cgi successWithResponse:(id)response;
-(void)WCOutCounponCgiDidFail:(id)wcoutCounponCgi;
-(void)WCOutCounponCgi:(id)cgi successWithResponse:(id)response;
-(void)requestProductList:(id)list reqCurrency:(id)currency;
-(void)requestCoupon;
@end
