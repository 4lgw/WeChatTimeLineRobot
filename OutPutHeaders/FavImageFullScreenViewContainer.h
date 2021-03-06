/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMImageScrollViewHelperDelegate.h"
#import "WeChat-Structs.h"
#import "UIScrollViewDelegate.h"
#import "MMUIScrollView.h"
#import "SimpleImgInfoDelegate.h"

@class SimpleImgInfo, MMLoadingView, NSString, MMImageScrollViewHelper, MMFullScreenItemView, UIImage, NSArray, MMProgressViewEx;
@protocol FavImageFullScreenViewContainerDelegate;

@interface FavImageFullScreenViewContainer : MMUIScrollView <UIScrollViewDelegate, SimpleImgInfoDelegate, MMImageScrollViewHelperDelegate> {
	CGRect m_originImageRectInScreen;
	CGSize m_initalContentSize;
	UIImage* m_image;
	BOOL m_isAnimating;
	BOOL m_isShowing;
	BOOL m_bIsLongPressHandled;
	BOOL m_isImageReady;
	int m_lastDeviceOrientation;
	SimpleImgInfo* imgInfo;
	id<SimpleImgInfoDelegate> imgInfoDelegate;
	MMFullScreenItemView* m_container;
	MMLoadingView* m_loadingView;
	MMProgressViewEx* m_processView;
	MMImageScrollViewHelper* m_scrollViewHelper;
	id<FavImageFullScreenViewContainerDelegate> m_delegate;
}
@property(copy, nonatomic) NSArray* gestureRecognizers;
@property(assign, nonatomic) float maximumZoomScale;
@property(assign, nonatomic) float minimumZoomScale;
@property(assign, nonatomic) float zoomScale;
@property(assign, nonatomic) CGRect frame;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) MMFullScreenItemView* m_container;
@property(readonly, assign, nonatomic) MMLoadingView* m_loadingView;
@property(assign, nonatomic) __weak id<FavImageFullScreenViewContainerDelegate> m_delegate;
@property(assign, nonatomic) CGSize m_initalContentSize;
@property(assign, nonatomic) CGRect m_originImageRectInScreen;
@property(retain, nonatomic) SimpleImgInfo* imgInfo;
-(void).cxx_destruct;
-(void)onSightDownloadFail;
-(void)onSightDownloadSuccess:(id)success;
-(void)updateImagePath:(id)path;
-(void)LongPressEvents;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)animationRotateDidStop;
-(void)onDeviceRotate:(BOOL)rotate;
-(void)onDeviceRotate;
-(void)animationHideDidStop;
-(void)animationHideWithRotate;
-(CGAffineTransform)getAnimationRotateTransform;
-(void)releaseImg;
-(void)tryDownloadImage;
-(void)animationShow;
-(void)animationShowStep2;
-(void)animationShowStep2_Animate;
-(void)animationShowStep2_ImageNotReady;
-(void)animationShowDidStop;
-(void)animationShowView;
-(void)setContentOffsetAndSize;
-(void)clearStatus;
-(CGRect)getCenterRectWithMaxSize:(CGSize)maxSize;
-(void)hideProcessView;
-(void)showProcessView;
-(void)initScrollViewHelper;
-(void)onHide;
-(void)onShow;
-(void)onDoubleTap:(id)tap;
-(void)onSingleTap:(id)tap;
-(id)viewForZooming;
-(void)scrollViewDidZoom:(id)scrollView;
-(id)viewForZoomingInScrollView:(id)scrollView;
-(void)startLoadingBlocked;
-(void)setContentSize:(CGSize)size;
-(void)setContentOffset:(CGPoint)offset;
-(void)setZoomScale:(float)scale animated:(BOOL)animated;
-(void)dealloc;
-(void)stopAllAnimation;
-(id)init;
@end

