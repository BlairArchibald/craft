/*BEGIN_LEGAL 
Intel Open Source License 

Copyright (c) 2002-2010 Intel Corporation. All rights reserved.
 
Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are
met:

Redistributions of source code must retain the above copyright notice,
this list of conditions and the following disclaimer.  Redistributions
in binary form must reproduce the above copyright notice, this list of
conditions and the following disclaimer in the documentation and/or
other materials provided with the distribution.  Neither the name of
the Intel Corporation nor the names of its contributors may be used to
endorse or promote products derived from this software without
specific prior written permission.
 
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE INTEL OR
ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
END_LEGAL */
/// @file xed-nonterminal-enum.h

// This file was automatically generated.
// Do not edit this file.

#if !defined(_XED_NONTERMINAL_ENUM_H_)
# define _XED_NONTERMINAL_ENUM_H_
#include "xed-common-hdrs.h"
typedef enum {
  XED_NONTERMINAL_INVALID,
  XED_NONTERMINAL_AR10,
  XED_NONTERMINAL_AR11,
  XED_NONTERMINAL_AR12,
  XED_NONTERMINAL_AR13,
  XED_NONTERMINAL_AR14,
  XED_NONTERMINAL_AR15,
  XED_NONTERMINAL_AR8,
  XED_NONTERMINAL_AR9,
  XED_NONTERMINAL_ARAX,
  XED_NONTERMINAL_ARBP,
  XED_NONTERMINAL_ARBX,
  XED_NONTERMINAL_ARCX,
  XED_NONTERMINAL_ARDI,
  XED_NONTERMINAL_ARDX,
  XED_NONTERMINAL_ARSI,
  XED_NONTERMINAL_ARSP,
  XED_NONTERMINAL_ASZ_NONTERM,
  XED_NONTERMINAL_AVX_INSTRUCTIONS,
  XED_NONTERMINAL_AVX_SPLITTER,
  XED_NONTERMINAL_BRANCH_HINT,
  XED_NONTERMINAL_BRDISP32,
  XED_NONTERMINAL_BRDISP8,
  XED_NONTERMINAL_BRDISPZ,
  XED_NONTERMINAL_B_INVERT,
  XED_NONTERMINAL_CR_B,
  XED_NONTERMINAL_CR_R,
  XED_NONTERMINAL_CR_WIDTH,
  XED_NONTERMINAL_DF64,
  XED_NONTERMINAL_DR_B,
  XED_NONTERMINAL_DR_R,
  XED_NONTERMINAL_ESCVL_NT,
  XED_NONTERMINAL_FINAL_DSEG,
  XED_NONTERMINAL_FINAL_DSEG1,
  XED_NONTERMINAL_FINAL_DSEG1_MODE64,
  XED_NONTERMINAL_FINAL_DSEG1_NOT64,
  XED_NONTERMINAL_FINAL_DSEG_MODE64,
  XED_NONTERMINAL_FINAL_DSEG_NOT64,
  XED_NONTERMINAL_FINAL_ESEG,
  XED_NONTERMINAL_FINAL_ESEG1,
  XED_NONTERMINAL_FINAL_SSEG,
  XED_NONTERMINAL_FINAL_SSEG0,
  XED_NONTERMINAL_FINAL_SSEG1,
  XED_NONTERMINAL_FINAL_SSEG_MODE64,
  XED_NONTERMINAL_FINAL_SSEG_NOT64,
  XED_NONTERMINAL_FORCE64,
  XED_NONTERMINAL_GPR16_B,
  XED_NONTERMINAL_GPR16_R,
  XED_NONTERMINAL_GPR32_B,
  XED_NONTERMINAL_GPR32_R,
  XED_NONTERMINAL_GPR32_X,
  XED_NONTERMINAL_GPR64_B,
  XED_NONTERMINAL_GPR64_R,
  XED_NONTERMINAL_GPR64_X,
  XED_NONTERMINAL_GPR8_B,
  XED_NONTERMINAL_GPR8_R,
  XED_NONTERMINAL_GPRV_B,
  XED_NONTERMINAL_GPRV_R,
  XED_NONTERMINAL_GPRY_B,
  XED_NONTERMINAL_GPRY_R,
  XED_NONTERMINAL_GPRZ_B,
  XED_NONTERMINAL_GPRZ_R,
  XED_NONTERMINAL_GPR_ERROR_B,
  XED_NONTERMINAL_GPR_ERROR_R,
  XED_NONTERMINAL_IGNORE66,
  XED_NONTERMINAL_IMMUNE66,
  XED_NONTERMINAL_IMMUNE66_LOOP64,
  XED_NONTERMINAL_IMMUNE_REXW,
  XED_NONTERMINAL_INSTRUCTIONS,
  XED_NONTERMINAL_ISA,
  XED_NONTERMINAL_MEMDISP,
  XED_NONTERMINAL_MEMDISP16,
  XED_NONTERMINAL_MEMDISP32,
  XED_NONTERMINAL_MEMDISP8,
  XED_NONTERMINAL_MEMDISPV,
  XED_NONTERMINAL_MMX_B,
  XED_NONTERMINAL_MMX_R,
  XED_NONTERMINAL_MODRM,
  XED_NONTERMINAL_MODRM16,
  XED_NONTERMINAL_MODRM32,
  XED_NONTERMINAL_MODRM64ALT32,
  XED_NONTERMINAL_NEWVEX_PREFIX,
  XED_NONTERMINAL_OEAX,
  XED_NONTERMINAL_OEBP,
  XED_NONTERMINAL_OEBX,
  XED_NONTERMINAL_OECX,
  XED_NONTERMINAL_OEDI,
  XED_NONTERMINAL_OEDX,
  XED_NONTERMINAL_OESI,
  XED_NONTERMINAL_OESP,
  XED_NONTERMINAL_ONE,
  XED_NONTERMINAL_OR10,
  XED_NONTERMINAL_OR11,
  XED_NONTERMINAL_OR12,
  XED_NONTERMINAL_OR13,
  XED_NONTERMINAL_OR14,
  XED_NONTERMINAL_OR15,
  XED_NONTERMINAL_OR8,
  XED_NONTERMINAL_OR9,
  XED_NONTERMINAL_ORAX,
  XED_NONTERMINAL_ORBP,
  XED_NONTERMINAL_ORBX,
  XED_NONTERMINAL_ORCX,
  XED_NONTERMINAL_ORDI,
  XED_NONTERMINAL_ORDX,
  XED_NONTERMINAL_ORSI,
  XED_NONTERMINAL_ORSP,
  XED_NONTERMINAL_OSZ_NONTERM,
  XED_NONTERMINAL_OVERRIDE_SEG0,
  XED_NONTERMINAL_OVERRIDE_SEG1,
  XED_NONTERMINAL_PREFIXES,
  XED_NONTERMINAL_REFINING66,
  XED_NONTERMINAL_REMOVE_SEGMENT,
  XED_NONTERMINAL_RFLAGS,
  XED_NONTERMINAL_RIP,
  XED_NONTERMINAL_SEG,
  XED_NONTERMINAL_SE_IMM8,
  XED_NONTERMINAL_SIB,
  XED_NONTERMINAL_SIB_BASE0,
  XED_NONTERMINAL_SIMM8,
  XED_NONTERMINAL_SIMMZ,
  XED_NONTERMINAL_SRBP,
  XED_NONTERMINAL_SRSP,
  XED_NONTERMINAL_TMP_B,
  XED_NONTERMINAL_TMP_R,
  XED_NONTERMINAL_UIMM16,
  XED_NONTERMINAL_UIMM32,
  XED_NONTERMINAL_UIMM8,
  XED_NONTERMINAL_UIMM8_1,
  XED_NONTERMINAL_UIMMV,
  XED_NONTERMINAL_VB2PREFIX,
  XED_NONTERMINAL_VEXMAP,
  XED_NONTERMINAL_X87,
  XED_NONTERMINAL_XB_INVERT,
  XED_NONTERMINAL_XMM_B,
  XED_NONTERMINAL_XMM_N,
  XED_NONTERMINAL_XMM_R,
  XED_NONTERMINAL_XMM_SE,
  XED_NONTERMINAL_XMM_SE32,
  XED_NONTERMINAL_XMM_SE64,
  XED_NONTERMINAL_YMM_B,
  XED_NONTERMINAL_YMM_N,
  XED_NONTERMINAL_YMM_R,
  XED_NONTERMINAL_YMM_SE,
  XED_NONTERMINAL_YMM_SE32,
  XED_NONTERMINAL_YMM_SE64,
  XED_NONTERMINAL_LAST
} xed_nonterminal_enum_t;

XED_DLL_EXPORT xed_nonterminal_enum_t str2xed_nonterminal_enum_t(const char* s);
XED_DLL_EXPORT const char* xed_nonterminal_enum_t2str(const xed_nonterminal_enum_t p);

XED_DLL_EXPORT xed_nonterminal_enum_t xed_nonterminal_enum_t_last(void);
       
#endif
