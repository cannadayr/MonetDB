/*
* This Source Code Form is subject to the terms of the Mozilla Public
* License, v. 2.0.  If a copy of the MPL was not distributed with this
* file, You can obtain one at http://mozilla.org/MPL/2.0/.
*
* Copyright 1997 - July 2008 CWI, August 2008 - 2019 MonetDB B.V.
*/

// This file was generated automatically with mal2h.py. Do not edit this file directly.
{ "microbenchmark", "\nmodule microbenchmark;\n\ncommand random(base:oid, size:lng, domain:int):bat[:int]\naddress MBMrandom\n;\n\ncommand random(base:oid, size:lng, domain:int, seed:int):bat[:int]\naddress MBMrandom_seed\n;\n\ncommand uniform(base:oid, size:lng, domain:int):bat[:int]\naddress MBMuniform\n;\n\ncommand normal(base:oid, size:lng, domain:int, stddev:int, mean:int):bat[:int]\naddress MBMnormal\n;\n\ncommand mix(b1:bat[:int]):bat[:int]\naddress MBMmix\n;\n\ncommand skewed(base:oid, size:lng, domain:int, skew:int):bat[:int]\naddress MBMskewed\n;\n" }, 
