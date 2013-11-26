/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:09 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <Message/Message-Structs.h>
@class NSString, NSArray, NSIndexSet;

@interface MFMessageCriterion : NSObject {

	NSString* _uniqueId;
	NSString* _criterionIdentifier;
	NSString* _expression;
	int _qualifier;
	NSArray* _criteria;
	int _dateUnitType;
	NSString* _name;
	unsigned _allCriteriaMustBeSatisfied : 1;
	unsigned _dateIsRelative : 1;
	unsigned _includeRelatedMessages : 1;
	int _type;
	NSArray* _requiredHeaders;
	BOOL _useFlaggedForUnreadCount;
	NSIndexSet* _libraryIdentifiers;

}

@property (nonatomic,retain) NSIndexSet * libraryIdentifiers;              //@synthesize libraryIdentifiers=_libraryIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL useFlaggedForUnreadCount;                //@synthesize useFlaggedForUnreadCount=_useFlaggedForUnreadCount - In the implementation block
@property (assign,nonatomic) BOOL includeRelatedMessages;                  //@synthesize includeRelatedMessages=_includeRelatedMessages - In the implementation block
+(id)criterionForMailboxURL:(id)arg1 ;
+(id)messageIsDeletedCriterion:(BOOL)arg1 ;
+(id)messageIsServerSearchResultCriterion:(BOOL)arg1 ;
+(id)andCompoundCriterionWithCriteria:(id)arg1 ;
+(id)criteriaFromDefaultsArray:(id)arg1 removingRecognizedKeys:(BOOL)arg2 ;
+(int)criterionTypeForString:(id)arg1 ;
+(id)stringForCriterionType:(int)arg1 ;
+(id)criteriaFromDefaultsArray:(id)arg1 ;
+(id)defaultsArrayFromCriteria:(id)arg1 ;
+(void)_updateAddressComments:(id)arg1 ;
+(id)VIPSenderMessageCriterion;
+(id)flaggedMessageCriterion;
+(id)unreadMessageCriterion;
+(id)includesMeCriterion;
+(id)hasAttachmentsCriterion;
+(id)orCompoundCriterionWithCriteria:(id)arg1 ;
-(id)expression;
-(id)criteria;
-(void)setCriteria:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)dictionaryRepresentation;
-(int)criterionType;
-(BOOL)allCriteriaMustBeSatisfied;
-(void)setAllCriteriaMustBeSatisfied:(BOOL)arg1 ;
-(id)initWithType:(int)arg1 qualifier:(int)arg2 expression:(id)arg3 ;
-(void)setCriterionIdentifier:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 andRemoveRecognizedKeysIfMutable:(BOOL)arg2 ;
-(void)setCriterionType:(int)arg1 ;
-(void)setQualifier:(int)arg1 ;
-(id)initWithCriterion:(id)arg1 expression:(id)arg2 ;
-(int)messageRuleQualifierForString:(id)arg1 ;
-(id)criterionIdentifier;
-(int)qualifier;
-(id)descriptionWithDepth:(unsigned)arg1 ;
-(id)_qualifierString;
-(id)stringForMessageRuleQualifier:(int)arg1 ;
-(BOOL)doesMessageSatisfyCriterion:(id)arg1 ;
-(id)_headersRequiredForEvaluation;
-(BOOL)_evaluateCompoundCriterion:(id)arg1 ;
-(BOOL)_evaluateFlagCriterion:(id)arg1 ;
-(BOOL)_evaluateAddressBookCriterion:(id)arg1 ;
-(BOOL)_evaluateHeaderCriterion:(id)arg1 ;
-(BOOL)_evaluateSenderHeaderCriterion:(id)arg1 ;
-(BOOL)_evaluateAccountCriterion:(id)arg1 ;
-(BOOL)_evaluateDateCriterion:(id)arg1 ;
-(BOOL)_evaluateAddressHistoryCriterion:(id)arg1 ;
-(BOOL)_evaluateFullNameCriterion:(id)arg1 ;
-(BOOL)_evaluatePriorityIsNormalCriterion:(id)arg1 ;
-(BOOL)_evaluatePriorityIsHighCriterion:(id)arg1 ;
-(BOOL)_evaluatePriorityIsLowCriterion:(id)arg1 ;
-(BOOL)_evaluateAttachmentCriterion:(id)arg1 ;
-(id)simplifiedCriterion;
-(id)simplifyOnce;
-(void)setUseFlaggedForUnreadCount:(BOOL)arg1 ;
-(BOOL)_evaluateIsDigitallySignedCriterion:(id)arg1 ;
-(BOOL)_evaluateIsEncryptedCriterion:(id)arg1 ;
-(int)dateUnits;
-(void)setDateUnits:(int)arg1 ;
-(BOOL)dateIsRelative;
-(void)setDateIsRelative:(BOOL)arg1 ;
-(id)emailAddressesForGroupCriterion;
-(BOOL)includeRelatedMessages;
-(void)setIncludeRelatedMessages:(BOOL)arg1 ;
-(id)libraryIdentifiers;
-(void)setLibraryIdentifiers:(id)arg1 ;
-(BOOL)useFlaggedForUnreadCount;
-(id)fixOnce;
-(id)_criterionForSQL;
-(BOOL)isFullTextSearchableCriterion;
-(id)_evaluateFTSCriterionWithIndex:(id)arg1 mailboxIDs:(id)arg2 ;
-(id)_resolveWithIndex:(id)arg1 mailboxIDs:(id)arg2 ;
-(id)_collapsedMessageNumberCriterion:(id)arg1 allMustBeSatisfied:(BOOL)arg2 collapsedIndexes:(id*)arg3 ;
-(BOOL)hasLibraryIDCriterion;
-(id)SQLExpressionWithContext:(SCD_Struct_MF13*)arg1 depth:(unsigned)arg2 ;
-(unsigned)bestBaseTable;
-(void)_addCriteriaSatisfyingPredicate:(/*function pointer*/ void*)arg1 toCollector:(id)arg2 ;
-(BOOL)includesCriterionSatisfyingPredicate:(/*function pointer*/ void*)arg1 restrictive:(BOOL)arg2 ;
-(id)criterionByApplyingTransform:(/*^block*/ id)arg1 ;
-(id)criteriaSatisfyingPredicate:(/*function pointer*/ void*)arg1 ;
-(id)criterionForSQL;
-(id)SQLExpressionWithTables:(unsigned*)arg1 baseTable:(unsigned)arg2 protectedDataAvailable:(BOOL)arg3 contentIndex:(id)arg4 mailboxIDs:(id)arg5 ;
-(id)extractedDateCriterion;
-(id)extractedUnreadCriterion;
-(BOOL)hasNonFullTextSearchableCriterion;
-(void)setExpression:(id)arg1 ;
@end

