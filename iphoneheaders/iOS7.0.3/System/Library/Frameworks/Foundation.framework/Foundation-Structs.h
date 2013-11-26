/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:04 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSData, NSWeakCallback, NSDate, NSObject, NSIndexSet;

typedef struct {
	NSData* data;
	char* dataBytes;
} SCD_Struct_NS0;

typedef struct {
	__CFStorage storage;
} SCD_Struct_NS1;

typedef union {
	SCD_Struct_NS0 d;
	SCD_Struct_NS1 s;
} SCD_Union_NS2;

typedef struct _NSZone* NSZoneRef;

typedef struct __CFStorage* CFStorageRef;

typedef struct {
	unsigned long field1;
	id field2;
	unsigned long field3;
	unsigned long field4[5];
} SCD_Struct_NS5;

typedef struct NSSlice {
	void items;
	BOOL wantsStrong;
	BOOL wantsWeak;
	BOOL wantsARC;
	BOOL shouldCopyIn;
	BOOL usesStrong;
	BOOL usesWeak;
	BOOL usesARC;
	BOOL usesSentinel;
	BOOL pointerPersonality;
	BOOL integerPersonality;
	BOOL simpleReadClear;
	NSWeakCallback* callback;
	/*function pointer*/ void* sizeFunction;
	/*function pointer*/ void* hashFunction;
	/*function pointer*/ void* isEqualFunction;
	/*function pointer*/ void* describeFunction;
	/*function pointer*/ void* acquireFunction;
	/*function pointer*/ void* relinquishFunction;
	/*function pointer*/ void* allocateFunction;
	/*function pointer*/ void* freeFunction;
	/*function pointer*/ void* readAt;
	/*function pointer*/ void* clearAt;
	/*function pointer*/ void* storeAt;
} NSSlice;

typedef struct {
	float m11;
	float m12;
	float m21;
	float m22;
	float tX;
	float tY;
} SCD_Struct_NS7;

typedef struct __CFBundle* CFBundleRef;

typedef struct {
	int field1;
	BOOL field2;
	BOOL field3;
	BOOL field4;
	BOOL field5;
	double field6;
} SCD_Struct_NS9;

typedef struct __CFCharacterSet* CFCharacterSetRef;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_NS11;

typedef struct {
	SCD_Struct_NS1 field1;
	1 field2;
	SCD_Struct_NS1 field3;
	1 field4;
} SCD_Struct_NS12;

typedef struct {
	SCD_Struct_NS1 field1;
	2 field2;
	SCD_Struct_NS1 field3;
	2 field4;
} SCD_Struct_NS13;

typedef union {
	unsigned char _space[12];
	/*^block*/ id _deallocator;
} SCD_Union_NS14;

typedef struct NSRange {
	unsigned location;
	unsigned length;
} NSRange;

typedef struct __CFAllocator* CFAllocatorRef;

typedef struct __CFString* CFStringRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct __CFRunLoop* CFRunLoopRef;

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

typedef struct fields {
	unsigned extensionHidden : 1;
	unsigned creationDate : 1;
	unsigned reserved : 30;
} fields;

typedef struct {
	BOOL extensionHidden;
	NSDate* creationDate;
	fields validFields;
} SCD_Struct_NS23;

typedef struct __CFURLEnumerator* CFURLEnumeratorRef;

typedef struct {
	/*function pointer*/ void* hash;
	/*function pointer*/ void* isEqual;
	/*function pointer*/ void* retain;
	/*function pointer*/ void* release;
	/*function pointer*/ void* describe;
} SCD_Struct_NS25;

typedef struct __CFBasicHash* CFBasicHashRef;

typedef struct {
	void _data;
	void _reserved;
} SCD_Struct_NS27;

typedef struct {
	NSRange _range;
} SCD_Struct_NS28;

typedef union {
	SCD_Struct_NS28 _singleRange;
	SCD_Struct_NS27 _multipleRanges;
} SCD_Union_NS29;

typedef struct objc_method* objc_methodRef;

typedef struct objc_ivar* objc_ivarRef;

typedef struct {
	unsigned field1;
	id field2[4];
} SCD_Struct_NS32;

typedef struct {
	id field1;
	id field2;
} SCD_Struct_NS33;

typedef struct {
	Class field1;
	Class field2;
	__CFSet field3;
	_ field4;
	_ field5;
	void* field6;
} SCD_Struct_NS34;

typedef struct __CFSet* CFSetRef;

typedef struct _CFURLConnection* CFURLConnectionRef;

typedef struct _CFURLAuthChallenge* CFURLAuthChallengeRef;

typedef struct __CFReadStream* CFReadStreamRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct {
	/*function pointer*/ void* hash;
	/*function pointer*/ void* isEqual;
	/*function pointer*/ void* retain;
	/*function pointer*/ void* release;
	/*function pointer*/ void* describe;
	void notAKeyMarker;
} SCD_Struct_NS40;

typedef struct {
	/*function pointer*/ void* retain;
	/*function pointer*/ void* release;
	/*function pointer*/ void* describe;
} SCD_Struct_NS41;

typedef union {
	unsigned short fat;
	char* thin;
} SCD_Union_NS42;

typedef struct opaque_pthread_mutex_t {
	long __sig;
	BOOL __opaque[40];
} opaque_pthread_mutex_t;

typedef struct opaque_pthread_cond_t {
	long __sig;
	BOOL __opaque[24];
} opaque_pthread_cond_t;

