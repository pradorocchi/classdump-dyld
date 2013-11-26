/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSWPCTTypesetterCache : NSObject {

	map<unsigned int, boost::shared_ptr<TSWPParagraphTypesetter>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, boost::shared_ptr<TSWPParagraphTypesetter> > > >* _typesetters;

}
-(void)removeTypesetterForParagraphIndex:(unsigned)arg1 ;
-(shared_ptr<TSWPParagraphTypesetter>*)cachedTypesetterForParagraphIdentifier:(unsigned)arg1 ;
-(void)addTypesetterForParagraphIdentifier:(unsigned)arg1 typesetter:(shared_ptr<TSWPParagraphTypesetter>*)arg2 ;
-(void)p_limitCacheSize:(unsigned)arg1 ;
-(void)dealloc;
-(id).cxx_construct;
-(void)clearCache;
-(void).cxx_destruct;
@end

