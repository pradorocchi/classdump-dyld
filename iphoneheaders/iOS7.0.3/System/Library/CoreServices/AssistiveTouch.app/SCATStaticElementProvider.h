/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSArray.h>
#import <assistivetouchd/SCATElementProvider.h>

@class NSArray;

@interface SCATStaticElementProvider : NSArray <SCATElementProvider> {

	NSArray* _elements;

}

@property (nonatomic,retain) NSArray * elements;                   //@synthesize elements=_elements - In the implementation block
@property (nonatomic,readonly) BOOL providesElements; 
-(id)lastElementWithOptions:(int*)arg1 ;
-(id)firstElementWithOptions:(int*)arg1 ;
-(BOOL)providesElements;
-(id)elementAfter:(id)arg1 didWrap:(BOOL*)arg2 options:(int*)arg3 ;
-(id)elementBefore:(id)arg1 didWrap:(BOOL*)arg2 options:(int*)arg3 ;
-(BOOL)containsElement:(id)arg1 ;
-(void)willBeginProvidingElements;
-(void)didFinishProvidingElements;
-(void)dealloc;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
-(id)description;
-(id)elements;
-(void)setElements:(id)arg1 ;
-(id)initWithElements:(id)arg1 ;
@end

