/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:46 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <WebUI/WBSAutomaticReadingListItem.h>

@class NSString;

@interface WBSAutomaticReadingListSinaWeiboItem : WBSAutomaticReadingListItem {

	NSString* _originatorProfileImageURLString;
	NSString* _profileURLComponent;

}

@property (nonatomic,copy) NSString * originatorProfileImageURLString;              //@synthesize originatorProfileImageURLString=_originatorProfileImageURLString - In the implementation block
@property (nonatomic,copy) NSString * profileURLComponent;                          //@synthesize profileURLComponent=_profileURLComponent - In the implementation block
-(void)dealloc;
-(id)socialSource;
-(id)originatorProfileImageURL;
-(id)biggerOriginatorProfileImageURL;
-(id)initWithDictionary:(id)arg1 socialSourceAccountIdentifier:(id)arg2 ;
-(id)sourceRecordURL;
-(id)originatorProfileURL;
-(id)originatorProfileImageURLString;
-(void)setOriginatorProfileImageURLString:(id)arg1 ;
-(id)_profileImageURLWithImageSizeString:(id)arg1 ;
-(id)profileURLComponent;
-(void)setProfileURLComponent:(id)arg1 ;
@end

