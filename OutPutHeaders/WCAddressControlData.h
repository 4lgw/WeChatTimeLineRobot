/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, WCAddressBaseAddress;

@interface WCAddressControlData : XXUnknownSuperclass {
	WCAddressBaseAddress* structSelectBaseAddress;
	WCAddressBaseAddress* structEditBaseAddress;
	NSArray* m_arrAllAddress;
	NSArray* m_arrAddressStageData;
}
@property(retain, nonatomic) NSArray* m_arrAddressStageData;
@property(retain, nonatomic) NSArray* m_arrAllAddress;
@property(retain, nonatomic) WCAddressBaseAddress* structEditBaseAddress;
@property(retain, nonatomic) WCAddressBaseAddress* structSelectBaseAddress;
+(id)getSelectAddressDicFromAddress:(id)address;
-(void).cxx_destruct;
-(void)dealloc;
@end
