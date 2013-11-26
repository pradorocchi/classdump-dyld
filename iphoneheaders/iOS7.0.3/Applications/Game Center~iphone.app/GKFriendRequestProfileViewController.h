/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Game Center~iphone.app/Game Center~iphone
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Game Center~iphone/GKPlayerProfileCollectionViewController.h>

@class GKPlayer;

@interface GKFriendRequestProfileViewController : GKPlayerProfileCollectionViewController {

	BOOL _processed;
	BOOL _didFloatInBubbles;

}

@property (nonatomic,retain) GKPlayer * player; 
@property (assign,nonatomic) BOOL processed;                      //@synthesize processed=_processed - In the implementation block
@property (assign,nonatomic) BOOL didFloatInBubbles;              //@synthesize didFloatInBubbles=_didFloatInBubbles - In the implementation block
+(Class)headerViewClass;
-(void)setProcessed:(BOOL)arg1 ;
-(void)acceptedFriendRequest:(BOOL)arg1 withError:(id)arg2 ;
-(void)acceptFriendRequest;
-(void)ignoreFriendRequest;
-(BOOL)processed;
-(void)configureDataSource;
-(void)floatInBubbles;
-(void)animateOutBubbleWithFocus:(int)arg1 completion:(/*^block*/ id)arg2 ;
-(BOOL)didFloatInBubbles;
-(void)setDidFloatInBubbles:(BOOL)arg1 ;
-(void)willAnimateAppearingWithBubbleFlow;
-(id)init;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
@end

