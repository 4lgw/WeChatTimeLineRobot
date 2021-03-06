/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "MMService.h"

@class VoipForceStartObject, NSString;

@interface VoipForceStartInActiveState : MMService <MMService> {
	VoipForceStartObject* _m_audioObject;
	VoipForceStartObject* _m_videoObject;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) VoipForceStartObject* m_videoObject;
@property(retain, nonatomic) VoipForceStartObject* m_audioObject;
-(void).cxx_destruct;
-(void)startVideo;
-(void)updateVoipVideoStartBlock:(id)block;
-(void)startAudio;
-(void)updateVoipAudioStartBlock:(id)block;
-(id)init;
@end

