/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, NSData, MicroPayment;

@interface MicroPaymentDownload : NSManagedObject

@property (nonatomic,@dynamic,retain) NSNumber * contentLength; 
@property (nonatomic,@dynamic,retain) NSNumber * downloadID; 
@property (nonatomic,@dynamic,retain) NSString * downloadKey; 
@property (nonatomic,@dynamic,retain) NSData * error; 
@property (nonatomic,@dynamic,retain) NSString * localURL; 
@property (nonatomic,@dynamic,retain) NSData * hashArrayData; 
@property (nonatomic,@dynamic,retain) NSNumber * hashChunkSize; 
@property (nonatomic,@dynamic,retain) MicroPayment * payment; 
@property (nonatomic,@dynamic,retain) NSString * remoteURL; 
@property (nonatomic,@dynamic,retain) NSData * sinfs; 
@property (nonatomic,@dynamic,retain) NSNumber * state; 
@property (nonatomic,@dynamic,retain) NSString * version; 
+(id)downloadEntityFromContext:(id)arg1 ;
+(id)propertiesForDownloadEntities;
-(id)copySKDownload;
-(void)setValuesWithAssetDictionary:(id)arg1 ;
-(void)awakeFromInsert;
@end

