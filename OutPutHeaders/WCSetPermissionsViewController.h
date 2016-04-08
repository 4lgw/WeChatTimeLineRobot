/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIViewController.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "WCFacadeExt.h"

@class WCDataItem, WCOpLog, NSString, MMTableView;
@protocol WCSetPermissionsViewControllerDelegate;

@interface WCSetPermissionsViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, WCFacadeExt> {
	MMTableView* _tableView;
	NSString* _userName;
	WCOpLog* _wcOpLog;
	id<WCSetPermissionsViewControllerDelegate> _delegate;
	WCDataItem* m_oDataItem;
	int _scene;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int scene;
@property(retain, nonatomic) WCDataItem* m_oDataItem;
@property(assign, nonatomic) __weak id<WCSetPermissionsViewControllerDelegate> delegate;
-(void).cxx_destruct;
-(id)tableView:(id)view titleForFooterInSection:(int)section;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)onWCGroupModMemberReturn:(BOOL)aReturn group:(id)group;
-(void)makeExposeCell:(id)cell tip:(id)tip;
-(void)makeSwitchCell:(id)cell tip:(id)tip status:(BOOL)status tag:(int)tag;
-(void)onSwitchValueChange:(id)change;
-(void)becomeWCBlacklist:(BOOL)blacklist;
-(void)becomeOutsider:(BOOL)outsider;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)initView;
-(void)onDissmiss;
-(void)dealloc;
-(id)initWithUserName:(id)userName;
@end
