/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSSecureCoding.h>

@interface SUCarrierDownloadPolicyProperties : NSObject <NSSecureCoding>
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_numberForKey:(id)arg1 ;
-(BOOL)_boolForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(long long)_longLongForKey:(id)arg1 defaultValue:(long long)arg2 ;
-(int)_integerForKey:(id)arg1 defaultValue:(int)arg2 ;
-(BOOL)_isValidHour:(int)arg1 ;
-(id)_carrierSUProperties;
-(BOOL)isDownloadFree;
-(BOOL)isDownloadAllowable;
-(BOOL)isDownloadAllowableOver2G;
-(BOOL)isAutoDownloadAllowable;
-(long long)maximumDownloadSizeInBytes;
-(unsigned)numberOfDaysToWaitForCellularAutoDownload;
-(int)peakStartHour;
-(int)peakEndHour;
-(unsigned)_unsignedIntegerForKey:(id)arg1 defaultValue:(int)arg2 ;
@end

