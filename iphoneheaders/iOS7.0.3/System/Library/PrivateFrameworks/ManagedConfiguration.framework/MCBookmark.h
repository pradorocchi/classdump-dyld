/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:59 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSURL, NSString;

@interface MCBookmark : NSObject <NSCopying> {

	NSURL* _URL;
	NSString* _title;
	NSString* _path;

}

@property (nonatomic,retain) NSURL * URL;                   //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * path;               //@synthesize path=_path - In the implementation block
-(void)setTitle:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)path;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)title;
-(id)URL;
-(void)setPath:(id)arg1 ;
-(void)setURL:(id)arg1 ;
-(id)initWithSerializableDictionary:(id)arg1 ;
-(id)serializableDictionary;
-(void).cxx_destruct;
@end

