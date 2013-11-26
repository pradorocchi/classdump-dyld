/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:29 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

typedef struct _CFURLConnection* CFURLConnectionRef;

typedef struct timespec {
	int tv_sec;
	long tv_nsec;
} timespec;

typedef struct stat {
	int st_dev;
	unsigned short st_mode;
	unsigned short st_nlink;
	unsigned long long st_ino;
	unsigned st_uid;
	unsigned st_gid;
	int st_rdev;
	timespec st_atimespec;
	timespec st_mtimespec;
	timespec st_ctimespec;
	timespec st_birthtimespec;
	long long st_size;
	long long st_blocks;
	int st_blksize;
	unsigned st_flags;
	unsigned st_gen;
	int st_lspare;
	long long st_qspare[2];
} stat;

typedef const struct ClassicConnectionSession* ClassicConnectionSessionRef;

typedef struct __CFURLConnectionSession* CFURLConnectionSessionRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CFString* CFStringRef;

typedef struct _CFURLResponse* CFURLResponseRef;

typedef struct _CFURLRequest* CFURLRequestRef;

typedef struct _CFCachedURLResponse* CFCachedURLResponseRef;

typedef struct __CFError* CFErrorRef;

typedef struct _CFURLAuthChallenge* CFURLAuthChallengeRef;

typedef struct _NSZone* NSZoneRef;

typedef struct OpaqueCFHTTPCookieStorage* OpaqueCFHTTPCookieStorageRef;

typedef struct _CFURLCredentialStorage* CFURLCredentialStorageRef;

typedef struct __CFURLStorageSession* CFURLStorageSessionRef;

typedef struct _CFHSTSPolicy* CFHSTSPolicyRef;

