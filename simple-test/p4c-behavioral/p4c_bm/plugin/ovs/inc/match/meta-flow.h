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
 * File:   meta-flow.h
 * Author: mshahbaz@cs.princeton.edu
 */

#ifndef OVS_MATCH_META_FLOW_H
#define	OVS_MATCH_META_FLOW_H 1

/* -- Called in lib/meta-flow.c -- */
#define OVS_GET_VALUE_CASES \
//::  for header_name in ordered_header_instances_non_virtual:
//::    if header_name == "standard_metadata":
//::      continue
//::    #endif
//::
//::    for field_name, bit_width in ordered_header_instances_non_virtual_field__name_width[header_name]:
    case MFF_${field_name.upper()}: \
//::      if bit_width == 8:
        value->u8 = flow->_${header_name}.hdr.${field_name}; \
//::      elif bit_width == 16:
        value->be16 = flow->_${header_name}.hdr.${field_name}; \
//::      elif bit_width == 32:
        value->be32 = flow->_${header_name}.hdr.${field_name}; \
//::      elif bit_width == 64:
        value->be64 = flow->_${header_name}.hdr.${field_name}; \
//::      else:
        memcpy(value->data, &flow->_${header_name}.hdr.${field_name}, \
               sizeof flow->_${header_name}.hdr.${field_name}); \
//::      #endif
        break; \
//::    #endfor
//::  #endfor
//::
//::  for header_name in ordered_header_instances_regular:
    case MFF_${header_name.upper()}_VALID: \
        value->u8 = flow->valid.hdr._${header_name}_valid; \
        break; \
//::  #endfor
    \

/* -- Called in lib/meta-flow.c -- */
#define OVS_IS_VALUE_VALID_CASES \
//::  for header_name in ordered_header_instances_non_virtual:
//::    if header_name == "standard_metadata":
//::      continue
//::    #endif
//::
//::    for field_name, bit_width in ordered_header_instances_non_virtual_field__name_width[header_name]:
    case MFF_${field_name.upper()}: \
        return true; \
//::    #endfor
//::  #endfor
//::
//::  for header_name in ordered_header_instances_regular:
    case MFF_${header_name.upper()}_VALID: \
        return true; \
//::  #endfor
    \

/* -- Called in lib/meta-flow.c -- */
#define OVS_IS_ALL_WILD_CASES \
//::  for header_name in ordered_header_instances_non_virtual:
//::    if header_name == "standard_metadata":
//::      continue
//::    #endif
//::
//::    for field_name, bit_width in ordered_header_instances_non_virtual_field__name_width[header_name]:
    case MFF_${field_name.upper()}: \
//::      if bit_width == 8 or bit_width == 16 or bit_width == 32 or bit_width == 64:
        return !wc->masks._${header_name}.hdr.${field_name}; \
//::      else:
        return is_all_zeros(&wc->masks._${header_name}.hdr.${field_name}, \
                            sizeof wc->masks._${header_name}.hdr.${field_name}); \
//::      #endif
//::    #endfor
//::  #endfor
//::
//::  for header_name in ordered_header_instances_regular:
    case MFF_${header_name.upper()}_VALID: \
        return !wc->masks.valid.hdr._${header_name}_valid; \
//::  #endfor
    \

/* -- Called in lib/meta-flow.c -- */
#define OVS_SET_FLOW_VALUE_CASES \
//::  for header_name in ordered_header_instances_non_virtual:
//::    if header_name == "standard_metadata":
//::      continue
//::    #endif
//::
//::    for field_name, bit_width in ordered_header_instances_non_virtual_field__name_width[header_name]:
    case MFF_${field_name.upper()}: \
//::      if bit_width == 8:
        flow->_${header_name}.hdr.${field_name} = value->u8; \
//::      elif bit_width == 16:
        flow->_${header_name}.hdr.${field_name} = value->be16; \
//::      elif bit_width == 32:
        flow->_${header_name}.hdr.${field_name} = value->be32; \
//::      elif bit_width == 64:
        flow->_${header_name}.hdr.${field_name} = value->be64; \
//::      else:
        memcpy(&flow->_${header_name}.hdr.${field_name}, value->data, \
               sizeof flow->_${header_name}.hdr.${field_name}); \
//::      #endif
        break; \
//::    #endfor
//::  #endfor
//::
//::  for header_name in ordered_header_instances_regular:
    case MFF_${header_name.upper()}_VALID: \
        flow->valid.hdr._${header_name}_valid = value->u8; \
        break; \
//::  #endfor
    \

/* -- Called in lib/meta-flow.c -- */
#define OVS_SET_VLAUE_CASES \
//::  for header_name in ordered_header_instances_non_virtual:
//::    if header_name == "standard_metadata":
//::      continue
//::    #endif
//::
//::    for field_name, bit_width in ordered_header_instances_non_virtual_field__name_width[header_name]:
    case MFF_${field_name.upper()}: \
