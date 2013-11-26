/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:53 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct NSRange {
	unsigned location;
	unsigned length;
} NSRange;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 1;
	unsigned field6 : 1;
	unsigned field7 : 1;
	unsigned field8 : 1;
	unsigned field9 : 1;
	unsigned field10 : 1;
	unsigned field11 : 1;
} SCD_Struct_EK4;

typedef struct {
	int field1;
	BOOL field2;
	BOOL field3;
	BOOL field4;
	BOOL field5;
	double field6;
} SCD_Struct_EK5;

typedef struct __CFDateFormatter* CFDateFormatterRef;

typedef struct __CFTimeZone* CFTimeZoneRef;

typedef struct _NSZone* NSZoneRef;

typedef struct UIEdgeInsets {
	float top;
	float left;
	float bottom;
	float right;
} UIEdgeInsets;

typedef struct __CFArray* CFArrayRef;

typedef struct opaque_pthread_mutex_t {
	long __sig;
	BOOL __opaque[40];
} opaque_pthread_mutex_t;

