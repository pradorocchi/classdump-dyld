/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:32:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PowerlogPlugins/PLNetworkLogger.bundle/PLNetworkLogger
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

typedef struct if_traffic_class {
	unsigned long long ifi_ibepackets;
	unsigned long long ifi_ibebytes;
	unsigned long long ifi_obepackets;
	unsigned long long ifi_obebytes;
	unsigned long long ifi_ibkpackets;
	unsigned long long ifi_ibkbytes;
	unsigned long long ifi_obkpackets;
	unsigned long long ifi_obkbytes;
	unsigned long long ifi_ivipackets;
	unsigned long long ifi_ivibytes;
	unsigned long long ifi_ovipackets;
	unsigned long long ifi_ovibytes;
	unsigned long long ifi_ivopackets;
	unsigned long long ifi_ivobytes;
	unsigned long long ifi_ovopackets;
	unsigned long long ifi_ovobytes;
	unsigned long long ifi_ipvpackets;
	unsigned long long ifi_ipvbytes;
	unsigned long long ifi_opvpackets;
	unsigned long long ifi_opvbytes;
} if_traffic_class;

typedef struct if_data_extended {
	unsigned long long ifi_alignerrs;
	unsigned long long ifi_dt_bytes;
	unsigned long long ifi_fpackets;
	unsigned long long ifi_fbytes;
	unsigned long long reserved[12];
} if_data_extended;

typedef struct if_packet_stats {
	unsigned long long ifi_tcp_badformat;
	unsigned long long ifi_tcp_unspecv6;
	unsigned long long ifi_tcp_synfin;
	unsigned long long ifi_tcp_badformatipsec;
	unsigned long long ifi_tcp_noconnnolist;
	unsigned long long ifi_tcp_noconnlist;
	unsigned long long ifi_tcp_listbadsyn;
	unsigned long long ifi_tcp_icmp6unreach;
	unsigned long long ifi_tcp_deprecate6;
	unsigned long long ifi_tcp_rstinsynrcv;
	unsigned long long ifi_tcp_ooopacket;
	unsigned long long ifi_tcp_dospacket;
	unsigned long long ifi_tcp_cleanup;
	unsigned long long ifi_tcp_synwindow;
	unsigned long long reserved[6];
	unsigned long long ifi_udp_port_unreach;
	unsigned long long ifi_udp_faithprefix;
	unsigned long long ifi_udp_port0;
	unsigned long long ifi_udp_badlength;
	unsigned long long ifi_udp_badchksum;
	unsigned long long ifi_udp_badmcast;
	unsigned long long ifi_udp_cleanup;
	unsigned long long ifi_udp_badipsec;
	unsigned long long _reserved[4];
} if_packet_stats;

typedef struct if_rxpoll_stats {
	unsigned ifi_poll_off_req;
	unsigned ifi_poll_off_err;
	unsigned ifi_poll_on_req;
	unsigned ifi_poll_on_err;
	unsigned ifi_poll_wakeups_avg;
	unsigned ifi_poll_wakeups_lowat;
	unsigned ifi_poll_wakeups_hiwat;
	unsigned long long ifi_poll_packets;
	unsigned ifi_poll_packets_avg;
	unsigned ifi_poll_packets_min;
	unsigned ifi_poll_packets_max;
	unsigned ifi_poll_packets_lowat;
	unsigned ifi_poll_packets_hiwat;
	unsigned long long ifi_poll_bytes;
	unsigned ifi_poll_bytes_avg;
	unsigned ifi_poll_bytes_min;
	unsigned ifi_poll_bytes_max;
	unsigned ifi_poll_bytes_lowat;
	unsigned ifi_poll_bytes_hiwat;
	unsigned ifi_poll_packets_limit;
	unsigned long long ifi_poll_interval_time;
} if_rxpoll_stats;

typedef struct ifmibdata_supplemental {
	if_traffic_class ifmd_traffic_class;
	if_data_extended ifmd_data_extended;
	if_packet_stats ifmd_packet_stats;
	if_rxpoll_stats ifmd_rxpoll_stats;
} ifmibdata_supplemental;

