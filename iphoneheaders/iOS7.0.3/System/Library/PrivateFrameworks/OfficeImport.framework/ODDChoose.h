/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/ODDLayoutObject.h>

@class NSMutableArray, ODDOtherwise;

@interface ODDChoose : ODDLayoutObject {

	NSMutableArray* mWhens;
	ODDOtherwise* mOtherwise;

}
-(void)dealloc;
-(id)init;
-(id)whens;
-(void)addWhen:(id)arg1 ;
-(id)otherwise;
-(void)setOtherwise:(id)arg1 ;
@end

