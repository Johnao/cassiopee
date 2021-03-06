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
 * File:   match.h
 * Author: mshahbaz@cs.princeton.edu
 */

#ifndef OVS_MATCH_MATCH_H
#define	OVS_MATCH_MATCH_H 1

/* -- Called in lib/match.c -- */
#define OVS_MATCH_FORMAT \
//::  for header_name in ordered_header_instances_non_virtual:
//::    if header_name == "standard_metadata":
//::      continue
//::    #endif
//::
//::    for field_name, bit_width in ordered_header_instances_non_virtual_field__name_width[header_name]:
//::      if bit_width == 8:
    format_be8_masked(s, "${field_name}", f->_${header_name}.hdr.${field_name}, \
                      wc->masks._${header_name}.hdr.${field_name}); \
//::      elif bit_width == 16:
    format_be16_masked(s, "${field_name}", f->_${header_name}.hdr.${field_name}, \
                       wc->masks._${header_name}.hdr.${field_name}); \
//::      elif bit_width == 32:
    format_be32_masked(s, "${field_name}", f->_${header_name}.hdr.${field_name}, \
                       wc->masks._${header_name}.hdr.${field_name}); \
//::      elif bit_width == 64:
    format_be64_masked(s, "${field_name}", f->_${header_name}.hdr.${field_name}, \
                       wc->masks._${header_name}.hdr.${field_name}); \
//::      else:
    format_bex_masked(s, "${field_name}", \
                      (const uint8_t *) &f->_${header_name}.hdr.${field_name}, \
                      (const uint8_t *) &wc->masks._${header_name}.hdr.${field_name}, \
                      sizeof f->_${header_name}.hdr.${field_name}); \
//::      #endif
//::    #endfor
    \
//::  #endfor
//::
//::  for header_name in ordered_header_instances_regular:
    format_be8_masked(s, "${header_name}_valid", f->valid.hdr._${header_name}_valid, \
                      wc->masks.valid.hdr._${header_name}_valid); \
//::  #endfor
    \

#endif	/* OVS_MATCH_MATCH_H */