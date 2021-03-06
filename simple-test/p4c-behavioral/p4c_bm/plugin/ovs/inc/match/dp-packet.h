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
 * File:   dp_packet.h
 * Author: mshahbaz@cs.princeton.edu
 */

#ifndef OVS_MATCH_DP_PACKET_H
#define	OVS_MATCH_DP_PACKET_H 1

/* -- Called in lib/dp-packet.h -- */
#define OVS_HDR_ATTRS \
//::  for header_name in ordered_header_instances_regular:
    uint16_t _${header_name}_ofs; \
//::    if not OPT_INLINE_EDITING:
    struct _${header_name}_header _${header_name}; \
//::    #endif
    uint8_t _${header_name}_valid; \
//::  #endfor
//::  if not OPT_INLINE_EDITING:
    uint16_t payload_ofs; \
//::  #endif
    \

/* -- Called in lib/dp-packet.h -- */
#define OVS_HDR_RESET_ATTRS \
//::  for header_name in ordered_header_instances_regular:
    b->_${header_name}_ofs = UINT16_MAX; \
//::    if not OPT_INLINE_EDITING:
    memset(&b->_${header_name}, 0x00, sizeof(struct _${header_name}_header)); \
//::    #endif
    b->_${header_name}_valid = 0; \
//::  #endfor
//::  if not OPT_INLINE_EDITING:
    b->payload_ofs = UINT16_MAX; \
//::  #endif
    \

/* -- Called in lib/dp-packet.h -- */
#define OVS_HDR_GET_DP_PACKET_OFS \
//::  for header_name in ordered_header_instances_regular:
	static inline void * dp_packet_${header_name}(const struct dp_packet *b) { \
    	return b->_${header_name}_ofs != UINT16_MAX \
    			? (char *) dp_packet_data(b) + b->_${header_name}_ofs \
    			: NULL; \
    } \
//::  #endfor
	\

#endif	/* OVS_MATCH_DP_PACKET_H */
