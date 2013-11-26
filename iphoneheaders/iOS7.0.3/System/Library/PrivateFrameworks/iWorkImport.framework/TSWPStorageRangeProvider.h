/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSString, NSObject;

@interface TSWPStorageRangeProvider : NSObject {

	NSString* _identifier;
	NSRange _range;
	NSObject* _object;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSRange range;                      //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) NSObject * object;                  //@synthesize object=_object - In the implementation block
-(unsigned)rangeLength;
-(void)nextRange;
-(unsigned)rangeStart;
-(unsigned)rangeEnd;
-(void)dealloc;
-(id)object;
-(id)identifier;
-(NSRange)range;
-(id)initWithIdentifier:(id)arg1 ;
-(id).cxx_construct;
-(void)setRangeStart:(unsigned)arg1 ;
@end

