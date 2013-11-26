/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:24 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, ABContactView;

@interface ABStarkContactContainerView : UIView {

	UIImageView* _photoView;
	ABContactView* _contactView;

}

@property (nonatomic,readonly) ABContactView * contactView;              //@synthesize contactView=_contactView - In the implementation block
-(id)contactView;
-(id)initWithFrame:(CGRect)arg1 contact:(id)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
@end

