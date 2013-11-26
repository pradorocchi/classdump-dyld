/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:22 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DataDetectorsUI/DDTelephoneNumberAction.h>

@interface DDCallAction : DDTelephoneNumberAction
-(id)localizedName;
-(void)perform;
-(id)_UIDsAndLabelsMatchingPhoneNumber:(id)arg1 inAddressBook:(void*)arg2 ;
-(id)_nameForPerson:(void*)arg1 ;
-(bool)_retrieveNameForDestinationNumber:(id*)arg1 label:(id*)arg2 ;
-(BOOL)_titleFitsInActionSheet:(id)arg1 ;
@end

