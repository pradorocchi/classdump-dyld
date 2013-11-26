/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:48 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSSecureCoding.h>

@class NSSet;

@interface BBSectionIcon : NSObject <NSCopying, NSSecureCoding> {

	NSSet* _variants;

}

@property (nonatomic,copy) NSSet * variants;              //@synthesize variants=_variants - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)_bestVariantForFormat:(int)arg1 ;
-(id)_bestVariantForUIFormat:(int)arg1 ;
-(id)variants;
-(void)setVariants:(id)arg1 ;
-(void)addVariant:(id)arg1 ;
@end

