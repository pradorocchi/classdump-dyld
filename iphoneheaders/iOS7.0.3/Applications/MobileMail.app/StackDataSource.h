/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol StackDataSource
@required
-(id)defaultViewForStackController:(id)arg1;
-(id)stackContainerViewForStackController:(id)arg1;
-(UIEdgeInsets*)stackContainerViewEdgeInsetsForStackController:(id)arg1;
-(id)defaultItemForStackController:(id)arg1;
-(id)stackController:(id)arg1 viewForItem:(id)arg2;
-(BOOL)stackController:(id)arg1 isDataLoadedForItem:(id)arg2 inView:(id)arg3;
-(void)stackController:(id)arg1 loadDataForItem:(id)arg2 inView:(id)arg3;
@end

