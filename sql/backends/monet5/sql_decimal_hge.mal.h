/*
* This Source Code Form is subject to the terms of the Mozilla Public
* License, v. 2.0.  If a copy of the MPL was not distributed with this
* file, You can obtain one at http://mozilla.org/MPL/2.0/.
*
* Copyright 1997 - July 2008 CWI, August 2008 - 2019 MonetDB B.V.
*/

// This file was generated automatically with mal2h.py. Do not edit this file directly.
{ "sql_decimal_hge", "\n\ncommand calc.hge(v:flt, digits:int, scale:int) :hge\naddress flt_num2dec_hge\n;\n\ncommand batcalc.hge(v:bat[:flt], digits:int, scale:int) :bat[:hge]\naddress batflt_num2dec_hge\n;\n\ncommand calc.hge(v:dbl, digits:int, scale:int) :hge\naddress dbl_num2dec_hge\n;\n\ncommand batcalc.hge(v:bat[:dbl], digits:int, scale:int) :bat[:hge]\naddress batdbl_num2dec_hge\n;\n\ncommand calc.hge(v:bte, digits:int, scale:int) :hge\naddress bte_num2dec_hge\n;\n\ncommand batcalc.hge(v:bat[:bte], digits:int, scale:int) :bat[:hge]\naddress batbte_num2dec_hge\n;\n\ncommand calc.hge(s1:int, v:bte) :hge\naddress bte_dec2_hge\n;\ncommand calc.hge(s1:int, v:bte, d2:int, s2:int) :hge\naddress bte_dec2dec_hge\n;\n\ncommand batcalc.hge(s1:int, v:bat[:bte]) :bat[:hge]\naddress batbte_dec2_hge\n;\ncommand batcalc.hge(s1:int, v:bat[:bte], d2:int, s2:int) :bat[:hge]\naddress batbte_dec2dec_hge\n;\n\ncommand calc.hge(v:sht, digits:int, scale:int) :hge\naddress sht_num2dec_hge\n;\n\ncommand batcalc.hge(v:bat[:sht], digits:int, scale:int) :bat[:hge]\naddress batsht_num2dec_hge\n;\n\ncommand calc.hge(s1:int, v:sht) :hge\naddress sht_dec2_hge\n;\ncommand calc.hge(s1:int, v:sht, d2:int, s2:int) :hge\naddress sht_dec2dec_hge\n;\n\ncommand batcalc.hge(s1:int, v:bat[:sht]) :bat[:hge]\naddress batsht_dec2_hge\n;\ncommand batcalc.hge(s1:int, v:bat[:sht], d2:int, s2:int) :bat[:hge]\naddress batsht_dec2dec_hge\n;\n\ncommand calc.hge(v:int, digits:int, scale:int) :hge\naddress int_num2dec_hge\n;\n\ncommand batcalc.hge(v:bat[:int], digits:int, scale:int) :bat[:hge]\naddress batint_num2dec_hge\n;\n\ncommand calc.hge(s1:int, v:int) :hge\naddress int_dec2_hge\n;\ncommand calc.hge(s1:int, v:int, d2:int, s2:int) :hge\naddress int_dec2dec_hge\n;\n\ncommand batcalc.hge(s1:int, v:bat[:int]) :bat[:hge]\naddress batint_dec2_hge\n;\ncommand batcalc.hge(s1:int, v:bat[:int], d2:int, s2:int) :bat[:hge]\naddress batint_dec2dec_hge\n;\n\ncommand calc.hge(v:lng, digits:int, scale:int) :hge\naddress lng_num2dec_hge\n;\n\ncommand batcalc.hge(v:bat[:lng], digits:int, scale:int) :bat[:hge]\naddress batlng_num2dec_hge\n;\n\ncommand calc.hge(s1:int, v:lng) :hge\naddress lng_dec2_hge\n;\ncommand calc.hge(s1:int, v:lng, d2:int, s2:int) :hge\naddress lng_dec2dec_hge\n;\n\ncommand batcalc.hge(s1:int, v:bat[:lng]) :bat[:hge]\naddress batlng_dec2_hge\n;\ncommand batcalc.hge(s1:int, v:bat[:lng], d2:int, s2:int) :bat[:hge]\naddress batlng_dec2dec_hge\n;\n\ncommand calc.hge(v:hge, digits:int, scale:int) :hge\naddress hge_num2dec_hge\n;\n\ncommand batcalc.hge(v:bat[:hge], digits:int, scale:int) :bat[:hge]\naddress bathge_num2dec_hge\n;\n\ncommand calc.hge(s1:int, v:hge) :hge\naddress hge_dec2_hge\n;\ncommand calc.hge(s1:int, v:hge, d2:int, s2:int) :hge\naddress hge_dec2dec_hge\n;\n\ncommand batcalc.hge(s1:int, v:bat[:hge]) :bat[:hge]\naddress bathge_dec2_hge\n;\ncommand batcalc.hge(s1:int, v:bat[:hge], d2:int, s2:int) :bat[:hge]\naddress bathge_dec2dec_hge\n;\n\ncommand calc.bte(v:hge, digits:int, scale:int) :bte\naddress hge_num2dec_bte\n;\n\ncommand batcalc.bte(v:bat[:hge], digits:int, scale:int) :bat[:bte]\naddress bathge_num2dec_bte\n;\n\ncommand calc.bte(s1:int, v:hge) :bte\naddress hge_dec2_bte\n;\ncommand calc.bte(s1:int, v:hge, d2:int, s2:int) :bte\naddress hge_dec2dec_bte\n;\n\ncommand batcalc.bte(s1:int, v:bat[:hge]) :bat[:bte]\naddress bathge_dec2_bte\n;\ncommand batcalc.bte(s1:int, v:bat[:hge], d2:int, s2:int) :bat[:bte]\naddress bathge_dec2dec_bte\n;\n\ncommand calc.sht(v:hge, digits:int, scale:int) :sht\naddress hge_num2dec_sht\n;\n\ncommand batcalc.sht(v:bat[:hge], digits:int, scale:int) :bat[:sht]\naddress bathge_num2dec_sht\n;\n\ncommand calc.sht(s1:int, v:hge) :sht\naddress hge_dec2_sht\n;\ncommand calc.sht(s1:int, v:hge, d2:int, s2:int) :sht\naddress hge_dec2dec_sht\n;\n\ncommand batcalc.sht(s1:int, v:bat[:hge]) :bat[:sht]\naddress bathge_dec2_sht\n;\ncommand batcalc.sht(s1:int, v:bat[:hge], d2:int, s2:int) :bat[:sht]\naddress bathge_dec2dec_sht\n;\n\ncommand calc.int(v:hge, digits:int, scale:int) :int\naddress hge_num2dec_int\n;\n\ncommand batcalc.int(v:bat[:hge], digits:int, scale:int) :bat[:int]\naddress bathge_num2dec_int\n;\n\ncommand calc.int(s1:int, v:hge) :int\naddress hge_dec2_int\n;\ncommand calc.int(s1:int, v:hge, d2:int, s2:int) :int\naddress hge_dec2dec_int\n;\n\ncommand batcalc.int(s1:int, v:bat[:hge]) :bat[:int]\naddress bathge_dec2_int\n;\ncommand batcalc.int(s1:int, v:bat[:hge], d2:int, s2:int) :bat[:int]\naddress bathge_dec2dec_int\n;\n\ncommand calc.lng(v:hge, digits:int, scale:int) :lng\naddress hge_num2dec_lng\n;\n\ncommand batcalc.lng(v:bat[:hge], digits:int, scale:int) :bat[:lng]\naddress bathge_num2dec_lng\n;\n\ncommand calc.lng(s1:int, v:hge) :lng\naddress hge_dec2_lng\n;\ncommand calc.lng(s1:int, v:hge, d2:int, s2:int) :lng\naddress hge_dec2dec_lng\n;\n\ncommand batcalc.lng(s1:int, v:bat[:hge]) :bat[:lng]\naddress bathge_dec2_lng\n;\ncommand batcalc.lng(s1:int, v:bat[:hge], d2:int, s2:int) :bat[:lng]\naddress bathge_dec2dec_lng\n;\n\ncommand calc.flt(v:hge, digits:int, scale:int) :flt\naddress hge_num2dec_flt\n;\n\ncommand batcalc.flt(v:bat[:hge], digits:int, scale:int) :bat[:flt]\naddress bathge_num2dec_flt\n;\n\ncommand calc.flt(s1:int, v:hge) :flt\naddress hge_dec2_flt\n;\ncommand calc.flt(s1:int, v:hge, d2:int, s2:int) :flt\naddress hge_dec2dec_flt\n;\n\ncommand batcalc.flt(s1:int, v:bat[:hge]) :bat[:flt]\naddress bathge_dec2_flt\n;\ncommand batcalc.flt(s1:int, v:bat[:hge], d2:int, s2:int) :bat[:flt]\naddress bathge_dec2dec_flt\n;\n\ncommand calc.dbl(v:hge, digits:int, scale:int) :dbl\naddress hge_num2dec_dbl\n;\n\ncommand batcalc.dbl(v:bat[:hge], digits:int, scale:int) :bat[:dbl]\naddress bathge_num2dec_dbl\n;\n\ncommand calc.dbl(s1:int, v:hge) :dbl\naddress hge_dec2_dbl\n;\ncommand calc.dbl(s1:int, v:hge, d2:int, s2:int) :dbl\naddress hge_dec2dec_dbl\n;\n\ncommand batcalc.dbl(s1:int, v:bat[:hge]) :bat[:dbl]\naddress bathge_dec2_dbl\n;\ncommand batcalc.dbl(s1:int, v:bat[:hge], d2:int, s2:int) :bat[:dbl]\naddress bathge_dec2dec_dbl\n;\n" }, 
