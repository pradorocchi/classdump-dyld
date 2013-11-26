/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:20 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTSPushViewControllerRowAction.h>

@class NSString;

@interface PTSDrillDownRowAction : PTSPushViewControllerRowAction {

	NSString* _settingsKeyPath;

}

@property (nonatomic,copy) NSString * settingsKeyPath;              //@synthesize settingsKeyPath=_settingsKeyPath - In the implementation block
+(id)actionWithSettingsKeyPath:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)resolveTemplatesWithIndex:(unsigned)arg1 ;
-(void)setSettingsKeyPath:(id)arg1 ;
-(id)settingsKeyPath;
-(void).cxx_destruct;
@end

