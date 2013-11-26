/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/BBRemoteDataProvider.h>

@class BBSectionInfo;

@interface SBNotificationCenterDataProvider : NSObject <BBRemoteDataProvider> {

	BBSectionInfo* _sectionInfo;

}
+(id)notificationCenterDataProviderWithSectionInfo:(id)arg1 ;
-(id)initWithSectionInfo:(id)arg1 ;
-(void)dealloc;
-(id)sectionIdentifier;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)defaultSectionInfo;
-(id)sortDescriptors;
@end

