/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:38 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSMutableArray, NSArray;

@interface CAState : NSObject <NSCoding, NSCopying> {

	NSString* _name;
	NSString* _basedOn;
	NSMutableArray* _elements;
	double _nextDelay;
	double _previousDelay;
	BOOL _enabled;
	BOOL _locked;
	BOOL _initial;

}

@property (nonatomic,copy) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (copy) NSString * basedOn;                                   //@synthesize basedOn=_basedOn - In the implementation block
@property (getter=isEnabled) BOOL enabled;                             //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy) NSArray * elements; 
@property (assign) double nextDelay;                                   //@synthesize nextDelay=_nextDelay - In the implementation block
@property (assign) double previousDelay;                               //@synthesize previousDelay=_previousDelay - In the implementation block
@property (assign,getter=isLocked,nonatomic) BOOL locked;              //@synthesize locked=_locked - In the implementation block
@property (getter=isInitial) BOOL initial;                             //@synthesize initial=_initial - In the implementation block
+(void)CAMLParserStartElement:(id)arg1 ;
-(id)basedOn;
-(void)removeElement:(id)arg1 ;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(void)setBasedOn:(id)arg1 ;
-(double)nextDelay;
-(void)setNextDelay:(double)arg1 ;
-(double)previousDelay;
-(void)setPreviousDelay:(double)arg1 ;
-(BOOL)isInitial;
-(void)setInitial:(BOOL)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)debugDescription;
-(BOOL)isLocked;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setName:(id)arg1 ;
-(BOOL)isEnabled;
-(id)name;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setLocked:(BOOL)arg1 ;
-(id)elements;
-(void)setElements:(id)arg1 ;
-(void)foreachLayer:(/*^block*/ id)arg1 ;
-(void)addElement:(id)arg1 ;
@end

