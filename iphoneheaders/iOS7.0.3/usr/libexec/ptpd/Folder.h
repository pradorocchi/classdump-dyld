/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/ptpd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ptpd/ptpd-Structs.h>
#import <ptpd/Container.h>

@class PTPObjectInfoDataset;

@interface Folder : Container {

	PTPObjectInfoDataset* _objectInfoDataset;

}
-(void)addContent;
-(id)objectInfoDataset;
-(id)initWithName:(id)arg1 serialNumber:(unsigned long long)arg2 captureTimeSpec:(timespec*)arg3 size:(long long)arg4 parent:(id)arg5 parentID:(unsigned long)arg6 ;
-(id)initWithName:(id)arg1 path:(id)arg2 captureTimeSpec:(timespec*)arg3 parent:(id)arg4 parentID:(unsigned long)arg5 ;
-(void)dealloc;
@end

