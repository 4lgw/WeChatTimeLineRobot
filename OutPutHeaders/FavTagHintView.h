/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "MMUIView.h"

@class NSMutableArray, NSString, MMTableView;
@protocol FavTagEditViewDelegate;

@interface FavTagHintView : MMUIView <UITableViewDelegate, UITableViewDataSource> {
	MMTableView* m_tableView;
	NSMutableArray* m_arrHints;
	NSString* m_currentInput;
	id<FavTagEditViewDelegate> m_delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* m_currentInput;
@property(retain, nonatomic) NSMutableArray* m_arrHints;
@property(assign, nonatomic) __weak id<FavTagEditViewDelegate> m_delegate;
-(void).cxx_destruct;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)showWithHeight:(float)height;
-(void)initView;
-(void)initData;
-(id)initWithFrame:(CGRect)frame;
@end
