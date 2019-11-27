/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 1997 - July 2008 CWI, August 2008 - 2018 MonetDB B.V.
 */

/*
 * (c)2014 author Martin Kersten
 */

#ifndef _MOSAIC_DELTA_
#define _MOSAIC_DELTA_

#include <mal.h>
#include "mal_interpreter.h"
#include "mal_client.h"
#include "mosaic_utility.h"

bool MOStypes_delta(BAT* b);
mal_export void MOSlayout_delta(MOStask task, BAT *btech, BAT *bcount, BAT *binput, BAT *boutput, BAT *bproperties);
mal_export void MOSadvance_delta(MOStask task);
mal_export void MOSskip_delta(MOStask task);
mal_export str  MOSestimate_delta(MOStask task, MosaicEstimation* current, const MosaicEstimation* previous);
mal_export void MOScompress_delta(MOStask task, MosaicBlkRec* estimate);
mal_export void MOSdecompress_delta(MOStask task);
mal_export str MOSjoin_delta( MOStask task, bit nil_matches);

ALGEBRA_INTERFACES_INTEGERS_ONLY(delta);
#define DO_OPERATION_ON_delta(OPERATION, TPE) DO_OPERATION_ON_INTEGERS_ONLY(OPERATION, delta, TPE)

#endif /* _MOSAIC_DELTA_ */