typedef struct {
	unsigned field1 : 8;
	unsigned field2 : 4;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 18;
	unsigned short field6[8];
} SCD_Struct_NS45;

typedef struct {
	int field1;
	void field2;
	/*function pointer*/ void* field3;
	/*function pointer*/ void* field4;
	/*function pointer*/ void* field5;
} SCD_Struct_NS46;

typedef struct USet* USetRef;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct __CTFont* CTFontRef;

typedef struct __CFStringTokenizer* CFStringTokenizerRef;

typedef struct opaque_pthread_attr_t {
	long __sig;
	BOOL __opaque[36];
} opaque_pthread_attr_t;

typedef struct {
	long long field1;
	int field2;
} SCD_Struct_NS52;

typedef struct URIParseInfo {
	int userinfoNameOffset;
	int userinfoPasswordOffset;
	int hostOffset;
	int portOffset;
	int pathOffset;
	int paramOffset;
	int queryOffset;
	int fragmentOffset;
	int endOffset;
	unsigned schemeExists : 1;
	unsigned authorityExists : 1;
	unsigned userinfoNameExists : 1;
	unsigned userinfoPasswordExists : 1;
	unsigned hostExists : 1;
	unsigned portExists : 1;
	unsigned paramExists : 1;
	unsigned queryExists : 1;
	unsigned fragmentExists : 1;
} URIParseInfo;

typedef struct __CFNumberFormatter* CFNumberFormatterRef;

typedef struct _CFURLProtocol* CFURLProtocolRef;

typedef struct _CFURLRequest* CFURLRequestRef;

typedef struct _CFURLCredential* CFURLCredentialRef;

typedef struct OpaqueCFHTTPCookie* OpaqueCFHTTPCookieRef;

typedef struct __CFArray* CFArrayRef;

typedef struct OpaqueCFHTTPCookieStorage* OpaqueCFHTTPCookieStorageRef;

typedef struct __SCDynamicStore* SCDynamicStoreRef;

typedef struct _CFCachedURLResponse* CFCachedURLResponseRef;

typedef struct NSLRUFileList* NSLRUFileListRef;

typedef struct _CFURLCache* CFURLCacheRef;

typedef struct {
	int field1;
	int field2;
} SCD_Struct_NS65;

typedef struct __SecIdentity* SecIdentityRef;

typedef struct __SecTrust* SecTrustRef;

typedef struct _CFURLCredentialStorage* CFURLCredentialStorageRef;

typedef struct _CFURLProtectionSpace* CFURLProtectionSpaceRef;

typedef struct __CFURLStorageSession* CFURLStorageSessionRef;

typedef struct _CFURLResponse* CFURLResponseRef;

typedef struct _CFURLDownload* CFURLDownloadRef;

typedef struct __CFURL* CFURLRef;

typedef struct __CFError* CFErrorRef;

typedef struct z_stream_s {
	char* next_in;
	unsigned avail_in;
	unsigned total_in;
	char* next_out;
	unsigned avail_out;
	unsigned total_out;
	char* msg;
	internal_state state;
	/*function pointer*/ void* zalloc;
	/*function pointer*/ void* zfree;
	void opaque;
	int data_type;
	unsigned adler;
	unsigned reserved;
} z_stream_s;

typedef struct __CFNetService* CFNetServiceRef;

typedef struct __CFNetServiceBrowser* CFNetServiceBrowserRef;

typedef struct __CFLocale* CFLocaleRef;

typedef struct {
	id field1;
	void field2;
} SCD_Struct_NS79;

typedef struct {
	unsigned attributeFixingDisabled : 8;
	unsigned  : 24;
} SCD_Struct_NS80;

typedef struct NSSimpleAttributeDictionaryElement {
	unsigned hash;
	id key;
	id value;
} NSSimpleAttributeDictionaryElement;

typedef struct {
	unsigned kind;
	NSObject* oldValue;
	NSObject* newValue;
	NSIndexSet* indexes;
	id extraData;
} SCD_Struct_NS82;

typedef struct {
	unsigned field1;
	id field2;
	id field3;
	id field4;
	id field5;
} SCD_Struct_NS83;

typedef struct __CFDateFormatter* CFDateFormatterRef;

typedef struct __FSEventStream* FSEventStreamRef;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct {
	unsigned long aligner;
} SCD_Struct_NS87;

typedef struct {
	id stored_extern_marker;
	/*function pointer*/ void* slab;
	unsigned capacity;
} SCD_Struct_NS88;

typedef union {
	SCD_Struct_NS88 extern_data;
	SCD_Struct_NS87 inline_slab;
	unsigned char padding[36];
	void _workaround13455311;
} SCD_Union_NS89;

typedef struct __CFData* CFDataRef;

typedef struct {
	unsigned field1[8];
} SCD_Struct_NS91;

typedef struct _xpc_type_s* xpc_type_sRef;

typedef struct {
	unsigned offset;
	int type;
} SCD_Struct_NS93;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned char field3;
	unsigned char field4;
	unsigned char field5;
	unsigned char field6;
	unsigned char field7;
	unsigned char field8;
	unsigned char field9;
	unsigned char field10;
	unsigned char field11;
	unsigned char field12;
	unsigned char field13;
	unsigned char field14;
	unsigned char field15;
	unsigned char field16;
} SCD_Struct_NS94;

