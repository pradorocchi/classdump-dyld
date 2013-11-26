/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/AdSheet.app/AdSheet
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AdSheet/ADJavaScriptObject.h>
#import <AdSheet/PKAddPassesViewControllerDelegate.h>
#import <AdSheet/ADPassbookJSO_Bindings.h>

@class NSString, JSValue, PKPass;

@interface ADPassbookJSO : ADJavaScriptObject <PKAddPassesViewControllerDelegate, ADPassbookJSO_Bindings> {

	NSString* _passURL;
	PKPass* _pass;

}

@property (nonatomic,retain) PKPass * pass;                   //@synthesize pass=_pass - In the implementation block
@property (nonatomic,copy) NSString * passURL;                //@synthesize passURL=_passURL - In the implementation block
@property (nonatomic,retain) JSValue * listener; 
+(void)initializeInContext:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 impressionController:(id)arg2 ;
-(void)presentComposer;
-(void)setPassURL:(id)arg1 ;
-(void)dealloc;
-(void)addPassesViewControllerDidFinish:(id)arg1 ;
-(id)passURL;
-(id)pass;
-(void)setPass:(id)arg1 ;
@end

