/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:36 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol CityUpdaterDelegate;
#import <Weather/Weather-Structs.h>
@class , NSString, NSMutableArray, NSDate, NSTimer;

@interface City : NSObject {

	<CityUpdaterDelegate>* _delegate;
	NSString* _updateTimeString;
	NSMutableArray* _dayForecasts;
	NSMutableArray* _hourlyForecasts;
	BOOL _autoUpdate;
	BOOL _isLocalWeatherCity;
	BOOL _isHourlyDataCelsius;
	BOOL _dataCelsius;
	BOOL _isUpdating;
	BOOL _isRequestedByFrameworkClient;
	BOOL _lockedForDemoMode;
	NSString* _temperature;
	NSDate* _updateTime;
	unsigned _conditionCode;
	NSString* _woeid;
	NSString* _name;
	NSString* _locationID;
	NSString* _state;
	unsigned _observationTime;
	unsigned _sunsetTime;
	unsigned _sunriseTime;
	unsigned _moonPhase;
	NSString* _link;
	float _longitude;
	float _latitude;
	int _secondsFromGMT;
	unsigned _lastUpdateDetail;
	float _windChill;
	float _windDirection;
	float _windSpeed;
	float _humidity;
	float _visibility;
	float _pressure;
	int _pressureRising;
	float _dewPoint;
	float _feelsLike;
	float _heatIndex;
	int _lastUpdateStatus;
	int _updateInterval;
	NSTimer* _autoUpdateTimer;

}

