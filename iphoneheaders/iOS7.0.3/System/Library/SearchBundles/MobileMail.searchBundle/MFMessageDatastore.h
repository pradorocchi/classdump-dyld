/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SearchBundles/MobileMail.searchBundle/MobileMail
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <AppleAccount/MSSearchDelegate.h>
#import <Search/SPSearchDatastore.h>

@class NSLock, MSSearch, NSArray, NSError;

@interface MFMessageDatastore : NSObject <MSSearchDelegate, SPSearchDatastore> {

	NSLock* _lock;
	MSSearch* _search;
	NSArray* _found;
	NSError* _error;
	BOOL _done;
	unsigned _resultsCount;

}
-(void)dealloc;
-(id)init;
-(id)searchDomains;
-(BOOL)search:(id)arg1 didFindResults:(id)arg2 ;
-(void)search:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)resultForIdentifier:(id)arg1 domain:(unsigned)arg2 ;
-(id)displayIdentifierForDomain:(unsigned)arg1 ;
-(void)performQuery:(id)arg1 withResultsPipe:(id)arg2 ;
-(void)_performMessageQuery:(id)arg1 withResultsPipe:(id)arg2 ;
@end

