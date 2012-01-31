#ifndef __FPINST_H
#define __FPINST_H

// standard C libs
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

// STL classes
#include <string>
#include <vector>

// DyninstAPI
#include "BPatch.h"
#include "BPatch_basicBlock.h"
#include "BPatch_flowGraph.h"
#include "BPatch_function.h"
#include "BPatch_point.h"
#include "BPatch_snippet.h"

// PatchAPI
#include "PatchMgr.h"
#include "PatchModifier.h"
#include "Point.h"
#include "Snippet.h"

// helpers
#include "FPConfig.h"
#include "FPDecoderXED.h"
#include "FPDecoderIAPI.h"
#include "FPFilterFunc.h"
#include "FPSemantics.h"
#include "FPSVPolicy.h"

// analyses
#include "FPAnalysisCInst.h"
#include "FPAnalysisDCancel.h"
#include "FPAnalysisDNan.h"
#include "FPAnalysisTRange.h"
#include "FPAnalysisPointer.h"
#include "FPAnalysisInplace.h"

using namespace std;
using namespace Dyninst;
using namespace Dyninst::InstructionAPI;
using namespace Dyninst::PatchAPI;
using namespace FPInst;

//extern bool _INST_save_rflags;

// references to libfpanalysis module
extern unsigned long *_INST_reg_eip;
extern unsigned long *_INST_reg_eax;
extern unsigned long *_INST_reg_ebx;
extern unsigned long *_INST_reg_ecx;
extern unsigned long *_INST_reg_edx;
extern unsigned long *_INST_reg_ebp;
extern unsigned long *_INST_reg_esp;
extern unsigned long *_INST_reg_esi;
extern unsigned long *_INST_reg_edi;
void _INST_begin_profiling ();
long _INST_get_analysis_id(FPAnalysis *analysis);

// TODO: update function definitions

// error handling
void errorFunc(BPatchErrorLevel level, int num, const char * const *params);

// helper functions
void setup_config_file(FPConfig *configuration);
void prepareForInstrumentation();
bool fpFilterFunc(Instruction::Ptr inst);
BPatch_module* findInitFiniModule();
BPatch_registerExpr* getFlagsRegisterExpr();
BPatch_constExpr* saveStringToBinary(const char *str, size_t nbytes);

// snippet builders
void buildRegHandlers(FPSemantics *inst, BPatch_Vector<Snippet::Ptr> &handlers);
Snippet::Ptr buildUnsupportedInstHandler();

// function replacements
void replaceFunctionCalls(const char* oldFuncName, const char* newFuncName);
void replaceLibmFunctions();

// instrumenters
bool buildInstrumentation(void* addr, FPSemantics *inst, PatchFunction *func, PatchBlock *block);
void instrumentInstruction(void* addr, unsigned char *bytes, size_t nbytes,
        PatchFunction *func, PatchBlock *block,
        BPatch_Vector<BPatch_snippet*> &initSnippets);
void instrumentBasicBlock(BPatch_basicBlock *block, BPatch_Vector<BPatch_snippet*> &initSnippets);
void instrumentFunction(BPatch_function *function, BPatch_Vector<BPatch_snippet*> &initSnippets,
        const char *name, const char *modname);
void instrumentApplication(BPatch_addressSpace *app);

// command-line parsing and help text
void usage();
void parseFuncFile(char *fn, vector<string> &funcs);
bool parseCommandLine(unsigned argc, char *argv[]);

#endif

