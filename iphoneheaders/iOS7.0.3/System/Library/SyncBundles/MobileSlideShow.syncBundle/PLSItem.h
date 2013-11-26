/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:11:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SyncBundles/MobileSlideShow.syncBundle/MobileSlideShow
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSCoding.h>
#import <MobileSlideShow/PLSTransportCoding.h>

@class NSString, NSDictionary;

@interface PLSItem : NSObject <NSCoding, PLSTransportCoding> {

	NSString* _uuid;
	NSDictionary* _hostInfo;
	id _userInfo;

}

@property (nonatomic,retain) NSString * uuid;                      //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSDictionary * hostInfo;              //@synthesize hostInfo=_hostInfo - In the implementation block
@property (nonatomic,retain) id userInfo;                          //@synthesize userInfo=_userInfo - In the implementation block
-(void)setHostInfo:(id)arg1 ;
-(id)_itemType;
-(id)hostInfo;
-(id)initFromPropertyList:(id)arg1 ;
-(id)initWithUUID:(id)arg1 ;
-(id)propertyList;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)userInfo;
-(void)setUserInfo:(id)arg1 ;
-(id)uuid;
-(void)setUuid:(id)arg1 ;
@end

