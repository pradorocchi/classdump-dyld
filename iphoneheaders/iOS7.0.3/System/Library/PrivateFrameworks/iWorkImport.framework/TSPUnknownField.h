/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSPUnknownField : NSObject {

	shared_ptr<google::protobuf::UnknownFieldSet>* _fieldSet;
	FieldInfo* _fieldInfo;

}
+(id)unknownFieldWithFieldSet:(shared_ptr<google::protobuf::UnknownFieldSet>*)arg1 fieldInfo:(const FieldInfo*)arg2 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)updateMessageInfo:(MessageInfo*)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(id)initWithFieldSet:(shared_ptr<google::protobuf::UnknownFieldSet>*)arg1 fieldInfo:(const FieldInfo*)arg2 ;
-(const FieldInfo*)fieldInfo;
-(void)mergeToUnknownFieldSet:(UnknownFieldSet*)arg1 ;
-(id)debugDescription;
-(id).cxx_construct;
-(void).cxx_destruct;
@end

