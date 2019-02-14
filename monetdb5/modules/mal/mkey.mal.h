/*
* This Source Code Form is subject to the terms of the Mozilla Public
* License, v. 2.0.  If a copy of the MPL was not distributed with this
* file, You can obtain one at http://mozilla.org/MPL/2.0/.
*
* Copyright 1997 - July 2008 CWI, August 2008 - 2019 MonetDB B.V.
*/

// This file was generated automatically with mal2h.py. Do not edit this file directly.
{ "mkey", "\nmodule mkey;\n\ncommand rotate(v:lng, nbits:int) :lng\naddress MKEYrotate\n;\n\npattern hash(v:any):lng\naddress MKEYhash\n;\n\npattern hash(v:bit):lng\naddress MKEYhash\n;\npattern hash(v:bte):lng\naddress MKEYhash\n;\npattern hash(v:sht):lng\naddress MKEYhash\n;\npattern hash(v:int):lng\naddress MKEYhash\n;\npattern hash(v:flt):lng\naddress MKEYhash\n;\npattern hash(v:dbl):lng\naddress MKEYhash\n;\npattern hash(v:lng):lng\naddress MKEYhash\n;\npattern hash(v:str):lng\naddress MKEYhash\n;\n\npattern bulk_rotate_xor_hash(h:lng, nbits:int, v:any) :lng\naddress MKEYrotate_xor_hash\n;\n\ncommand bulk_rotate_xor_hash(h:lng, nbits:int, b:bat[:any_1])\n\t:bat[:lng]\naddress MKEYconstbulk_rotate_xor_hash\n;\n\npattern bulk_rotate_xor_hash(h:bat[:lng], nbits:int, v:any)\n\t:bat[:lng]\naddress MKEYbulkconst_rotate_xor_hash\n;\n\ncommand bulk_rotate_xor_hash(h:bat[:lng], nbits:int, b:bat[:any_1])\n\t:bat[:lng]\naddress MKEYbulk_rotate_xor_hash\n;\n\nmodule batmkey;\n\ncommand hash(b:bat[:any_1]) :bat[:lng]\naddress MKEYbathash\n;" }, 
