/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Game Center~iphone.app/Game Center~iphone
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <Game Center~iphone/Game Center~iphone-Structs.h>
@class GKBubbleControl, GKMasterDetailViewController, GKBubbleSegmentedControl;

@interface GKBubbleSegmentedControlContext : NSObject {

	GKBubbleControl* _gamesBubble;
	GKBubbleControl* _friendsBubble;
	GKBubbleControl* _pointsBubble;
	GKMasterDetailViewController* _masterDetailVC;
	GKBubbleSegmentedControl* _bubbleContainer;
	GKBubbleControl* _targetGamesBubble;
	GKBubbleControl* _targetFriendsBubble;
	GKBubbleControl* _targetPointsBubble;

}

@property (nonatomic,copy) GKBubbleControl * gamesBubble;                                //@synthesize gamesBubble=_gamesBubble - In the implementation block
@property (nonatomic,copy) GKBubbleControl * friendsBubble;                              //@synthesize friendsBubble=_friendsBubble - In the implementation block
@property (nonatomic,copy) GKBubbleControl * pointsBubble;                               //@synthesize pointsBubble=_pointsBubble - In the implementation block
@property (nonatomic,retain) GKMasterDetailViewController * masterDetailVC;              //@synthesize masterDetailVC=_masterDetailVC - In the implementation block
@property (nonatomic,retain) GKBubbleSegmentedControl * bubbleContainer;                 //@synthesize bubbleContainer=_bubbleContainer - In the implementation block
@property (nonatomic,readonly) CGRect masterDetailFrame; 
@property (nonatomic,readonly) CGRect bubbleContainerFrame; 
@property (nonatomic,retain) GKBubbleControl * targetGamesBubble;                        //@synthesize targetGamesBubble=_targetGamesBubble - In the implementation block
@property (nonatomic,retain) GKBubbleControl * targetFriendsBubble;                      //@synthesize targetFriendsBubble=_targetFriendsBubble - In the implementation block
@property (nonatomic,retain) GKBubbleControl * targetPointsBubble;                       //@synthesize targetPointsBubble=_targetPointsBubble - In the implementation block
-(CGRect)translateBubbleContainerFrame:(CGRect)arg1 ;
-(CGRect)translateBubbleToOurSystemWithFrame:(CGRect)arg1 zPosition:(float)arg2 superlayer:(id)arg3 ;
-(id)dupeBubble:(id)arg1 ;
-(void)setTargetGamesBubble:(id)arg1 ;
-(void)setTargetFriendsBubble:(id)arg1 ;
-(void)setTargetPointsBubble:(id)arg1 ;
-(CGRect)masterDetailFrame;
-(CGRect)bubbleContainerFrame;
-(CGRect)translateBubbleToOurSystem:(id)arg1 ;
-(void)setPointsBubble:(id)arg1 ;
-(id)pointsBubble;
-(id)masterDetailVC;
-(void)setMasterDetailVC:(id)arg1 ;
-(id)targetGamesBubble;
-(id)targetFriendsBubble;
-(id)targetPointsBubble;
-(id)gamesBubble;
-(void)setGamesBubble:(id)arg1 ;
-(id)friendsBubble;
-(void)setFriendsBubble:(id)arg1 ;
-(id)bubbleContainer;
-(void)setBubbleContainer:(id)arg1 ;
-(void)dealloc;
@end

