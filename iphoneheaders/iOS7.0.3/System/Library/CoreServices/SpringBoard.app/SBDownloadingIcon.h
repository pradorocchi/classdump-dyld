/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLeafIcon.h>

@class SBApplicationPlaceholder;

@interface SBDownloadingIcon : SBLeafIcon {

	BOOL _wasUninstalledByUser;
	BOOL _isNewsstandDownload;
	SBApplicationPlaceholder* _appPlaceholder;

}
+(id)leafIdentifierForApplicationPlaceholderBundleID:(id)arg1 ;
+(id)leafIdentifierForApplicationPlaceholder:(id)arg1 ;
-(void)_showAlertForError:(id)arg1 ;
-(BOOL)iconAppearsInNewsstand;
-(void)setNewsstandDownload:(BOOL)arg1 ;
-(id)homescreenIconImage;
-(BOOL)matchesApplicationIcon:(id)arg1 ;
-(void)completeUninstall;
-(id)initWithApplicationPlaceholder:(id)arg1 ;
-(id)identifierForCorrespondingApplicationIcon;
-(BOOL)matchesRepresentation:(id)arg1 ;
-(BOOL)isNewsstandDownload;
-(id)realDisplayName;
-(void)setUninstalledByUser:(BOOL)arg1 ;
-(id)uninstallAlertTitle;
-(id)uninstallAlertBody;
-(id)uninstallAlertConfirmTitle;
-(id)uninstallAlertCancelTitle;
-(void)setApplicationPlaceholder:(id)arg1 ;
-(id)gridCellImage;
-(id)_darkenedIconImageForImage:(id)arg1 ;
-(BOOL)uninstalledByUser;
-(id)appPlaceholder;
-(void)cancelDownload;
-(void)dealloc;
-(id)description;
-(id)representation;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)reloadForStatusChange;
@end

