/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:50 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class BBBulletin;

@interface BBSyncDelayedDismissal : NSObject {

	BBBulletin* _bulletin;
	unsigned _feeds;

}

@property (nonatomic,retain) BBBulletin * bulletin;              //@synthesize bulletin=_bulletin - In the implementation block
@property (assign,nonatomic) unsigned feeds;                     //@synthesize feeds=_feeds - In the implementation block
-(id)bulletin;
-(void)setBulletin:(id)arg1 ;
-(unsigned)feeds;
-(void)setFeeds:(unsigned)arg1 ;
@end

