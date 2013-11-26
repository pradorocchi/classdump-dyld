/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/BackupAgent2
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableDictionary, NSString, NSData;

@interface MBKeychainItem : NSObject {

	NSMutableDictionary* _attributes;

}

@property (nonatomic,readonly) NSMutableDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSString * serviceName; 
@property (nonatomic,retain) NSString * accountName; 
@property (nonatomic,retain) NSString * accessGroupName; 
@property (nonatomic,retain) NSString * accessibilityType; 
@property (nonatomic,retain) NSData * valueData; 
+(id)keychainItemWithAttributes:(id)arg1 ;
-(id)accessGroupName;
-(id)accessibilityType;
-(void)setAccessGroupName:(id)arg1 ;
-(void)setAccessibilityType:(id)arg1 ;
-(id)serviceName;
-(void)dealloc;
-(id)description;
-(id)attributes;
-(void)setAccountName:(id)arg1 ;
-(id)accountName;
-(void)setServiceName:(id)arg1 ;
-(id)valueData;
-(void)setValueData:(id)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
@end

