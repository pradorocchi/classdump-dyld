/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:36 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>
#import <CoreFoundation/NSSecureCoding.h>
#import <CoreFoundation/NSFastEnumeration.h>

@interface NSDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>

@property (nonatomic,readonly) unsigned short fileHFSFlags; 
@property (nonatomic,readonly) unsigned long long fileHFSResourceForkSize; 
+(id)convertFromXML:(id)arg1 ;
+(id)convertFromBinaryXML:(id)arg1 ;
+(id)dictionaryWithKeyArray:(id)arg1 defaultValue:(id)arg2 ;
+(id)dictionaryWithPlistData:(id)arg1 ;
+(id)_dictionaryWithData:(id)arg1 isPlist:(BOOL)arg2 allowedClasses:(id)arg3 ;
+(id)dictionaryWithArchiveData:(id)arg1 allowedClasses:(id)arg2 ;
+(id)dictionaryWithArchiveData:(id)arg1 ;
+(id)_geo_dictionaryFromXPCObject:(id)arg1 ;
+(id)newWithContentsOf:(id)arg1 immutable:(BOOL)arg2 ;
+(id)dictionaryWithContentsOfURL:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)dictionaryWithContentsOfFile:(id)arg1 ;
+(id)newDictionaryWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned)arg3 ;
+(id)dictionaryWithDictionary:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)dictionaryWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned)arg3 ;
+(id)dictionaryWithObject:(id)arg1 forKey:(id)arg2 ;
+(id)dictionary;
+(id)dictionaryWithObjectsAndKeys:(id)arg1 ;
+(id)dictionaryWithDictionary:(id)arg1 ;
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)dictionaryWithObjects:(id)arg1 forKeys:(id)arg2 ;
+(id)sharedKeySetForKeys:(id)arg1 ;
-(BOOL)MSASIsGlobalResetSync;
-(id)MSASAlbumResetSyncAlbumGUID;
-(BOOL)MSASIsLocalChange;
-(id)MSASEventIsDueToAlbumDeletionAlbumGUID;
-(id)MSASEventIsDueToAssetCollectionDeletionAssetCollectionGUID;
-(BOOL)MSASIsNotInteresting;
-(BOOL)MSASIsErrorRecovery;
-(id)MSMutableDeepCopyWithZone:(NSZoneRef)arg1 ;
-(id)MSDeepCopyWithZone:(NSZoneRef)arg1 ;
-(id)MSMutableDeepCopy;
-(id)MSDeepCopy;
-(id)mutableCopyWithElementsCopy;
-(id)convertToXML;
-(id)convertToBinaryXML;
-(id)deepCopy;
-(id)dictionaryFromChanges:(id)arg1 ;
-(id)objectForInt:(int)arg1 ;
-(id)mutableCopyWithElementsCopy;
-(id)mf_filterUsingMap:(id)arg1 inverse:(BOOL)arg2 ;
-(id)__ftreg_responseAppleID;
-(id)__ftreg_responseProfileID;
-(id)__ftreg_responseAuthToken;
-(BOOL)__ftreg_responseIsUpgrade;
-(BOOL)__ftreg_isValidSetupDictionary;
-(id)__ftreg_candidateAliases;
-(id)ML3StringForKey:(id)arg1 ;
-(BOOL)mf_boolForKey:(id)arg1 ;
-(int)mf_integerForKey:(id)arg1 ;
-(int)abCompare:(id)arg1 ;
-(id)DAObjectForKeyCaseInsensitive:(id)arg1 ;
-(id)DAMergeOverrideDictionary:(id)arg1 ;
-(id)CDVObjectForKeyWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(id)CDVObjectForKeyCaseInsensitive:(id)arg1 ;
-(id)CDVMergeOverrideDictionary:(id)arg1 ;
-(BOOL)writeToProtectedFile:(id)arg1 atomically:(BOOL)arg2 ;
-(id)_FTFilteredDictionaryForAPS;
-(id)_sa_mappedDictionaryWithBlock:(/*^block*/ id)arg1 ;
-(id)_web_messageText;
-(int)_web_messageLineNumber;
-(id)_web_messageSourceURL;
-(int)_web_messageType;
-(BOOL)_boolForKey:(id)arg1 ;
-(BOOL)_ui_dictionaryContainsUIStringDrawingKeys;
-(id)_ui_attributesForDictionaryContainingUIStringDrawingKeys;
-(id)_webkit_objectForMIMEType:(id)arg1 ;
-(id)_webkit_stringForKey:(id)arg1 ;
-(int)_webkit_intForKey:(id)arg1 ;
-(BOOL)_webkit_boolForKey:(id)arg1 ;
-(id)_webkit_arrayForKey:(id)arg1 ;
-(id)_webkit_numberForKey:(id)arg1 ;
-(id)asQueryParameterString;
-(unsigned short)fileHFSFlags;
-(unsigned long long)fileHFSResourceForkSize;
-(id)_dataForKey:(id)arg1 ;
-(id)_dictionaryForKey:(id)arg1 ;
-(id)_numberForKey:(id)arg1 ;
-(id)_arrayForKey:(id)arg1 ;
-(id)_stringForKey:(id)arg1 ;
-(id)archiveData;
-(id)plistData;
-(BOOL)__imIsMutable;
-(id)__imDeepCopy;
-(id)keysOfChangedEntriesComparedTo:(id)arg1 ;
-(id)dictionaryFromChanges:(id)arg1 ;
-(id)mutableDeepAutoreleasedCopy;
-(BOOL)matchesUID:(id)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLType;
-(KeyValueArray*)CA_copyRenderKeyValueArray;
-(id)MCMutableDeepCopyWithZone:(NSZoneRef)arg1 ;
-(id)MCDeepCopyWithZone:(NSZoneRef)arg1 ;
-(id)MCMutableDeepCopy;
-(id)MCDeepCopy;
-(id)MCRetainRequiredObjectKey:(id)arg1 type:(Class)arg2 errorDomain:(id)arg3 missingDataCode:(int)arg4 missingDataErrorString:(id)arg5 invalidDataCode:(int)arg6 invalidDataErrorString:(id)arg7 outError:(id*)arg8 ;
-(id)MCRetainOptionalObjectKey:(id)arg1 type:(Class)arg2 errorDomain:(id)arg3 invalidDataCode:(int)arg4 invalidDataErrorString:(id)arg5 outError:(id*)arg6 ;
-(id)MCRetainRequiredNonZeroLengthStringKey:(id)arg1 errorDomain:(id)arg2 missingDataCode:(int)arg3 missingDataErrorString:(id)arg4 invalidDataCode:(int)arg5 invalidDataErrorString:(id)arg6 outError:(id*)arg7 ;
-(id)MCRetainOptionalNonZeroLengthStringKey:(id)arg1 errorDomain:(id)arg2 invalidDataCode:(int)arg3 invalidDataErrorString:(id)arg4 outError:(id*)arg5 ;
-(id)_geo_newXPCObject;
-(id)sbs_safeObjectForKey:(id)arg1 ofType:(Class)arg2 ;
-(BOOL)MR_isEqualToDictionary:(id)arg1 ;
-(id)bks_safeObjectForKey:(id)arg1 ofType:(Class)arg2 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)_web_numberForKey:(id)arg1 ;
-(int)_web_intForKey:(id)arg1 ;
-(id)_web_stringForKey:(id)arg1 ;
-(id)_web_objectForMIMEType:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(unsigned)filePosixPermissions;
-(BOOL)fileIsImmutable;
-(unsigned)fileOwnerAccountNumber;
-(id)fileGroupOwnerAccountName;
-(unsigned)fileGroupOwnerAccountNumber;
-(int)fileSystemNumber;
-(unsigned)fileSystemFileNumber;
-(BOOL)fileExtensionHidden;
-(unsigned long)fileHFSCreatorCode;
-(unsigned long)fileHFSTypeCode;
-(BOOL)fileIsAppendOnly;
-(id)fileCreationDate;
-(id)fileGroupOwnerAccountID;
-(id)fileType;
-(id)fileModificationDate;
-(unsigned long long)fileSize;
-(id)fileOwnerAccountID;
-(id)fileOwnerAccountName;
-(id)_stringToWrite;
-(id)descriptionInStringsFileFormat;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 ;
-(BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 ;
-(Class)classForCoder;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(BOOL)isNSDictionary__;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned)arg2 ;
-(void)getObjects:(id*)arg1 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(void)getKeys:(id*)arg1 ;
-(unsigned)countForKey:(id)arg1 ;
-(BOOL)containsKey:(id)arg1 ;
-(BOOL)__getValue:(id*)arg1 forKey:(id)arg2 ;
-(unsigned)countForObject:(id)arg1 ;
-(void)__apply:(/*function pointer*/ void*)arg1 context:(void*)arg2 ;
-(unsigned long)_cfTypeID;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned)arg3 ;
-(void)enumerateKeysAndObjectsWithOptions:(unsigned)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(id)keyOfEntryWithOptions:(unsigned)arg1 passingTest:(/*^block*/ id)arg2 ;
-(id)keysOfEntriesWithOptions:(unsigned)arg1 passingTest:(/*^block*/ id)arg2 ;
-(id)keysSortedByValueWithOptions:(unsigned)arg1 usingComparator:(/*^block*/ id)arg2 ;
-(id)invertedDictionary;
-(id)keyOfEntryPassingTest:(/*^block*/ id)arg1 ;
-(id)keysSortedByValueUsingComparator:(/*^block*/ id)arg1 ;
-(id)keysSortedByValueUsingSelector:(SEL)arg1 ;
-(id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2 ;
-(id)initWithObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS16*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)count;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)initWithObjectsAndKeys:(id)arg1 ;
-(id)allKeys;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)objectEnumerator;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/ id)arg1 ;
-(id)allObjects;
-(BOOL)isEqualToDictionary:(id)arg1 ;
-(id)initWithObjects:(id)arg1 forKeys:(id)arg2 ;
-(id)allValues;
-(id)keyEnumerator;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned)arg3 ;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
-(id)allKeysForObject:(id)arg1 ;
-(id)keysOfEntriesPassingTest:(/*^block*/ id)arg1 ;
-(id)initWithDictionary:(id)arg1 copyItems:(BOOL)arg2 ;
-(id)descriptionWithLocale:(id)arg1 ;
@end