@property (assign,nonatomic) <CityUpdaterDelegate> * delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isLocalWeatherCity;                            //@synthesize isLocalWeatherCity=_isLocalWeatherCity - In the implementation block
@property (nonatomic,copy) NSString * woeid;                                     //@synthesize woeid=_woeid - In the implementation block
@property (nonatomic,copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * locationID;                                //@synthesize locationID=_locationID - In the implementation block
@property (nonatomic,copy) NSString * state;                                     //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * temperature;                               //@synthesize temperature=_temperature - In the implementation block
@property (assign,nonatomic) unsigned conditionCode;                             //@synthesize conditionCode=_conditionCode - In the implementation block
@property (assign,nonatomic) unsigned observationTime;                           //@synthesize observationTime=_observationTime - In the implementation block
@property (assign,nonatomic) unsigned sunsetTime;                                //@synthesize sunsetTime=_sunsetTime - In the implementation block
@property (assign,nonatomic) unsigned sunriseTime;                               //@synthesize sunriseTime=_sunriseTime - In the implementation block
@property (assign,nonatomic) unsigned moonPhase;                                 //@synthesize moonPhase=_moonPhase - In the implementation block
@property (nonatomic,copy) NSString * link;                                      //@synthesize link=_link - In the implementation block
@property (assign,nonatomic) float longitude;                                    //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) float latitude;                                     //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) int secondsFromGMT;                                 //@synthesize secondsFromGMT=_secondsFromGMT - In the implementation block
@property (assign,nonatomic) BOOL isHourlyDataCelsius;                           //@synthesize isHourlyDataCelsius=_isHourlyDataCelsius - In the implementation block
@property (assign,nonatomic) unsigned lastUpdateDetail;                          //@synthesize lastUpdateDetail=_lastUpdateDetail - In the implementation block
@property (nonatomic,retain) NSDate * updateTime;                                //@synthesize updateTime=_updateTime - In the implementation block
@property (assign,getter=isDataCelsius,nonatomic) BOOL dataCelsius;              //@synthesize dataCelsius=_dataCelsius - In the implementation block
@property (assign,nonatomic) float windChill;                                    //@synthesize windChill=_windChill - In the implementation block
@property (assign,nonatomic) float windDirection;                                //@synthesize windDirection=_windDirection - In the implementation block
@property (assign,nonatomic) float windSpeed;                                    //@synthesize windSpeed=_windSpeed - In the implementation block
@property (assign,nonatomic) float humidity;                                     //@synthesize humidity=_humidity - In the implementation block
@property (assign,nonatomic) float visibility;                                   //@synthesize visibility=_visibility - In the implementation block
@property (assign,nonatomic) float pressure;                                     //@synthesize pressure=_pressure - In the implementation block
@property (assign,nonatomic) int pressureRising;                                 //@synthesize pressureRising=_pressureRising - In the implementation block
@property (assign,nonatomic) float dewPoint;                                     //@synthesize dewPoint=_dewPoint - In the implementation block
@property (assign,nonatomic) float feelsLike;                                    //@synthesize feelsLike=_feelsLike - In the implementation block
@property (assign,nonatomic) float heatIndex;                                    //@synthesize heatIndex=_heatIndex - In the implementation block
@property (assign,nonatomic) int lastUpdateStatus;                               //@synthesize lastUpdateStatus=_lastUpdateStatus - In the implementation block
@property (assign,nonatomic) BOOL isUpdating;                                    //@synthesize isUpdating=_isUpdating - In the implementation block
@property (assign,nonatomic) BOOL isRequestedByFrameworkClient;                  //@synthesize isRequestedByFrameworkClient=_isRequestedByFrameworkClient - In the implementation block
@property (assign,nonatomic) BOOL lockedForDemoMode;                             //@synthesize lockedForDemoMode=_lockedForDemoMode - In the implementation block
@property (assign,nonatomic) int updateInterval;                                 //@synthesize updateInterval=_updateInterval - In the implementation block
@property (nonatomic,retain) NSTimer * autoUpdateTimer;                          //@synthesize autoUpdateTimer=_autoUpdateTimer - In the implementation block
+(void)initialize;
+(id)descriptionForWeatherUpdateDetail:(unsigned)arg1 ;
-(int)secondsFromGMT;
-(void)setLatitude:(float)arg1 ;
-(void)setLongitude:(float)arg1 ;
-(BOOL)isUpdating;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)description;
-(id)delegate;
-(id)state;
-(void)setState:(id)arg1 ;
-(void)setName:(id)arg1 ;
-(id)name;
-(int)updateInterval;
-(void)setUpdateInterval:(int)arg1 ;
-(void)update;
-(id)displayName;
-(void)setLink:(id)arg1 ;
-(id)link;
-(void)setUpdateTime:(id)arg1 ;
-(id)locationID;
-(float)latitude;
-(float)longitude;
-(unsigned)conditionCode;
-(void)setConditionCode:(unsigned)arg1 ;
-(float)dewPoint;
-(void)setDewPoint:(float)arg1 ;
-(float)feelsLike;
-(void)setFeelsLike:(float)arg1 ;
-(float)heatIndex;
-(void)setHeatIndex:(float)arg1 ;
-(unsigned)moonPhase;
-(void)setMoonPhase:(unsigned)arg1 ;
-(id)temperature;
-(void)setTemperature:(id)arg1 ;
-(float)windChill;
-(void)setWindChill:(float)arg1 ;
-(float)windSpeed;
-(void)setWindSpeed:(float)arg1 ;
-(id)hourlyForecasts;
-(void)setHourlyForecasts:(id)arg1 ;
-(float)windDirection;
-(void)setWindDirection:(float)arg1 ;
-(id)updateTime;
-(void)_clearAutoUpdateTimer;
-(BOOL)isLocalWeatherCity;
-(id)windDirectionAsString:(float)arg1 ;
-(float)humidity;
-(float)pressure;
-(int)weatherDataAge;
-(int)timeDigit;
-(void)setIsUpdating:(BOOL)arg1 ;
-(id)dayForecasts;
-(void)setLastUpdateStatus:(int)arg1 ;
-(unsigned)lastUpdateDetail;
-(void)setLastUpdateDetail:(unsigned)arg1 ;
-(BOOL)_isUpdating;
-(void)setLocationID:(id)arg1 ;
-(void)setSecondsFromGMT:(int)arg1 ;
-(void)setDayForecasts:(id)arg1 ;
-(unsigned)observationTime;
-(void)setObservationTime:(unsigned)arg1 ;
-(unsigned)sunsetTime;
-(void)setSunsetTime:(unsigned)arg1 ;
-(unsigned)sunriseTime;
-(void)setSunriseTime:(unsigned)arg1 ;
-(BOOL)isDataCelsius;
-(void)setDataCelsius:(BOOL)arg1 ;
-(int)lastUpdateStatus;
-(id)woeid;
-(void)setWoeid:(id)arg1 ;
-(BOOL)isDay;
-(int)primaryConditionForRange:(NSRange)arg1 ;
-(int)locationOfTime:(int)arg1 ;
-(void)associateWithDelegate:(id)arg1 ;
-(void)disassociateWithDelegate:(id)arg1 ;
-(void)setAutoUpdate:(BOOL)arg1 ;
-(void)localWeatherDidBeginUpdate;
-(void)clearForecasts;
-(void)addDayForecast:(id)arg1 ;
-(void)addHourlyForecast:(id)arg1 ;
-(void)finishedUpdating:(int)arg1 statusDetail:(unsigned)arg2 ;
-(BOOL)isUpdatingOrNoData;
-(id)updateTimeString;
-(id)cityAndState;
-(BOOL)populateWithDataFromCity:(id)arg1 ;
-(id)naturalLanguageDescription;
-(int)precipitationForecast;
-(void)_generateLocalizableStrings;
-(void)setIsLocalWeatherCity:(BOOL)arg1 ;
-(BOOL)isHourlyDataCelsius;
-(void)setIsHourlyDataCelsius:(BOOL)arg1 ;
-(void)setHumidity:(float)arg1 ;
-(void)setPressure:(float)arg1 ;
-(int)pressureRising;
-(void)setPressureRising:(int)arg1 ;
-(BOOL)isRequestedByFrameworkClient;
-(void)setIsRequestedByFrameworkClient:(BOOL)arg1 ;
-(BOOL)lockedForDemoMode;
-(void)setLockedForDemoMode:(BOOL)arg1 ;
-(id)autoUpdateTimer;
-(void)setAutoUpdateTimer:(id)arg1 ;
-(float)visibility;
-(void)setVisibility:(float)arg1 ;
@end

