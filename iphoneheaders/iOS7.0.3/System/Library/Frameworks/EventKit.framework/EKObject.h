/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:46 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableDictionary, EKPersistentObject, NSString, EKObjectRelation, NSMutableSet;

@interface EKObject : NSObject {

	NSMutableDictionary* _dirtyProperties;
	NSMutableDictionary* _cachedProperties;
	EKPersistentObject* _persistentObject;
	NSString* _propertyName;
	EKObjectRelation* _owningRelation;
	NSMutableDictionary* _relations;
	NSMutableSet* _weakRelations;
	unsigned long _flags;

}

@property (assign,nonatomic) EKObjectRelation * owningRelation;                   //@synthesize owningRelation=_owningRelation - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dirtyProperties;               //@synthesize dirtyProperties=_dirtyProperties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedProperties;              //@synthesize cachedProperties=_cachedProperties - In the implementation block
@property (nonatomic,retain) EKPersistentObject * persistentObject;               //@synthesize persistentObject=_persistentObject - In the implementation block
@property (nonatomic,copy) NSString * propertyName;                               //@synthesize propertyName=_propertyName - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * relations;                     //@synthesize relations=_relations - In the implementation block
@property (nonatomic,retain) NSMutableSet * weakRelations;                        //@synthesize weakRelations=_weakRelations - In the implementation block
@property (assign,nonatomic) unsigned long flags;                                 //@synthesize flags=_flags - In the implementation block
-(void)setPropertyName:(id)arg1 ;
-(id)relations;
-(BOOL)isNew;
-(id)initWithPersistentObject:(id)arg1 ;
-(id)eventStore;
-(void)didCommit;
-(BOOL)validate:(id*)arg1 ;
-(id)persistentObject;
-(id)persistentOrDirtyPropertyForKey:(id)arg1 ;
-(void)setPropertyValue:(id)arg1 forKey:(id)arg2 ;
-(id)relationForKey:(id)arg1 ;
-(id)dirtyProperties;
-(BOOL)isPropertyDirty:(id)arg1 ;
-(void)insertPersistentObjectIfNeeded;
-(void)updatePersistentObject;
-(void)deletePersistentObject;
-(id)lazyLoadRelationForKey:(id)arg1 ;
-(id)committedValueForKey:(id)arg1 ;
-(void)updatePersistentValueForKeyIfNeeded:(id)arg1 ;
-(void)setPersistentObject:(id)arg1 ;
-(BOOL)rebase;
-(void)clearPropertyValueForKey:(id)arg1 ;
-(BOOL)propertyValueForKey:(id)arg1 value:(id*)arg2 ;
-(int)intPropertyForKey:(id)arg1 withPersistentFallback:(/*^block*/ id)arg2 ;
-(BOOL)boolPropertyForKey:(id)arg1 withPersistentFallback:(/*^block*/ id)arg2 ;
-(id)propertyForKey:(id)arg1 withPersistentFallback:(/*^block*/ id)arg2 ;
-(void)cachePropertyValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)existsInStore;
-(id)propertyValueForKey:(id)arg1 ;
-(void)childRelationChanged:(id)arg1 ;
-(void)addWeakRelation:(id)arg1 ;
-(void)removeWeakRelation:(id)arg1 ;
-(void)setDirtyProperties:(id)arg1 ;
-(id)cachedProperties;
-(void)setCachedProperties:(id)arg1 ;
-(id)owningRelation;
-(void)setOwningRelation:(id)arg1 ;
-(void)setRelations:(id)arg1 ;
-(id)weakRelations;
-(void)setWeakRelations:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)reset;
-(unsigned long)flags;
-(BOOL)refresh;
-(id)owner;
-(void)setFlags:(unsigned long)arg1 ;
-(BOOL)hasChanges;
-(id)objectID;
-(void)rollback;
-(id)propertyName;
@end

