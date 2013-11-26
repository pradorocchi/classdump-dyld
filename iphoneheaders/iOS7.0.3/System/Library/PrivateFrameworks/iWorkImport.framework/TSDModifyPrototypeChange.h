/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSDPrototypeChange.h>

@class TSSMutablePropertySet, TSSPropertyMap, TSDPropertySourceForModifyPrototypeChange;

@interface TSDModifyPrototypeChange : NSObject <TSDPrototypeChange> {

	id mPrototype;
	TSSMutablePropertySet* mChangedPropertySet;
	TSSPropertyMap* mChangedPropertyMapBeforeChange;
	TSSPropertyMap* mChangedPropertyMapAfterChange;
	TSDPropertySourceForModifyPrototypeChange* mPropertySourceBeforeChange;
	TSDPropertySourceForModifyPrototypeChange* mPropertySourceAfterChange;
	TSSMutablePropertySet* mPropertiesWithOldValuesRecordedButNotNewValues;

}

@property (readonly) TSSMutablePropertySet * changedPropertySet; 
@property (readonly) TSSPropertyMap * changedPropertyMapBeforeChange; 
@property (readonly) TSSPropertyMap * changedPropertyMapAfterChange; 
@property (readonly) TSSMutablePropertySet * i_propertiesWithOldValuesRecordedButNotNewValues; 
@property (readonly) BOOL prototypeIsBeingReplaced; 
@property (readonly) BOOL prototypeIsBeingModified; 
@property (readonly) BOOL prototypeIsBeingDeleted; 
@property (readonly) id prototype; 
@property (readonly) id replacement; 
@property (readonly) <TSSPropertySource> * propertiesBeforeChange; 
@property (readonly) <TSSPropertySource> * propertiesAfterChange; 
-(BOOL)prototypeIsBeingReplaced;
-(BOOL)prototypeIsBeingModified;
-(id)changedPropertyMapBeforeChange;
-(id)propertiesBeforeChange;
-(id)propertiesAfterChange;
-(BOOL)prototypeIsBeingDeleted;
-(id)initModifyPrototypeChangeForPrototype:(id)arg1 ;
-(id)changedPropertySet;
-(id)i_propertiesWithOldValuesRecordedButNotNewValues;
-(id)changedPropertyMapAfterChange;
-(id)prototype;
-(BOOL)propertyIsChanging:(int)arg1 ;
-(BOOL)propertiesAreChanging:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)replacement;
@end

