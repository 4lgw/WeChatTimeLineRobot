/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface CNoDisturbInfo : XXUnknownSuperclass <NSCoding> {
	BOOL m_bNightSetting;
	unsigned long m_uiNightBeginTime;
	unsigned long m_uiNightEndTime;
	BOOL m_bAllDaySetting;
	unsigned long m_uiAllDayBeginTime;
	unsigned long m_uiAllDayEndTime;
}
@property(assign, nonatomic) unsigned long m_uiAllDayEndTime;
@property(assign, nonatomic) unsigned long m_uiAllDayBeginTime;
@property(assign, nonatomic) BOOL m_bAllDaySetting;
@property(assign, nonatomic) unsigned long m_uiNightEndTime;
@property(assign, nonatomic) unsigned long m_uiNightBeginTime;
@property(assign, nonatomic) BOOL m_bNightSetting;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)init;
-(void)preInit;
@end
