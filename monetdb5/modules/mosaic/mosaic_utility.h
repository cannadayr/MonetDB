#ifndef _MOSAIC_UTILITY_
#define _MOSAIC_UTILITY_
#include "mosaic.h"

#include "mosaic_select.h"
#include "mosaic_projection.h"

#define ALGEBRA_INTERFACE(NAME, TPE) \
MOSselect_SIGNATURE(NAME, TPE);\
MOSprojection_SIGNATURE(NAME, TPE);\

#ifdef HAVE_HGE
#define ALGEBRA_INTERFACES_INTEGERS_ONLY(NAME) \
ALGEBRA_INTERFACE(NAME, bte);\
ALGEBRA_INTERFACE(NAME, sht);\
ALGEBRA_INTERFACE(NAME, int);\
ALGEBRA_INTERFACE(NAME, lng);\
ALGEBRA_INTERFACE(NAME, hge);
#else
#define ALGEBRA_INTERFACES_INTEGERS_ONLY(NAME) \
ALGEBRA_INTERFACE(NAME, bte);\
ALGEBRA_INTERFACE(NAME, sht);\
ALGEBRA_INTERFACE(NAME, int);\
ALGEBRA_INTERFACE(NAME, lng);
#endif

#define ALGEBRA_INTERFACES_ALL_TYPES(NAME) \
ALGEBRA_INTERFACES_INTEGERS_ONLY(NAME)\
ALGEBRA_INTERFACE(NAME, flt);\
ALGEBRA_INTERFACE(NAME, dbl);

#define DO_OPERATION_ON_INTEGERS_ONLY_bte(OPERATION, NAME) do_##OPERATION(NAME, bte)
#define DO_OPERATION_ON_INTEGERS_ONLY_sht(OPERATION, NAME) do_##OPERATION(NAME, sht)
#define DO_OPERATION_ON_INTEGERS_ONLY_int(OPERATION, NAME) do_##OPERATION(NAME, int)
#define DO_OPERATION_ON_INTEGERS_ONLY_lng(OPERATION, NAME) do_##OPERATION(NAME, lng)
#define DO_OPERATION_ON_INTEGERS_ONLY_flt(OPERATION, NAME) assert(0)
#define DO_OPERATION_ON_INTEGERS_ONLY_dbl(OPERATION, NAME) assert(0)
#ifdef HAVE_HGE
#define DO_OPERATION_ON_INTEGERS_ONLY_hge(OPERATION, NAME) do_##OPERATION(NAME, hge)
#endif

#define DO_OPERATION_ON_INTEGERS_ONLY(OPERATION, NAME, TPE) DO_OPERATION_ON_INTEGERS_ONLY_##TPE(OPERATION, NAME)
#define DO_OPERATION_ON_ALL_TYPES(OPERATION, NAME, TPE) do_##OPERATION(NAME, TPE)

#define DO_OPERATION_IF_ALLOWED(OPERATION, NAME, TPE) DO_OPERATION_ON_##NAME(OPERATION, TPE)

#endif /* _MOSAIC_UTILITY_ */
