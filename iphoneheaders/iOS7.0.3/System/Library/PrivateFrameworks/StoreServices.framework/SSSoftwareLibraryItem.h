/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:59 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreServices/SSXPCCoding.h>

@class NSMutableDictionary;

@interface SSSoftwareLibraryItem : NSObject <SSXPCCoding> {

	NSMutableDictionary* _etags;
	BOOL _profileValidated;
	NSMutableDictionary* _propertyValues;

}

@property (assign,getter=isProfileValidated,nonatomic) BOOL profileValidated;              //@synthesize profileValidated=_profileValidated - In the implementation block
-(void)dealloc;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(id)valueForProperty:(id)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)ETagForAssetType:(id)arg1 ;
-(BOOL)setETag:(id)arg1 forAssetType:(id)arg2 error:(id*)arg3 ;
-(id)_initWithITunesMetadata:(id)arg1 ;
-(BOOL)isProfileValidated;
-(void)setProfileValidated:(BOOL)arg1 ;
@end

