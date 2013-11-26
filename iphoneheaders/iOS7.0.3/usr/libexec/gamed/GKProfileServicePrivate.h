/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <gamed/GKProfileService.h>
#import <GameCenterFoundation/GKProfileServicePrivate.h>

@protocol GKProfileServicePrivate <GKProfileService>
@required
-(oneway void)setStatus:(id)arg1 handler:(/*^block*/ id)arg2;
-(oneway void)addEmail:(id)arg1 handler:(/*^block*/ id)arg2;
-(oneway void)updateContactsWithHandler:(/*^block*/ id)arg1;
-(oneway void)deleteEmail:(id)arg1 handler:(/*^block*/ id)arg2;
-(oneway void)setFindable:(BOOL)arg1 handler:(/*^block*/ id)arg2;
-(oneway void)checkAliasForUniqueness:(id)arg1 handler:(/*^block*/ id)arg2;
-(oneway void)changeAlias:(id)arg1 handler:(/*^block*/ id)arg2;
-(oneway void)deletePhotoWithHandler:(/*^block*/ id)arg1;
-(oneway void)setPhotoData:(id)arg1 handler:(/*^block*/ id)arg2;
-(oneway void)cachePhotos:(id)arg1 handler:(/*^block*/ id)arg2;
@end


@interface GKProfileServicePrivate : GKProfileService <GKProfileServicePrivate>
+(Class)interfaceClass;
+(unsigned long)requiredEntitlements;
-(oneway void)setPhotoDataWithDelayedRequest:(id)arg1 transaction:(id)arg2 ;
-(oneway void)deletePhotoWithDelayedRequest:(id)arg1 transaction:(id)arg2 ;
-(id)_cacheImageURLForProfile:(id)arg1 key:(id)arg2 ;
-(void)_writeCacheData:(id)arg1 imageURL:(id)arg2 ;
-(oneway void)setStatus:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(oneway void)addEmail:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(oneway void)updateContactsWithHandler:(/*^block*/ id)arg1 ;
-(oneway void)deleteEmail:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(oneway void)setFindable:(BOOL)arg1 handler:(/*^block*/ id)arg2 ;
-(oneway void)checkAliasForUniqueness:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(oneway void)changeAlias:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(oneway void)deletePhotoWithHandler:(/*^block*/ id)arg1 ;
-(oneway void)setPhotoData:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(oneway void)cachePhotos:(id)arg1 handler:(/*^block*/ id)arg2 ;
@end

