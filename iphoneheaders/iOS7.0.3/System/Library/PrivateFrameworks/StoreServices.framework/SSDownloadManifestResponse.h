/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:57 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreServices/SSXPCCoding.h>
#import <CoreFoundation/NSCoding.h>

@class NSArray;

@interface SSDownloadManifestResponse : NSObject <SSXPCCoding, NSCoding> {

	NSArray* _validDownloads;

}

@property (copy) NSArray * validDownloads; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)validDownloads;
-(void)setValidDownloads:(id)arg1 ;
@end

