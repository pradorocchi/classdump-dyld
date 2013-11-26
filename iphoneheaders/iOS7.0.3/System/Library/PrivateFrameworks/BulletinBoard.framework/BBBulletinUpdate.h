/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:48 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSCoding.h>

@class BBBulletin;

@interface BBBulletinUpdate : NSObject <NSCoding> {

	BBBulletin* _bulletin;
	unsigned _transactionID;
	int _updateType;

}

@property (nonatomic,readonly) BBBulletin * bulletin;               //@synthesize bulletin=_bulletin - In the implementation block
@property (nonatomic,readonly) int updateType;                      //@synthesize updateType=_updateType - In the implementation block
@property (nonatomic,readonly) unsigned transactionID;              //@synthesize transactionID=_transactionID - In the implementation block
-(int)updateType;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)bulletin;
-(unsigned)transactionID;
-(id)initWithBulletin:(id)arg1 updateType:(int)arg2 transactionID:(unsigned)arg3 ;
@end

