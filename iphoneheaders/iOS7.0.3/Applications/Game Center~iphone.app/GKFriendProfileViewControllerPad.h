/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Game Center~iphone.app/Game Center~iphone
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Game Center~iphone/GKPlayerProfileCollectionViewController.h>

@class GKValueWithCaptionBubbleControl, GKPlayer, GKBubbleSegmentedControlFloatInAnimatorView, GKBubbleSegmentedHeaderView;

@interface GKFriendProfileViewControllerPad : GKPlayerProfileCollectionViewController {

	BOOL _readyToFloatIn;
	GKValueWithCaptionBubbleControl* _gamesBubble;
	GKValueWithCaptionBubbleControl* _pointsBubble;
	GKValueWithCaptionBubbleControl* _friendsBubble;
	GKPlayer* _lastPlayer;
	unsigned _previousSelectedSegmentIndex;
	GKBubbleSegmentedControlFloatInAnimatorView* _bubbleAnimatorView;
	/*^block*/ id _rotationUnlockBlock;
	GKBubbleSegmentedHeaderView* _segmentedHeaderView;

}

@property (nonatomic,retain) GKValueWithCaptionBubbleControl * gamesBubble;                                 //@synthesize gamesBubble=_gamesBubble - In the implementation block
@property (nonatomic,retain) GKValueWithCaptionBubbleControl * pointsBubble;                                //@synthesize pointsBubble=_pointsBubble - In the implementation block
@property (nonatomic,retain) GKValueWithCaptionBubbleControl * friendsBubble;                               //@synthesize friendsBubble=_friendsBubble - In the implementation block
@property (nonatomic,retain) GKPlayer * lastPlayer;                                                         //@synthesize lastPlayer=_lastPlayer - In the implementation block
@property (assign,nonatomic) unsigned previousSelectedSegmentIndex;                                         //@synthesize previousSelectedSegmentIndex=_previousSelectedSegmentIndex - In the implementation block
@property (nonatomic,retain) GKBubbleSegmentedControlFloatInAnimatorView * bubbleAnimatorView;              //@synthesize bubbleAnimatorView=_bubbleAnimatorView - In the implementation block
@property (nonatomic,copy) id rotationUnlockBlock;                                                          //@synthesize rotationUnlockBlock=_rotationUnlockBlock - In the implementation block
@property (nonatomic,retain) GKBubbleSegmentedHeaderView * segmentedHeaderView;                             //@synthesize segmentedHeaderView=_segmentedHeaderView - In the implementation block
@property (assign,nonatomic) BOOL readyToFloatIn;                                                           //@synthesize readyToFloatIn=_readyToFloatIn - In the implementation block
-(void)setPointsBubble:(id)arg1 ;
-(id)pointsBubble;
-(float)preferredHeaderHeight;
-(void)didTouchActionsButton;
-(void)setRotationUnlockBlock:(/*^block*/ id)arg1 ;
-(void)displaySegmentBubbles;
-(void)setBubbleAnimatorView:(id)arg1 ;
-(void)_floatInSegmentBubbles;
-(void)setReadyToFloatIn:(BOOL)arg1 ;
-(id)lastPlayer;
-(void)didSelectDifferentSegment:(id)arg1 ;
-(void)setSegmentedHeaderView:(id)arg1 ;
-(void)setLastPlayer:(id)arg1 ;
-(void)prepareToFloatInSegmentBubbles;
-(void)floatInSegmentBubbles;
-(unsigned)previousSelectedSegmentIndex;
-(void)setPreviousSelectedSegmentIndex:(unsigned)arg1 ;
-(id)bubbleAnimatorView;
-(/*^block*/ id)rotationUnlockBlock;
-(id)segmentedHeaderView;
-(BOOL)readyToFloatIn;
-(void)didUpdateModel;
-(id)gamesBubble;
-(void)setGamesBubble:(id)arg1 ;
-(id)friendsBubble;
-(void)setFriendsBubble:(id)arg1 ;
-(void)configureViewFactories;
-(void)updateMetrics;
-(void)didEnterLoadedState;
-(void)dealloc;
-(id)init;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

