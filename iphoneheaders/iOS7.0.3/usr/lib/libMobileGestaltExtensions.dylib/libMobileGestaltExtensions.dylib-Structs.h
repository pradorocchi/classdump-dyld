/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libMobileGestaltExtensions.dylib
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableArray, MGFileWatcher, MCProfileConnection, CADisplay;

typedef struct timespec {
	int tv_sec;
	long tv_nsec;
} timespec;

typedef struct _NSZone* NSZoneRef;

typedef union {
	NSMutableArray* _darwinTokens;
	__SCPreferences _scPrefs;
	MGFileWatcher* _fileWatcher;
	MCProfileConnection* _mcConnection;
	CADisplay* _mainDisplay;
	void _swBehaviorHandle;
	__CTServerConnection _ctCenter;
} SCD_Union_MG2;

