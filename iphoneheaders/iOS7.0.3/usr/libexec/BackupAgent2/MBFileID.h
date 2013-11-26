/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/BackupAgent2
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <BackupAgent2/BackupAgent2-Structs.h>
#import <backupd/MBCoding.h>
#import <CoreFoundation/NSCopying.h>

@class NSData, NSString;

@interface MBFileID : NSObject <MBCoding, NSCopying> {

	unsigned char _bytes[20];

}

@property (nonatomic,readonly) const void* bytes; 
@property (nonatomic,readonly) unsigned length; 
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSString * filename; 
@property (nonatomic,readonly) NSString * string; 
+(id)fileIDWithDomain:(id)arg1 relativePath:(id)arg2 ;
+(id)fileIDWithDomainName:(id)arg1 relativePath:(id)arg2 ;
+(id)fileIDWithData:(id)arg1 ;
+(id)fileIDWithString:(id)arg1 ;
-(BOOL)isEqualToFileID:(id)arg1 ;
-(id)initWithDomain:(id)arg1 relativePath:(id)arg2 ;
-(id)initWithDecoder:(id)arg1 ;
-(id)initWithDomainName:(id)arg1 relativePath:(id)arg2 ;
-(void)encode:(id)arg1 ;
-(id)initWithBytes:(const void*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned)length;
-(const void*)bytes;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)string;
-(id)data;
-(id)initWithData:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)filename;
@end

