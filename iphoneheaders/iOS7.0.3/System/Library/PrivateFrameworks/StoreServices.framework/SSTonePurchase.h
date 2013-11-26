/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:57 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSPurchase.h>
#import <StoreServices/SSXPCCoding.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSCopying.h>

@class NSArray, NSNumber, NSString;

@interface SSTonePurchase : SSPurchase <SSXPCCoding, NSCoding, NSCopying> {

	NSArray* _allowedToneStyles;
	NSNumber* _assigneeIdentifier;
	NSString* _assigneeToneStyle;
	BOOL _shouldMakeDefaultRingtone;
	BOOL _shouldMakeDefaultTextTone;

}

@property (copy) NSArray * allowedToneStyles; 
@property (retain) NSNumber * assigneeIdentifier; 
@property (copy) NSString * assigneeToneStyle; 
@property (assign) BOOL shouldMakeDefaultRingtone; 
@property (assign) BOOL shouldMakeDefaultTextTone; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)_setValuesUsingDatabaseEncoding:(id)arg1 ;
-(void)_addEntriesToDatabaseEncoding:(id)arg1 ;
-(void)setAssigneeIdentifier:(id)arg1 ;
-(void)setAssigneeToneStyle:(id)arg1 ;
-(void)setShouldMakeDefaultRingtone:(BOOL)arg1 ;
-(void)setShouldMakeDefaultTextTone:(BOOL)arg1 ;
-(id)assigneeIdentifier;
-(id)assigneeToneStyle;
-(BOOL)shouldMakeDefaultRingtone;
-(BOOL)shouldMakeDefaultTextTone;
-(void)setAllowedToneStyles:(id)arg1 ;
-(id)initWithItem:(id)arg1 offer:(id)arg2 ;
-(id)allowedToneStyles;
@end

