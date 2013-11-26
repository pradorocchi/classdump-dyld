/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/sandboxd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface Session : NSObject {

	int pid;
	int fd;
	NSObject<OS_dispatch_queue>* write_queue;
	NSObject<OS_dispatch_source>* read_source;
	NSObject<OS_dispatch_source>* mig_source;

}

@property (assign) int pid; 
@property (assign) int fd; 
@property (assign) NSObject<OS_dispatch_queue> * write_queue; 
@property (assign) NSObject<OS_dispatch_source> * read_source; 
@property (assign) NSObject<OS_dispatch_source> * mig_source; 
-(id)write_queue;
-(void)setWrite_queue:(id)arg1 ;
-(id)read_source;
-(void)setRead_source:(id)arg1 ;
-(id)mig_source;
-(void)setMig_source:(id)arg1 ;
-(int)fd;
-(void)setFd:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(int)pid;
-(void)setPid:(int)arg1 ;
@end

