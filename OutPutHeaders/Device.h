/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class EASession, CBPeripheral, CBCharacteristic, NSStream, NSMutableData, NSString, EAAccessory;

@interface Device : XXUnknownSuperclass {
	EAAccessory* _accessory;
	EASession* _session;
	CBPeripheral* _peripheral;
	CBCharacteristic* _writeCharacter;
	CBCharacteristic* _notifyCharacter;
	NSMutableData* _receiveData;
	NSMutableData* _sendingData;
	NSString* _MAC;
	BOOL _errorFlag;
	BOOL _isSending;
	BOOL _isConnectedBy3rdApp;
	int _state;
	long long _did;
	long long _sid;
	NSStream* _input;
	NSStream* _output;
	NSString* _Name;
	int _profileConnectState;
	int _profileType;
	CBCharacteristic* _pedometerProfileCurMeasurementCharacter;
	CBCharacteristic* _pedometerProfileTargetCharacter;
}
@property(retain) CBCharacteristic* pedometerProfileTargetCharacter;
@property(retain) CBCharacteristic* pedometerProfileCurMeasurementCharacter;
@property(assign) int profileType;
@property(assign) int profileConnectState;
@property(retain) NSStream* output;
@property(retain) NSStream* input;
@property(assign) long long sid;
@property(assign) long long did;
@property(assign) int state;
@property(assign) BOOL isConnectedBy3rdApp;
@property(assign) BOOL isSending;
@property(assign) BOOL errorFlag;
@property(retain) NSString* Name;
@property(retain) NSString* MAC;
@property(retain) NSMutableData* sendingData;
@property(retain) NSMutableData* receiveData;
@property(retain) CBCharacteristic* notifyCharacter;
@property(retain) CBCharacteristic* writeCharacter;
@property(retain) CBPeripheral* peripheral;
@property(retain) EASession* session;
@property(retain) EAAccessory* accessory;
-(void).cxx_destruct;
-(void)dealloc;
-(id)init;
@end
