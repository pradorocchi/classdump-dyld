/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:59 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <CoreFoundation/NSInputStream.h>

@class NSArray, NSError;

@interface SUInputSourceInputStream : NSInputStream {

	/*function pointer*/ void* _clientCallback;
	SCD_Struct_SU19* _clientContext;
	id _delegate;
	NSArray* _inputSources;
	int _inputSourceIndex;
	CFRunLoopRef _runLoop;
	CFRunLoopSourceRef _runLoopSource;
	BOOL _sentAtEndEvent;
	BOOL _sentOpenEvent;
	NSError* _streamError;
	unsigned _streamStatus;

}

@property (nonatomic,readonly) NSArray * inputSources;              //@synthesize inputSources=_inputSources - In the implementation block
-(id)initWithFileAtPath:(id)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(unsigned)streamStatus;
-(id)streamError;
-(int)read:(char*)arg1 maxLength:(unsigned)arg2 ;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned*)arg2 ;
-(BOOL)hasBytesAvailable;
-(BOOL)_setCFClientFlags:(unsigned long)arg1 callback:(/*function pointer*/ void*)arg2 context:(SCD_Struct_SU19*)arg3 ;
-(void)_scheduleInCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(void)_unscheduleFromCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)initWithData:(id)arg1 ;
-(void)close;
-(id)initWithURL:(id)arg1 ;
-(void)_scheduleCallback;
-(void)open;
-(id)initWithInputSources:(id)arg1 ;
-(void)_close;
-(id)_currentInputSource;
-(void)_setStreamError:(id)arg1 ;
-(void)_streamEventCallback;
-(id)inputSources;
@end

