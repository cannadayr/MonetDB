/*
* This Source Code Form is subject to the terms of the Mozilla Public
* License, v. 2.0.  If a copy of the MPL was not distributed with this
* file, You can obtain one at http://mozilla.org/MPL/2.0/.
*
* Copyright 1997 - July 2008 CWI, August 2008 - 2019 MonetDB B.V.
*/

// This file was generated automatically with mal2h.py. Do not edit this file directly.
{ "uuid", "atom uuid;\n\ncommand cmp() address UUIDcompare;\ncommand fromstr() address UUIDfromString;\ncommand hash() address UUIDhash;\ncommand null() address UUIDnull;\ncommand read() address UUIDread;\ncommand tostr() address UUIDtoString;\ncommand write() address UUIDwrite;\n\ncommand prelude():void address UUIDprelude;\nuuid.prelude();\n\nunsafe command new() :uuid\naddress UUIDgenerateUuid\n;\n\nunsafe command new(d:int) :uuid\naddress UUIDgenerateUuidInt\n;\n\ncommand uuid(s:str):uuid\naddress UUIDstr2uuid\n;\n\ncommand str(u:uuid):str\naddress UUIDuuid2str\n;\n\ncommand isaUUID(u:str):bit\naddress UUIDisaUUID\n;\n\nmodule calc;\n\ncommand uuid(s:str):uuid\naddress UUIDstr2uuid\n;\n\nfunction uuid(u:uuid):uuid;\n return u;\nend uuid;\n\ncommand str(s:uuid):str\naddress UUIDuuid2str\n;\n\npattern ==(l:uuid,r:uuid):bit\naddress CMDvarEQ\n;\n\npattern ==(l:uuid,r:uuid,nil_matches:bit):bit\naddress CMDvarEQ\n;\n\npattern !=(l:uuid,r:uuid):bit\naddress CMDvarNE\n;\n\npattern !=(l:uuid,r:uuid,nil_matches:bit):bit\naddress CMDvarNE\n;\n\npattern <(l:uuid,r:uuid):bit\naddress CMDvarLT\n;\n\npattern <=(l:uuid,r:uuid):bit\naddress CMDvarLE\n;\n\npattern >(l:uuid,r:uuid):bit\naddress CMDvarGT\n;\n\npattern >=(l:uuid,r:uuid):bit\naddress CMDvarGE\n;\n\nmodule batcalc;\n\npattern ==(b1:bat[:uuid],b2:bat[:uuid]) :bat[:bit]\naddress CMDbatEQ\n;\n\npattern ==(b1:bat[:uuid],b2:bat[:uuid],nil_matches:bit) :bat[:bit]\naddress CMDbatEQ\n;\n\npattern !=(b1:bat[:uuid],b2:bat[:uuid]) :bat[:bit]\naddress CMDbatNE\n;\n\npattern !=(b1:bat[:uuid],b2:bat[:uuid],nil_matches:bit) :bat[:bit]\naddress CMDbatNE\n;\n\npattern <(b1:bat[:uuid],b2:bat[:uuid]) :bat[:bit]\naddress CMDbatLT\n;\n\npattern <=(b1:bat[:uuid],b2:bat[:uuid]) :bat[:bit]\naddress CMDbatLE\n;\n\npattern >(b1:bat[:uuid],b2:bat[:uuid]) :bat[:bit]\naddress CMDbatGT\n;\n\npattern >=(b1:bat[:uuid],b2:bat[:uuid]) :bat[:bit]\naddress CMDbatGE\n;\n\nfunction uuid(u:bat[:uuid]):bat[:uuid];\n return u;\nend uuid;" }, 
