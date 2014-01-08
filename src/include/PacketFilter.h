/*
 * Copyright 2013 Dominic Spill
 * Copyright 2013 Adam Stasiak
 *
 * This file is part of USBProxy.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 *
 * PacketFilter.h
 *
 * Created on: Nov 11, 2013
 */
#ifndef USBPROXY_PACKETFILTER_H
#define USBPROXY_PACKETFILTER_H

#include <stdlib.h>
#include <stdio.h>

#include "plugins.h"
#include "Packet.h"

class PacketFilter {

public:
	static const __u8 plugin_type=PLUGIN_FILTER;

	PacketFilter() {};
	virtual ~PacketFilter() {};

	virtual void filter_packet(Packet* packet) {}
	virtual void filter_setup_packet(SetupPacket* packet,bool direction_out) {}

	virtual char* toString() {return (char*)"Filter";}
};

typedef Factory<PacketFilter> PacketFilterFactory;

#endif /* USBPROXY_PACKETFILTER_H */