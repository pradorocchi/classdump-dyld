/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/mapspushd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/MapsPushDevice.h>

@class NSString;

@interface FakeMapsPushDevice : MapsPushDevice {

	NSString* _name;
	NSString* _model;

}
-(BOOL)isFake;
-(id)initWithName:(id)arg1 model:(id)arg2 ;
-(void)dealloc;
-(id)name;
-(id)model;
@end

