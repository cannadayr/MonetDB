/*
* This Source Code Form is subject to the terms of the Mozilla Public
* License, v. 2.0.  If a copy of the MPL was not distributed with this
* file, You can obtain one at http://mozilla.org/MPL/2.0/.
*
* Copyright 1997 - July 2008 CWI, August 2008 - 2019 MonetDB B.V.
*/

// This file was generated automatically with mal2h.py. Do not edit this file directly.
{ "optimizer", "\nmodule optimizer;\n\n\npattern optimizer.aliases():str\naddress OPTwrapper;\npattern optimizer.aliases(mod:str, fcn:str):str\naddress OPTwrapper\n;\n\n\npattern optimizer.coercions():str\naddress OPTwrapper;\npattern optimizer.coercions(mod:str, fcn:str):str\naddress OPTwrapper\n;\n\n\npattern optimizer.commonTerms():str\naddress OPTwrapper;\npattern optimizer.commonTerms(mod:any_1, fcn:any_2):str\naddress OPTwrapper\n;\n\npattern optimizer.candidates():str\naddress OPTwrapper;\npattern optimizer.candidates(mod:str, fcn:str):str \naddress OPTwrapper\n;\n\npattern optimizer.volcano():str\naddress OPTwrapper;\npattern optimizer.volcano(mod:str, fcn:str):str \naddress OPTwrapper\n;\n\npattern optimizer.constants():str\naddress OPTwrapper;\npattern optimizer.constants(mod:str, fcn:str):str \naddress OPTwrapper\n;\n\npattern optimizer.profiler():str\naddress OPTwrapper;\npattern optimizer.profiler(mod:str, fcn:str):str \naddress OPTwrapper\n;\n\n\npattern optimizer.costModel():str\naddress OPTwrapper;\npattern optimizer.costModel(mod:str, fcn:str):str\naddress OPTwrapper\n;\n\n\npattern optimizer.dataflow():str\naddress OPTwrapper;\npattern optimizer.dataflow(mod:str, fcn:str):str\naddress OPTwrapper\n;\n\n\npattern optimizer.deadcode():str\naddress OPTwrapper;\npattern optimizer.deadcode(mod:str, fcn:str):str\naddress OPTwrapper\n;\n\n\npattern optimizer.emptybind():str\naddress OPTwrapper;\npattern optimizer.emptybind(mod:str, fcn:str):str\naddress OPTwrapper\n;\n\n\npattern optimizer.jit():str\naddress OPTwrapper;\npattern optimizer.jit(mod:str, fcn:str):str\naddress OPTwrapper\n;\n\n\npattern optimizer.evaluate():str\naddress OPTwrapper;\npattern optimizer.evaluate(mod:str, fcn:str):str\naddress OPTwrapper\n;\n\n\npattern optimizer.garbageCollector():str\naddress OPTwrapper;\npattern optimizer.garbageCollector(mod:str, fcn:str):str\naddress OPTwrapper\n;\n\npattern optimizer.generator():str\naddress OPTwrapper;\npattern optimizer.generator(mod:str, fcn:str):str\naddress OPTwrapper\n;\n\npattern optimizer.querylog():str\naddress OPTwrapper;\npattern optimizer.querylog(mod:str, fcn:str):str\naddress OPTwrapper\n;\n\nmodule optimizer;\npattern prelude()\naddress optimizer_prelude\n;\n\npattern optimize(mod:str, fcn:str)\naddress QOToptimize\n;\n\n\npattern optimizer.inline():str\naddress OPTwrapper;\npattern optimizer.inline(mod:str, fcn:str):str\naddress OPTwrapper\n;\n\npattern optimizer.projectionpath():str\naddress OPTwrapper;\npattern optimizer.projectionpath(mod:str, fcn:str):str\naddress OPTwrapper\n;\n\npattern algebra.projectionpath(l:bat[:any]...):bat[:any]\naddress ALGprojectionpath\n;\n\n\npattern optimizer.macro(targetmod:str,targetfcn:str):void\naddress OPTmacro\n;\npattern optimizer.macro(mod:str,fcn:str,targetmod:str,targetfcn:str):void\naddress OPTmacro\n;\n\npattern optimizer.orcam(targetmod:str,targetfcn:str):void\naddress OPTorcam\n;\npattern optimizer.orcam(mod:str,fcn:str,targetmod:str,targetfcn:str):void\naddress OPTorcam\n;\n\n\npattern optimizer.mergetable():str\naddress OPTwrapper;\npattern optimizer.mergetable(mod:str, fcn:str):str\naddress OPTwrapper\n;\n\n\npattern optimizer.mitosis():str\naddress OPTwrapper;\npattern optimizer.mitosis(mod:str, fcn:str):str\naddress OPTwrapper\n;\n\npattern optimizer.multiplex():void\naddress OPTwrapper\n;\n\npattern optimizer.multiplex(mod:str,fcn:str):void\naddress OPTwrapper\n;\n\npattern optimizer.matpack():str\naddress OPTwrapper;\npattern optimizer.matpack(mod:str, fcn:str):str\naddress OPTwrapper\n;\n\npattern optimizer.json():str\naddress OPTwrapper;\npattern optimizer.json(mod:str, fcn:str):str\naddress OPTwrapper\n;\n\n\npattern optimizer.reduce():str\naddress OPTwrapper;\npattern optimizer.reduce(mod:str, fcn:str):str\naddress OPTwrapper\n;\n\n\npattern optimizer.remap():str\naddress OPTwrapper;\npattern optimizer.remap(mod:str, fcn:str):str\naddress OPTwrapper\n;\n\n\npattern optimizer.remoteQueries():str\naddress OPTwrapper;\npattern optimizer.remoteQueries(mod:str, fcn:str):str\naddress OPTwrapper\n;\n\n\npattern optimizer.reorder():str\naddress OPTwrapper;\npattern optimizer.reorder(mod:str, fcn:str):str\naddress OPTwrapper\n;\n\n\npattern inspect.optimizer_stats()(:bat[:str], :bat[:int], :bat[:lng])\naddress OPTstatistics\n;\n\n\npattern optimizer.pushselect():str\naddress OPTwrapper;\npattern optimizer.pushselect(mod:str, fcn:str):str\naddress OPTwrapper\n;\n\n\npattern optimizer.oltp():str\naddress OPTwrapper;\npattern optimizer.oltp(mod:str, fcn:str):str\naddress OPTwrapper\n;\n\n\npattern optimizer.wlc():str\naddress OPTwrapper;\npattern optimizer.wlc(mod:str, fcn:str):str\naddress OPTwrapper\n;\n\n\npattern optimizer.postfix():str\naddress OPTwrapper;\npattern optimizer.postfix(mod:str, fcn:str):str\naddress OPTwrapper\n;\n\noptimizer.prelude();\n" }, 
