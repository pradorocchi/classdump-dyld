/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:52 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CalDAV/CalDAVContainerSyncTaskGroup.h>

@class NSArray, NSString, CoreDAVItemParserMapping, NSMutableDictionary, NSDictionary;

@interface CalDAVContainerChecksumSyncTaskGroup : CalDAVContainerSyncTaskGroup {

	NSArray* _preferredChecksumVersions;
	NSString* _unusedSyncToken;
	NSString* _unusedCTag;
	CoreDAVItemParserMapping* _bestServerChecksumVersion;
	NSMutableDictionary* _serverURLsToChecksums;
	NSDictionary* _localURLsToChecksums;
	BOOL _mismatchDetected;

}

@property (nonatomic,retain) NSArray * preferredChecksumVersions;                                  //@synthesize preferredChecksumVersions=_preferredChecksumVersions - In the implementation block
@property (assign,nonatomic,@dynamic) <CalDAVChecksumLocalDBInfoProvider> * delegate; 
@property (nonatomic,retain) CoreDAVItemParserMapping * bestServerChecksumVersion;                 //@synthesize bestServerChecksumVersion=_bestServerChecksumVersion - In the implementation block
@property (readonly) BOOL mismatchDetected;                                                        //@synthesize mismatchDetected=_mismatchDetected - In the implementation block
-(void)dealloc;
-(id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 accountInfoProvider:(id)arg5 taskManager:(id)arg6 appSpecificCalendarItemClass:(Class)arg7 ;
-(void)setBestServerChecksumVersion:(id)arg1 ;
-(id)_calculatedCalendarHome;
-(void)_handleResponseToChecksumPropfind:(id)arg1 ;
-(void)_serverChecksumSupportPropfind;
-(BOOL)_hadOutOfDateCollectionToken;
-(id)preferredChecksumVersions;
-(void)setPreferredChecksumVersions:(id)arg1 ;
-(id)bestServerChecksumVersion;
-(BOOL)mismatchDetected;
-(void)startTaskGroup;
-(id)copyAdditionalResourcePropertiesToFetch;
-(BOOL)shouldDownloadResource:(id)arg1 localETag:(id)arg2 serverETag:(id)arg3 ;
-(void)deleteResourceURLs:(id)arg1 ;
-(void)receivedPropertiesToValues:(id)arg1 forURL:(id)arg2 ;
@end

