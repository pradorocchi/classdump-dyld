/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/AdSheet.app/AdSheet
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol ADCalendarJSO_Bindings <JSExport>
@property (nonatomic,retain) NSDictionary * event; 
@property (nonatomic,retain) JSValue * listener; 
@property (assign,nonatomic) JSValue * rect; 
@optional
-(void)presentComposerWithEventProperties:(id)arg1 listener:(id)arg2 popoverRect:(id)arg3 __JS_EXPORT_AS__presentComposer:(id)arg4;

@required
-(void)presentComposerWithEventProperties:(id)arg1 listener:(id)arg2 popoverRect:(id)arg3;
-(void)setListener:(id)arg1;
-(id)rect;
-(void)setRect:(id)arg1;
-(void)setEvent:(id)arg1;
-(id)event;
-(id)listener;
@end

