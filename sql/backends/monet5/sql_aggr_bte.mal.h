/*
* This Source Code Form is subject to the terms of the Mozilla Public
* License, v. 2.0.  If a copy of the MPL was not distributed with this
* file, You can obtain one at http://mozilla.org/MPL/2.0/.
*
* Copyright 1997 - July 2008 CWI, August 2008 - 2019 MonetDB B.V.
*/

// This file was generated automatically with mal2h.py. Do not edit this file directly.
{ "sql_aggr_bte", "\nfunction aggr.covar(e1:bat[:bte], e2:bat[:bte]):dbl;\n\te0:bat[:sht] := batcalc.*(e1,e2);\n\ts0:dbl := aggr.avg(e0);\n\t\te1n  := algebra.select(e1,    nil:bte,nil:bte,false,false,false);\n\te12n := algebra.select(e1,e1n,nil:bte,nil:bte,false,false,false);\n\ts1:dbl := batcalc.avg(e1,e12n);\n\ts2:dbl := batcalc.avg(e2,e12n);\n\ts3:dbl := calc.*(s1,s2);\n\tv:dbl := calc.-(s0,s3);\n\treturn v;\nend aggr.covar;\n\nfunction aggr.corr(e1:bat[:bte], e2:bat[:bte]):dbl;\n\tcv := aggr.covar(e1,e2);\n\tsd1 := aggr.stdev(e1);\n\tsd2 := aggr.stdev(e2);\n\tsd := calc.*(sd1,sd2);\n\tsdn := calc.==(sd,0:dbl);\n\tsds := calc.ifthenelse(sdn,nil:dbl,sd);\n\tres := calc./(cv,sds);\n\treturn res;\nend aggr.corr;\n\nfunction aggr.subcovar(e1:bat[:bte], e2:bat[:bte], g:bat[:oid], e:bat[:any_2], f:bit):bat[:dbl];\n\te0:bat[:sht] := batcalc.*(e1,e2);\n\ts0:bat[:dbl] := aggr.subavg(e0,g,e,f,true);\n\t\tt := calc.not(f);\n\te1n  := algebra.select(e1,    nil:bte,nil:bte,t,t,false);\n\te12n := algebra.select(e1,e1n,nil:bte,nil:bte,t,t,false);\n\ts1:bat[:dbl] := aggr.subavg(e1,g,e,e12n,f,true);\n\ts2:bat[:dbl] := aggr.subavg(e2,g,e,e12n,f,true);\n\ts3:bat[:dbl] := batcalc.*(s1,s2);\n\tv:bat[:dbl] := batcalc.-(s0,s3);\n\treturn v;\nend aggr.subcovar;\n\nfunction aggr.subcorr(e1:bat[:bte], e2:bat[:bte], g:bat[:oid],e:bat[:any_2], f:bit):bat[:dbl];\n\tcv := aggr.subcovar(e1,e2,g,e,f);\n\tsd1 := aggr.substdevp(e1,g,e,f,true);\n\tsd2 := aggr.substdevp(e2,g,e,f,true);\n\tsd := batcalc.*(sd1,sd2);\n\tsdn := batcalc.==(sd,0:dbl);\n\tsds := batcalc.ifthenelse(sdn,nil:dbl,sd);\n\tres := batcalc./(cv,sds);\n\treturn res;\nend aggr.subcorr;" }, 
