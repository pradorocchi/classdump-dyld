/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <libTextInputCore.dylib/libTextInputCore.dylib-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface TIInputMode : NSObject <NSCopying> {

	NSString* _languageWithRegion;
	NSString* _variant;
	Class _inputManagerClass;
	NSString* _normalizedIdentifier;

}

@property (nonatomic,readonly) NSString * normalizedIdentifier;              //@synthesize normalizedIdentifier=_normalizedIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * languageWithRegion; 
@property (nonatomic,readonly) NSString * variant; 
@property (nonatomic,readonly) Class inputManagerClass; 
@property (nonatomic,readonly) BOOL spaceAutocorrectionEnabled; 
+(id)inputModeWithIdentifier:(id)arg1 ;
-(id)variant;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)initWithNormalizedIdentifier:(id)arg1 ;
-(id)normalizedIdentifier;
-(id)languageWithRegion;
-(Class)inputManagerClass;
-(BOOL)spaceAutocorrectionEnabled;
@end

