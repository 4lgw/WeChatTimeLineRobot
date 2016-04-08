/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ISvrErrorExt.h"
#import "WeChat-Structs.h"
#import "IHDHeadImageViewExt.h"
#import "IViewControllerExt.h"
#import "IMMImagePickerManagerExt.h"
#import "SvrErrorTipViewControllerDelegate.h"
#import "IUiUtilExt.h"
#import "MMUIWindow.h"
#import "RichTextLayoutDelegate.h"
#import "ILinkEventExt.h"

@class UIImageView, NSString, UIButton, SvrErrorTipViewController, RichTextView;

@interface SvrErrorTipWindow : MMUIWindow <ISvrErrorExt, IUiUtilExt, IViewControllerExt, IHDHeadImageViewExt, IMMImagePickerManagerExt, RichTextLayoutDelegate, ILinkEventExt, SvrErrorTipViewControllerDelegate> {
	UIImageView* _iconImage;
	RichTextView* _tipView;
	UIButton* _closeButton;
	unsigned long _lastCloseTipViewTime;
	NSString* _tipMsg;
	NSString* _url;
	BOOL _tipForbidden;
	BOOL _tipTempForbidden;
	BOOL _landscapeForbidden;
	SvrErrorTipViewController* _fullScreenViewController;
	unsigned long _lastShowFullScreenTime;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)OnGetSvrError:(id)error Url:(id)url Tips:(id)tips TimeOut:(unsigned long)anOut;
-(unsigned long)getSvrErrorMsgMaxLength;
-(void)onMMImagePickerManagerShow;
-(void)onMMImagePickerManagerFinish;
-(void)onHDHeadImageWillDisappear;
-(void)onHDHeadImageWillAppear;
-(void)onViewWillAppear:(BOOL)onView landscapeForbidden:(BOOL)forbidden;
-(void)onStatusBarHiddenChanged:(int)changed;
-(void)onTopBarFrameChanged;
-(void)onLinkClicked:(id)clicked withRect:(CGRect)rect;
-(void)jumpUrl:(id)url;
-(BOOL)shouldOpenNewLineAtY:(float)y withLineHeight:(float)lineHeight richTextView:(id)view;
-(void)onSvrErrorTipClickDetailButton;
-(void)onSvrErrorTipClickCancelButton;
-(void)hideSvrErrorTip;
-(void)showSvrErrorTip;
-(BOOL)isTipBusy;
-(void)dealloc;
-(id)init;
-(void)initData;
-(void)initView;
-(void)manualCloseTipView;
-(void)closetipView;
-(void)safeCall;
-(void)onTimeOut;
-(void)showFullScreenSvrErrorTip:(id)tip;
@end
