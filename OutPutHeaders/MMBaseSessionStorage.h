/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSString, SessionStorageSetting, WCDataBase, WCDataBaseTable;
@protocol ISessionStorageDelegate;

@interface MMBaseSessionStorage : XXUnknownSuperclass {
	WCDataBase* m_db;
	WCDataBaseTable* m_table;
	Class m_sessionClass;
	NSString* m_sessionType;
	NSMutableArray* m_sessionObjectList;
	id<ISessionStorageDelegate> m_delegate;
	SessionStorageSetting* m_setting;
}
@property(assign, nonatomic) __weak id<ISessionStorageDelegate> delegate;
+(void)processVersionUpdate;
-(void).cxx_destruct;
-(void)resortSessions;
-(void)initDB;
-(void)checkLoadData;
-(BOOL)checkSessionVersion;
-(void)updateSessionSetting;
-(void)clearSessionCacheAndReimportSession;
-(void)clearSessionCache;
-(BOOL)deleteAllSessions;
-(BOOL)deleteSessionWithSessionId:(id)sessionId;
-(BOOL)deleteSessionAtIndex:(int)index;
-(BOOL)addOrUpdateSessionList:(id)list;
-(BOOL)addOrUpdateSession:(id)session;
-(id)allSessions;
-(id)sessionWithSessionId:(id)sessionId;
-(id)sessionAtIndex:(int)index;
-(int)sessionCount;
-(void)dealloc;
-(id)initWithSessionType:(id)sessionType withClass:(Class)aClass;
@end

