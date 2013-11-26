/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:36 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class SCRCArgumentHolderPrivate;

@interface SCRCArgumentHolder : NSObject {

	SCRCArgumentHolderPrivate* _private;

}
-(id)option;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(id)target;
-(void)setAction:(SEL)arg1 ;
-(int)compare:(id)arg1 ;
-(id)argumentDescription;
-(void)setOption:(id)arg1 ;
-(void)setArgument:(id)arg1 ;
-(void)setArgumentDescription:(id)arg1 ;
-(void)setIsRequired:(BOOL)arg1 ;
-(BOOL)process;
-(id)argument;
-(BOOL)isRequired;
@end

