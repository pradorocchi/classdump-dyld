/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSPCopying.h>

@class NSString, NSDate, TSKAnnotationAuthor;

@interface TSDCommentStorage : TSPObject <TSPCopying> {

	NSString* mText;
	NSDate* mCreationDate;
	TSKAnnotationAuthor* mAuthor;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSDate * creationDate; 
@property (nonatomic,retain) TSKAnnotationAuthor * author; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)loadFromArchive:(const CommentStorageArchive*)arg1 unarchiver:(id)arg2 ;
-(id)initWithContext:(id)arg1 author:(id)arg2 ;
-(id)initWithContext:(id)arg1 text:(id)arg2 creationDate:(id)arg3 author:(id)arg4 ;
-(id)creationDateString;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)appendText:(id)arg1 ;
-(void)setAuthor:(id)arg1 ;
-(id)author;
-(id)creationDate;
-(void)setCreationDate:(id)arg1 ;
@end

