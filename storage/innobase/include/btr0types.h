/************************************************************************
The index tree general types

(c) 1996 Innobase Oy

Created 2/17/1996 Heikki Tuuri
*************************************************************************/

#ifndef btr0types_h
#define btr0types_h

#include "univ.i"

#include "rem0types.h"
#include "page0types.h"

typedef struct btr_pcur_struct		btr_pcur_t;
typedef struct btr_cur_struct		btr_cur_t;
typedef struct btr_search_struct	btr_search_t;

#if defined UNIV_DEBUG || defined UNIV_BLOB_LIGHT_DEBUG
#define BTR_EXTERN_FIELD_REF_SIZE	20
extern const byte field_ref_zero[BTR_EXTERN_FIELD_REF_SIZE];
#endif /* UNIV_DEBUG || UNIV_BLOB_LIGHT_DEBUG */

#endif
