/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:33 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSURL, NSBundle, NSString, NSDictionary;

@interface NSValidationErrorLocalizationPolicy : NSObject <NSCopying> {

	NSURL* _url;
	NSBundle* _localizationBundle;
	NSString* _modelStringsFileName;
	NSDictionary* _localizationDictionary;
	BOOL _hasSetLocalizationDictionary;

}
-(id)localizedEntityNameForEntity:(id)arg1 ;
-(id)localizedPropertyNameForProperty:(id)arg1 ;
-(id)localizedModelStringForKey:(id)arg1 ;
-(void)_ensureFullLocalizationDictionaryIsLoaded;
-(id)localizationDictionary;
-(void)setLocalizationDictionary:(id)arg1 ;
-(void)_ensureLocalizationDictionaryIsInitialized;
-(id)_localizedStringForKey:(id)arg1 value:(void*)arg2 ;
-(id)_cachedObjectForKey:(id)arg1 value:(void*)arg2 ;
-(id)_localizedPropertyNameForProperty:(id)arg1 entity:(id)arg2 ;
-(void)dealloc;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)initWithURL:(id)arg1 ;
@end

