/*
* This Source Code Form is subject to the terms of the Mozilla Public
* License, v. 2.0.  If a copy of the MPL was not distributed with this
* file, You can obtain one at http://mozilla.org/MPL/2.0/.
*
* Copyright 1997 - July 2008 CWI, August 2008 - 2019 MonetDB B.V.
*/

// This file was generated automatically with mal2h.py. Do not edit this file directly.
{ "querylog", "\nmodule querylog;\n\ncommand enable(threshold:int)\naddress QLOGenableThreshold\n;\n\ncommand enable()\naddress QLOGenable\n;\n\ncommand disable()\naddress QLOGdisable\n;\n\ncommand isset():int\naddress QLOGissetFcn\n;\n\ncommand empty()\naddress QLOGempty\n;\n\npattern append(q:str, pipe:str, usr:str, tick:timestamp)\naddress QLOGappend\n;\n\ncommand define(q:str, pipe:str, size:int)\naddress QLOGdefineNaive\n;\n\npattern call(tick1:timestamp, tick2:timestamp, arg:str, tuples:lng, xtime:lng, rtime:lng, cpu:int, iowait:int)\naddress QLOGcall\n;" }, 
