/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:30 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreData/NSPropertyStoreMapping.h>

@interface NSAttributeStoreMapping : NSPropertyStoreMapping {

	int _externalType;
	unsigned _externalPrecision;
	int _externalScale;

}
-(id)sqlType;
-(id)initWithProperty:(id)arg1 ;
-(void)setExternalType:(int)arg1 ;
-(void)setExternalPrecision:(unsigned)arg1 ;
-(void)setExternalScale:(int)arg1 ;
-(int)externalType;
-(unsigned)externalPrecision;
-(int)externalScale;
-(id)attribute;
-(id)columnDefinition;
-(BOOL)isEqual:(id)arg1 ;
@end

