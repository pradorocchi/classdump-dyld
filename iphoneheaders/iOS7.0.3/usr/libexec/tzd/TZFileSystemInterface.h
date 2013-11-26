/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/tzd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSURL;

@interface TZFileSystemInterface : NSObject {

	NSString* _tzDataVersion;
	NSURL* _cachedTZDataLocation;
	NSURL* _latestTZDataLink;
	NSURL* _latestZoneInfoDir;
	NSURL* _originalZoneinfoDirectoryURL;
	NSURL* _originalICUDirectoryURL;
	NSURL* _originalICUFileURL;
	NSURL* _systemICUDataFileURL;
	NSString* _systemICUChecksum;
	NSURL* _zoneinfoDestinationURL;
	NSURL* _ICUDestinationDirectoryURL;
	NSURL* _ICUDestinationFileURL;
	NSURL* _dataExpansionParentURL;
	NSURL* _dataExpansionVersionDirectory;
	NSURL* _temporaryDirectory;

}

@property (retain) NSString * tzDataVersion;                           //@synthesize tzDataVersion=_tzDataVersion - In the implementation block
@property (retain) NSURL * cachedTZDataLocation;                       //@synthesize cachedTZDataLocation=_cachedTZDataLocation - In the implementation block
@property (retain) NSURL * latestTZDataLink;                           //@synthesize latestTZDataLink=_latestTZDataLink - In the implementation block
@property (retain) NSURL * latestZoneInfoDir;                          //@synthesize latestZoneInfoDir=_latestZoneInfoDir - In the implementation block
@property (retain) NSURL * originalZoneinfoDirectoryURL;               //@synthesize originalZoneinfoDirectoryURL=_originalZoneinfoDirectoryURL - In the implementation block
@property (retain) NSURL * originalICUDirectoryURL;                    //@synthesize originalICUDirectoryURL=_originalICUDirectoryURL - In the implementation block
@property (retain) NSURL * originalICUFileURL;                         //@synthesize originalICUFileURL=_originalICUFileURL - In the implementation block
@property (retain) NSURL * systemICUDataFileURL;                       //@synthesize systemICUDataFileURL=_systemICUDataFileURL - In the implementation block
@property (retain) NSString * systemICUChecksum;                       //@synthesize systemICUChecksum=_systemICUChecksum - In the implementation block
@property (retain) NSURL * zoneinfoDestinationURL;                     //@synthesize zoneinfoDestinationURL=_zoneinfoDestinationURL - In the implementation block
@property (retain) NSURL * ICUDestinationDirectoryURL;                 //@synthesize ICUDestinationDirectoryURL=_ICUDestinationDirectoryURL - In the implementation block
@property (retain) NSURL * ICUDestinationFileURL;                      //@synthesize ICUDestinationFileURL=_ICUDestinationFileURL - In the implementation block
@property (retain) NSURL * dataExpansionParentURL;                     //@synthesize dataExpansionParentURL=_dataExpansionParentURL - In the implementation block
@property (retain) NSURL * dataExpansionVersionDirectory;              //@synthesize dataExpansionVersionDirectory=_dataExpansionVersionDirectory - In the implementation block
@property (retain) NSURL * temporaryDirectory;                         //@synthesize temporaryDirectory=_temporaryDirectory - In the implementation block
+(id)_cachedLatestTZDataWithError:(id*)arg1 ;
+(id)_installedTZDataversionWithErrorWithError:(id*)arg1 ;
+(id)fetchSystemICUDataFileURLWithError:(id*)arg1 ;
+(id)getBaselineICUChecksumWithError:(id*)arg1 ;
+(id)createTemporaryExpansionDirectoryPathWithError:(id*)arg1 ;
+(BOOL)_validateLatestLink:(id)arg1 ;
+(id)_versionStringFromZoneinfoDirectory:(id)arg1 withError:(id*)arg2 ;
+(id)_stringWithContentsOfFileAtURL:(id)arg1 error:(id*)arg2 ;
+(id)fileSystemInterfaceWithError:(id*)arg1 ;
-(id)tzDataVersion;
-(BOOL)createExpansionDirectoryWithTZDataVersion:(id)arg1 withError:(id*)arg2 ;
-(id)dataExpansionParentURL;
-(id)dataExpansionVersionDirectory;
-(void)setZoneinfoDestinationURL:(id)arg1 ;
-(id)originalZoneinfoDirectoryURL;
-(id)zoneinfoDestinationURL;
-(id)systemICUDataFileURL;
-(id)originalICUDirectoryURL;
-(void)setOriginalICUFileURL:(id)arg1 ;
-(id)originalICUFileURL;
-(void)setICUDestinationFileURL:(id)arg1 ;
-(id)ICUDestinationFileURL;
-(id)cachedTZDataLocation;
-(id)latestTZDataLink;
-(id)_initWithLatestTZDataLink:(id)arg1 CachedTZData:(id)arg2 TZDataVersion:(id)arg3 systemICUChecksum:(id)arg4 systemICUDataFileURL:(id)arg5 originalZoneinfoDirectoryPath:(id)arg6 originalICUDirectoryPath:(id)arg7 temporaryFilePath:(id)arg8 ;
-(void)setDataExpansionVersionDirectory:(id)arg1 ;
-(void)setTzDataVersion:(id)arg1 ;
-(void)setCachedTZDataLocation:(id)arg1 ;
-(void)setLatestTZDataLink:(id)arg1 ;
-(id)latestZoneInfoDir;
-(void)setLatestZoneInfoDir:(id)arg1 ;
-(void)setOriginalZoneinfoDirectoryURL:(id)arg1 ;
-(void)setOriginalICUDirectoryURL:(id)arg1 ;
-(void)setSystemICUDataFileURL:(id)arg1 ;
-(id)systemICUChecksum;
-(void)setSystemICUChecksum:(id)arg1 ;
-(id)ICUDestinationDirectoryURL;
-(void)setICUDestinationDirectoryURL:(id)arg1 ;
-(void)setDataExpansionParentURL:(id)arg1 ;
-(id)temporaryDirectory;
-(void)setTemporaryDirectory:(id)arg1 ;
-(void).cxx_destruct;
@end

