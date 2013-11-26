/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SBWindowContextManagerDelegate;
@class , NSString, NSHashTable, NSMapTable;

@interface SBWindowContextManager : NSObject {

	<SBWindowContextManagerDelegate>* _delegate;
	NSString* _identifier;
	NSHashTable* _observers;
	NSMapTable* _screenToOrderedContexts;

}

@property (assign,nonatomic) <SBWindowContextManagerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
-(id)contextsForScreen:(id)arg1 ;
-(id)trackedScreens;
-(unsigned)numberOfContextsForScreen:(id)arg1 ;
-(void)addContext:(id)arg1 ;
-(id)contextWithIdentifier:(unsigned)arg1 screen:(id)arg2 ;
-(void)removeContext:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)delegate;
-(void)removeObserver:(id)arg1 ;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
@end

