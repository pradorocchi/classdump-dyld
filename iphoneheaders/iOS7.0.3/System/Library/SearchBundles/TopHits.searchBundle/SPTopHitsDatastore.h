/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SearchBundles/TopHits.searchBundle/TopHits
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <TopHits/TopHits-Structs.h>
#import <Search/SPSearchDatastore.h>

@interface SPTopHitsDatastore : NSObject <SPSearchDatastore>
-(id)init;
-(id)searchDomains;
-(id)resultForIdentifier:(id)arg1 domain:(unsigned)arg2 ;
-(id)displayIdentifierForDomain:(unsigned)arg1 ;
-(void)performQuery:(id)arg1 withResultsPipe:(id)arg2 ;
@end

