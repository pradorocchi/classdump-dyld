/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBStatusBarStateProvider.h>

@interface SBStarkStatusBarStateProvider : SBStatusBarStateProvider
+(BOOL)_itemIsIgnored:(int)arg1 ;
-(BOOL)_shouldPostForVisitedItem:(int)arg1 withUpdates:(BOOL)arg2 toAggregatorData:(const SCD_Struct_SB37*)arg3 ;
-(void)_composePostDataFromAggregatorData:(SCD_Struct_SB37*)arg1 ;
-(BOOL)_shouldPostForUpdatesToNonItemData:(const SCD_Struct_SB37*)arg1 ;
@end

