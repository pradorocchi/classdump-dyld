/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:02:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GAXBackboardServer/GAXAppDelegate.h>

@protocol GAXAppManagerDelegate;
@class , GAXApp, AXAccessQueue, NSString;

@interface GAXAppManager : NSObject <GAXAppDelegate> {

	<GAXAppManagerDelegate>* _delegate;
	GAXApp* _frontmostApp;
	GAXApp* _sessionApp;
	AXAccessQueue* _assertedAccessQueue;

}

@property (assign,nonatomic) <GAXAppManagerDelegate> * delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AXAccessQueue * assertedAccessQueue;               //@synthesize assertedAccessQueue=_assertedAccessQueue - In the implementation block
@property (nonatomic,retain) GAXApp * frontmostApp;                             //@synthesize frontmostApp=_frontmostApp - In the implementation block
@property (nonatomic,retain) GAXApp * sessionApp;                               //@synthesize sessionApp=_sessionApp - In the implementation block
@property (nonatomic,readonly) BOOL frontmostAppIsSessionApp; 
@property (nonatomic,readonly) NSString * backboardFrontmostAppID; 
@property (nonatomic,readonly) NSString * backboardActiveAppID; 
-(void)setSessionApp:(id)arg1 ;
-(id)frontmostApp;
-(id)sessionApp;
-(void)setAssertedAccessQueue:(id)arg1 ;
-(id)assertedAccessQueue;
-(id)initWithAssertedAccessQueue:(id)arg1 ;
-(void)updateFrontmostAppWithIdentifier:(id)arg1 serviceName:(id)arg2 pid:(int)arg3 ;
-(void)settingsDidChangeWithServerMode:(int)arg1 allowsMotion:(BOOL)arg2 ;
-(BOOL)frontmostAppIsSessionApp;
-(void)resetRelaunchAttempts;
-(id)backboardFrontmostAppID;
-(void)updateSessionAppWithIdentifier:(id)arg1 ;
-(void)appDidBecomeInvalid:(id)arg1 ;
-(void)setFrontmostApp:(id)arg1 ;
-(id)backboardActiveAppID;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)delegate;
@end

