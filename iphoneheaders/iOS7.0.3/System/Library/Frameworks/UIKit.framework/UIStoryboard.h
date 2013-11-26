/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:13 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSBundle, NSString, NSDictionary, NSMutableDictionary;

@interface UIStoryboard : NSObject {

	NSBundle* bundle;
	NSString* storyboardFileName;
	NSDictionary* identifierToNibNameMap;
	NSString* designatedEntryPointIdentifier;
	NSMutableDictionary* identifierToUINibMap;

}

@property (nonatomic,readonly) NSBundle * bundle; 
@property (readonly) NSString * name; 
@property (nonatomic,readonly) NSString * storyboardFileName; 
@property (nonatomic,readonly) NSDictionary * identifierToNibNameMap; 
@property (nonatomic,readonly) NSString * designatedEntryPointIdentifier; 
@property (nonatomic,readonly) NSMutableDictionary * identifierToUINibMap; 
+(id)storyboardWithName:(id)arg1 bundle:(id)arg2 ;
-(void)dealloc;
-(id)instantiateInitialViewController;
-(id)instantiateViewControllerWithIdentifier:(id)arg1 ;
-(id)name;
-(BOOL)containsNibNamed:(id)arg1 ;
-(id)nibForStoryboardNibNamed:(id)arg1 ;
-(id)bundle;
-(id)identifierForStringsFile;
-(id)initWithBundle:(id)arg1 storyboardFileName:(id)arg2 identifierToNibNameMap:(id)arg3 designatedEntryPointIdentifier:(id)arg4 ;
-(id)storyboardFileName;
-(id)identifierToNibNameMap;
-(id)nibForViewControllerWithIdentifier:(id)arg1 ;
-(id)designatedEntryPointIdentifier;
-(id)identifierToUINibMap;
@end

