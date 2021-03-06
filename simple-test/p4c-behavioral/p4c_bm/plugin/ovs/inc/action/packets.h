/*
 * Copyright 2013-present Barefoot Networks, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * File:   packets.h
 * Author: mshahbaz@cs.princeton.edu
 */

#ifndef OVS_ACTION_PACKETS_H
#define	OVS_ACTION_PACKETS_H 1

/* -- Called in lib/packets.h -- */
#define OVS_FUNC_DECLS \
    \

/* -- Called in lib/packets.c -- */
#define OVS_FUNC_DEFS \
    \

/* -- Called in lib/packets.c -- */
#define OVS_DEPARSE_NEW_PAYLOAD_OFS \
//::  for header_name in ordered_header_instances_regular:
//::    if not OPT_INLINE_EDITING:
    if (packet->_${header_name}_valid) { \
        new_payload_ofs += sizeof(struct _${header_name}_header); \
    } \
//::    #endif
//::  #endfor
    \

/* -- Called in lib/packets.c -- */
#define OVS_DEPARSE_SHIFT_PAYLOAD \
//::  if not OPT_INLINE_EDITING:
    if (packet->payload_ofs != new_payload_ofs) { \
        if (dp_packet_get_allocated(packet) >= (new_payload_ofs + (dp_packet_size(packet) - packet->payload_ofs))) { \
            memmove(data + new_payload_ofs, data + packet->payload_ofs, dp_packet_size(packet) - packet->payload_ofs); \
        } \
        else { /* error */ } \
        \
        dp_packet_set_size(packet, dp_packet_size(packet) + (new_payload_ofs - packet->payload_ofs)); \
        packet->payload_ofs = new_payload_ofs; \
    } \
//::  #endif
    \

/* -- Called in lib/packets.c -- */
#define OVS_DEPARSE_WRITE_HEADERS \
//::  for header_name in ordered_header_instances_regular:
//::    if not OPT_INLINE_EDITING:
    if (packet->_${header_name}_valid) { \
        memcpy(data + run_ofs, &packet->_${header_name}, sizeof(struct _${header_name}_header)); \
        packet->_${header_name}_ofs = run_ofs; \
        \
        run_ofs += sizeof(struct _${header_name}_header); \
    } \
//::    #endif
//::  #endfor
    \

#endif	/* OVS_ACTION_PACKETS_H */
