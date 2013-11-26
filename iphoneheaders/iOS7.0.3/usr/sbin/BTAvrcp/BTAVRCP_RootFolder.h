/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/sbin/BTAvrcp
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <BTAvrcp/BTAVRCP_VFSFolder.h>

@class NSMutableArray;

@interface BTAVRCP_RootFolder : BTAVRCP_VFSFolder {

	NSMutableArray* _activeCategories;

}
-(unsigned char)createFolderWithUid:(unsigned long long)arg1 folder:(id*)arg2 ;
-(id)replyItemAtIndex:(unsigned)arg1 attributeIDs:(id)arg2 ;
-(id)replyAttributesForUid:(unsigned long long)arg1 attributeIDs:(id)arg2 ;
-(unsigned char)playItemWithUid:(unsigned long long)arg1 ;
-(void)refreshActiveCategories;
-(id)folderNameForUid:(unsigned long long)arg1 ;
-(unsigned char)folderTypeForUid:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned)childrenCount;
@end

