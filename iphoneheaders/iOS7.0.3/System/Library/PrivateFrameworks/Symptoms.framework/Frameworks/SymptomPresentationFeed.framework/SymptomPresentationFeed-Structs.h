/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:04 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomPresentationFeed.framework/SymptomPresentationFeed
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

typedef struct __NStatManager* NStatManagerRef;

typedef struct __NStatSource* NStatSourceRef;

typedef struct NStatCounts {
	unsigned long long nstat_rxpackets;
	unsigned long long nstat_rxbytes;
	unsigned long long nstat_txpackets;
	unsigned long long nstat_txbytes;
	unsigned nstat_rxduplicatebytes;
	unsigned nstat_rxoutoforderbytes;
	unsigned nstat_txretransmit;
	unsigned nstat_connectattempts;
	unsigned nstat_connectsuccesses;
	double nstat_min_rtt;
	double nstat_avg_rtt;
	double nstat_var_rtt;
	unsigned long long nstat_cell_rxbytes;
	unsigned long long nstat_cell_txbytes;
	unsigned long long nstat_wifi_rxbytes;
	unsigned long long nstat_wifi_txbytes;
} NStatCounts;

