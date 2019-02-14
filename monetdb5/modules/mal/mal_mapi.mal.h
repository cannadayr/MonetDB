/*
* This Source Code Form is subject to the terms of the Mozilla Public
* License, v. 2.0.  If a copy of the MPL was not distributed with this
* file, You can obtain one at http://mozilla.org/MPL/2.0/.
*
* Copyright 1997 - July 2008 CWI, August 2008 - 2019 MonetDB B.V.
*/

// This file was generated automatically with mal2h.py. Do not edit this file directly.
{ "mal_mapi", "\nmodule mapi;\n\ncommand listen():int\naddress SERVERlisten_default\n;\ncommand listen(port:int):int\naddress SERVERlisten_port\n;\ncommand listen(unixsocket:str):int\naddress SERVERlisten_usock\n;\n\ncommand stop():void\naddress SERVERstop\n;\n\ncommand suspend():void\naddress SERVERsuspend\n;\n\ncommand resume():void\naddress SERVERresume\n;\n\ncommand malclient(in:streams, out:streams):void\naddress SERVERclient\n;\n\n\ncommand trace(mid:int,flag:int):void\naddress SERVERtrace\n;\n\npattern reconnect(host:str, port:int, usr:str, passwd:str,lang:str):int\naddress SERVERreconnectWithoutAlias\n;\n\npattern reconnect(host:str, port:int, db_alias:str, usr:str, passwd:str,lang:str):int\naddress SERVERreconnectAlias\n;\n\ncommand reconnect(mid:int):void\naddress SERVERreconnect\n;\n\npattern connect(host:str, port:int, usr:str, passwd:str,lang:str):int\naddress SERVERconnect\n;\n\ncommand disconnect(dbalias:str):int\naddress SERVERdisconnectWithAlias\n;\n\ncommand disconnect():int\naddress SERVERdisconnectALL\n;\n\ncommand setAlias(key:int,dbalias:str)\naddress SERVERsetAlias\n;\n\ncommand lookup(dbalias:str):int\naddress SERVERlookup\n;\n\ncommand disconnect(mid:int):void\naddress SERVERdisconnect\n;\n\ncommand destroy(mid:int):void\naddress SERVERdestroy\n;\n\ncommand ping(mid:int):int\naddress SERVERping\n;\n\ncommand query(mid:int, qry:str):int\naddress SERVERquery\n;\n\ncommand query_handle(mid:int, qry:str):int\naddress SERVERquery_handle\n;\n\npattern query_array(mid:int, qry:str, arg:str...):int\naddress SERVERquery_array\n;\n\ncommand prepare(mid:int, qry:str):int\naddress SERVERprepare\n;\n\ncommand finish(hdl:int):int\naddress SERVERfinish\n;\n\ncommand get_field_count(hdl:int):int\naddress SERVERget_field_count\n;\n\ncommand get_row_count(hdl:int):lng\naddress SERVERget_row_count\n;\n\ncommand rows_affected(hdl:int):lng\naddress SERVERrows_affected\n;\n\ncommand fetch_row(hdl:int):int\naddress SERVERfetch_row\n;\n\ncommand fetch_all_rows(hdl:int):lng\naddress SERVERfetch_all_rows\n;\n\ncommand fetch_field(hdl:int,fnr:int):str\naddress SERVERfetch_field_str\n;\n\ncommand fetch_field(hdl:int,fnr:int):int\naddress SERVERfetch_field_int\n;\n\ncommand fetch_field(hdl:int,fnr:int):lng\naddress SERVERfetch_field_lng\n;\n\ncommand fetch_field(hdl:int,fnr:int):sht\naddress SERVERfetch_field_sht\n;\n\ncommand fetch_field(hdl:int,fnr:int):void\naddress SERVERfetch_field_void\n;\n\ncommand fetch_field(hdl:int,fnr:int):oid\naddress SERVERfetch_field_oid\n;\n\ncommand fetch_field(hdl:int,fnr:int):bte\naddress SERVERfetch_field_bte\n;\n\ncommand fetch_field_array(hdl:int):bat[:str]\naddress SERVERfetch_field_bat\n;\n\ncommand fetch_line(hdl:int):str\naddress SERVERfetch_line\n;\n\ncommand fetch_reset(hdl:int):int\naddress SERVERfetch_reset\n;\n\ncommand next_result(hdl:int):int\naddress SERVERnext_result\n;\n\ncommand error(mid:int):int\naddress SERVERerror\n;\n\ncommand getError(mid:int):str\naddress SERVERgetError\n;\n\ncommand explain(mid:int):str\naddress SERVERexplain\n;\n\npattern put(mid:int, nme:str, val:any_1):void\naddress SERVERput\n;\n\npattern put(nme:str, val:any_1):str\naddress SERVERputLocal\n;\n\npattern rpc(key:int,qry:str...):any\naddress SERVERmapi_rpc_single_row\n;\n\npattern rpc(key:int,qry:str):bat[:any_2]\naddress SERVERmapi_rpc_bat;\n\ncommand rpc(key:int,qry:str):int\naddress SERVERquery\n;\n\npattern bind(key:int,rschema:str,rtable:str,rcolumn:str,i:int):bat[:any_2]\naddress SERVERbindBAT\n;\n\npattern bind(key:int,rschema:str,rtable:str,i:int):bat[:any_2]\naddress SERVERbindBAT\n;\n\npattern bind(key:int,remoteName:str):bat[:any_2]\naddress SERVERbindBAT\n;\n\n\nmapi.listen();" }, 
