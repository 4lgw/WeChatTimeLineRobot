/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "IMessageWrapExt.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "IMsgExtendOperation.h"
#import "NSCopying.h"

@class CMessageWrap, NSString;

@interface CExtendInfoOfMassSend : XXUnknownSuperclass <IMessageWrapExt, IMsgExtendOperation, NSCopying> {
	CMessageWrap* m_refMessageWrap;
}
@property(assign, nonatomic) CMessageWrap* m_refMessageWrap;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(void)CreateExtendInfoWithUserName:(id)userName retExtendInfo:(id*)info retIsContinueDispatch:(BOOL*)dispatch;
-(void)UpdateMassSendContent:(id)content;
-(void)ChangeForDisplay;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
@end
