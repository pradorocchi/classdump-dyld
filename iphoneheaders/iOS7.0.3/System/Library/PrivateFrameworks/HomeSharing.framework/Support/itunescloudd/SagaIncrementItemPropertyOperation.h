/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:07:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class NSString;

@interface SagaIncrementItemPropertyOperation : CloudLibraryOperation {

	NSString* _property;
	unsigned _sagaID;

}
-(id)newPropertyListRepresentation;
-(id)initWithSagaID:(unsigned)arg1 property:(id)arg2 ;
-(void)main;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(void).cxx_destruct;
@end

