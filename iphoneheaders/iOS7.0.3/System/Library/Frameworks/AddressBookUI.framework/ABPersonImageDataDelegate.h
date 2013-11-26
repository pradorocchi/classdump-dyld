/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:22 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol ABPersonImageDataDelegate
@optional
-(BOOL)shouldUseSourceTypeSpecificStrings;

@required
-(id)people;
-(id)writablePeople;
-(BOOL)hasImageDataForPerson:(id)arg1;
-(id)personForImageData;
-(id)imageDataWithFormat:(int)arg1 cropRect:(CGRect*)arg2 forPerson:(id)arg3;
-(void)setPersonForImageData:(id)arg1;
-(void)refreshImageData;
-(void)removeImageDataForPerson:(id)arg1;
-(void)setImageData:(id)arg1 withFormat:(int)arg2 cropRect:(CGRect)arg3 forPerson:(id)arg4;
-(void)reloadImageData;
-(void)resetImageData;
-(void)imageWillSave;
-(BOOL)hasImageChanges;
-(void)updateRecordImages;
-(BOOL)didChangePreferredPersonForImage;
@end

