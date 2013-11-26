/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:02:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Library/Application Support/AdSheet/MapWebKitPlugin.webplugin/MapWebKitPlugin
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface MapPluginLocationCoordinateSO : NSObject {

	float latitude;
	float longitude;

}

@property (assign,nonatomic) float latitude; 
@property (assign,nonatomic) float longitude; 
+(BOOL)isKeyExcludedFromWebScript:(const char*)arg1 ;
-(BOOL)equalsCoordinate:(id)arg1 withTolerance:(float)arg2 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setLatitude:(float)arg1 ;
-(void)setLongitude:(float)arg1 ;
-(id)description;
-(float)latitude;
-(float)longitude;
-(id)attributeKeys;
@end

