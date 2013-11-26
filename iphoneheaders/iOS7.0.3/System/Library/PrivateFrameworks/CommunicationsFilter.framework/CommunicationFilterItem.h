/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:58 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <CommunicationsFilter/CommunicationsFilter-Structs.h>
@class NSString;

@interface CommunicationFilterItem : NSObject {

	CFPhoneNumberRef _phoneNumber;
	NSString* _emailAddress;

}

@property (nonatomic,readonly) CFPhoneNumberRef phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,readonly) NSString * emailAddress;                   //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,readonly) NSString * unformattedID; 
-(id)initWithEmailAddress:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(CFPhoneNumberRef)phoneNumber;
-(id)dictionaryRepresentation;
-(BOOL)matchesFilterItem:(id)arg1 ;
-(id)_dictionaryRepresentationWithRedaction;
-(BOOL)_acceptItemType:(id)arg1 ;
-(BOOL)_acceptVersion:(id)arg1 ;
-(id)initWithPhoneNumber:(CFPhoneNumberRef)arg1 ;
-(id)unformattedID;
-(id)emailAddress;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(BOOL)isPhoneNumber;
@end

