/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:02:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Weather.app/Weather
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSArray;

@interface HourlyForecastImageFactory : NSObject {

	BOOL isDay;
	NSArray* _hourlyForecasts;
	int _sunsetTime;
	int _sunriseTime;
	BOOL _isDay;
	BOOL _isHourlyDataCelsius;

}

@property (assign,nonatomic) BOOL isDay;                             //@synthesize isDay=_isDay - In the implementation block
@property (nonatomic,retain) NSArray * hourlyForecasts;              //@synthesize hourlyForecasts=_hourlyForecasts - In the implementation block
@property (assign,nonatomic) BOOL isHourlyDataCelsius;               //@synthesize isHourlyDataCelsius=_isHourlyDataCelsius - In the implementation block
@property (assign,nonatomic) int sunsetTime;                         //@synthesize sunsetTime=_sunsetTime - In the implementation block
@property (assign,nonatomic) int sunriseTime;                        //@synthesize sunriseTime=_sunriseTime - In the implementation block
-(id)forecastImages;
-(void)setIsDay:(BOOL)arg1 ;
-(void)dealloc;
-(id)hourlyForecasts;
-(void)setHourlyForecasts:(id)arg1 ;
-(int)sunsetTime;
-(void)setSunsetTime:(int)arg1 ;
-(int)sunriseTime;
-(void)setSunriseTime:(int)arg1 ;
-(BOOL)isDay;
-(BOOL)isHourlyDataCelsius;
-(void)setIsHourlyDataCelsius:(BOOL)arg1 ;
@end