//::      if bit_width == 8:
        match->wc.masks._${header_name}.hdr.${field_name} = 0xff; \
        match->flow._${header_name}.hdr.${field_name} = value->u8; \
//::      elif bit_width == 16:
        match->wc.masks._${header_name}.hdr.${field_name} = OVS_BE16_MAX; \
        match->flow._${header_name}.hdr.${field_name} = value->be16; \
//::      elif bit_width == 32:
        match->wc.masks._${header_name}.hdr.${field_name} = OVS_BE32_MAX; \
        match->flow._${header_name}.hdr.${field_name} = value->be32; \
//::      elif bit_width == 64:
        match->wc.masks._${header_name}.hdr.${field_name} = OVS_BE64_MAX; \
        match->flow._${header_name}.hdr.${field_name} = value->be64; \
//::      else:
        memset(&match->wc.masks._${header_name}.hdr.${field_name}, 0xff, \
               sizeof match->wc.masks._${header_name}.hdr.${field_name}); \
        memcpy(&match->flow._${header_name}.hdr.${field_name}, value->data, \
               sizeof match->flow._${header_name}.hdr.${field_name}); \
//::      #endif
        break; \
//::    #endfor
//::  #endfor
//::
//::  for header_name in ordered_header_instances_regular:
    case MFF_${header_name.upper()}_VALID: \
        match->wc.masks.valid.hdr._${header_name}_valid = 0xff; \
        match->flow.valid.hdr._${header_name}_valid = value->u8; \
        break; \
//::  #endfor
    \

/* -- Called in lib/meta-flow.c -- */
#define OVS_SET_WILD_CASES \
//::  for header_name in ordered_header_instances_non_virtual:
//::    if header_name == "standard_metadata":
//::      continue
//::    #endif
//::
//::    for field_name, bit_width in ordered_header_instances_non_virtual_field__name_width[header_name]:
    case MFF_${field_name.upper()}: \
//::      if bit_width == 8 or bit_width == 16 or bit_width == 32 or bit_width == 64:
        match->flow._${header_name}.hdr.${field_name} = 0; \
        match->wc.masks._${header_name}.hdr.${field_name} = 0; \
//::      else:
        memset(&match->flow._${header_name}.hdr.${field_name}, 0, \
               sizeof match->flow._${header_name}.hdr.${field_name}); \
        memset(&match->wc.masks._${header_name}.hdr.${field_name}, 0, \
               sizeof match->wc.masks._${header_name}.hdr.${field_name}); \
//::      #endif
        break; \
//::    #endfor
//::  #endfor
//::
//::  for header_name in ordered_header_instances_regular:
    case MFF_${header_name.upper()}_VALID: \
        match->flow.valid.hdr._${header_name}_valid = 0; \
        match->wc.masks.valid.hdr._${header_name}_valid = 0; \
        break; \
//::  #endfor
    \

/* -- Called in lib/meta-flow.c -- */
#define OVS_SET_CASES \
//::  for header_name in ordered_header_instances_non_virtual:
//::    if header_name == "standard_metadata":
//::      continue
//::    #endif
//::
//::    for field_name, bit_width in ordered_header_instances_non_virtual_field__name_width[header_name]:
    case MFF_${field_name.upper()}: \
//::      if bit_width == 8:
        match->flow._${header_name}.hdr.${field_name} = value->u8 & mask->u8; \
        match->wc.masks._${header_name}.hdr.${field_name} = mask->u8; \
//::      elif bit_width == 16:
        match->flow._${header_name}.hdr.${field_name} = value->be16 & mask->be16; \
        match->wc.masks._${header_name}.hdr.${field_name} = mask->be16; \
//::      elif bit_width == 32:
        match->flow._${header_name}.hdr.${field_name} = value->be32 & mask->be32; \
        match->wc.masks._${header_name}.hdr.${field_name} = mask->be32; \
//::      elif bit_width == 64:
        match->flow._${header_name}.hdr.${field_name} = value->be64 & mask->be64; \
        match->wc.masks._${header_name}.hdr.${field_name} = mask->be64; \
//::      else:
        set_masked(value->data, mask->data, \
                   (uint8_t *) &match->flow._${header_name}.hdr.${field_name}, \
                   (uint8_t *) &match->wc.masks._${header_name}.hdr.${field_name}, \
                   sizeof match->flow._${header_name}.hdr.${field_name}); \
//::      #endif
        break; \
//::    #endfor
//::  #endfor
//::
//::  for header_name in ordered_header_instances_regular:
    case MFF_${header_name.upper()}_VALID: \
        match->flow.valid.hdr._${header_name}_valid = value->u8 & mask->u8; \
        match->wc.masks.valid.hdr._${header_name}_valid = mask->u8; \
        break; \
//::  #endfor
    \

#endif	/* OVS_MATCH_META_FLOW_H */