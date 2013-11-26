/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SCATElement <AXGroupable>
@property (nonatomic,readonly) CGRect scatFrame; 
@property (nonatomic,readonly) CGPoint scatCenterPoint; 
@property (nonatomic,readonly) CGPathRef scatPath; 
@property (nonatomic,readonly) BOOL scatPathIsInScreenCoordinates; 
@property (nonatomic,readonly) unsigned long long scatTraits; 
@property (nonatomic,readonly) BOOL scatIsValid; 
@property (nonatomic,readonly) BOOL scatIsAXElement; 
@property (nonatomic,readonly) BOOL scatIndicatesOwnFocus; 
@property (nonatomic,readonly) BOOL scatShouldActivateDirectly; 
@property (nonatomic,readonly) NSString * scatSpeakableDescription; 
@property (nonatomic,readonly) BOOL scatIsKeyboardKey; 
@property (nonatomic,readonly) BOOL scatCanShowAlternateKeys; 
@property (nonatomic,readonly) NSArray * scatAlternateKeys; 
@property (nonatomic,readonly) CGRect scatTextCursorFrame; 
@property (nonatomic,readonly) NSNumber * scatOverrideCursorTheme; 
@optional
-(void)scatDidBecomeFocused:(BOOL)arg1;
-(id)scatSpeakableDescription:(BOOL)arg1;

@required
-(BOOL)scatIndicatesOwnFocus;
-(BOOL)scatSupportsAction:(int)arg1;
-(id)scatSpeakableDescription;
-(CGPathRef)scatPath;
-(BOOL)scatPerformAction:(int)arg1;
-(id)scatOverrideCursorTheme;
-(BOOL)scatIsAXElement;
-(CGRect*)scatFrame;
-(BOOL)scatIsKeyboardKey;
-(id)scatAlternateKeys;
-(unsigned long long)scatTraits;
-(BOOL)scatCanScrollInAtLeastOneDirection;
-(id)scatSupportedGestures;
-(BOOL)scatCanShowAlternateKeys;
-(id)scrollableElement;
-(CGPoint*)scatCenterPoint;
-(BOOL)scatPerformAction:(int)arg1 withValue:(id)arg2;
-(BOOL)scatShouldActivateDirectly;
-(BOOL)scatIsValid;
-(BOOL)scatPathIsInScreenCoordinates;
-(CGRect*)scatTextCursorFrame;
-(void)scatScrollToVisible;
@end

