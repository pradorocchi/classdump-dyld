/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface SBBBItemInfo : NSObject {

	id _representedObject;

}

@property (nonatomic,readonly) id representedObject;               //@synthesize representedObject=_representedObject - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
+(id)infoWithRepresentedObject:(id)arg1 ;
-(Class)reusableViewClass;
-(float)heightForReusableViewInTableView:(id)arg1 ;
-(void)invalidateCachedLayoutData;
-(void)populateReusableView:(id)arg1 ;
-(id)initWithRepresentedObject:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)identifier;
-(id)representedObject;
@end

