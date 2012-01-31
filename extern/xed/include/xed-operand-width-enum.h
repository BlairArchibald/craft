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
/// @file xed-operand-width-enum.h

// This file was automatically generated.
// Do not edit this file.

#if !defined(_XED_OPERAND_WIDTH_ENUM_H_)
# define _XED_OPERAND_WIDTH_ENUM_H_
#include "xed-common-hdrs.h"
typedef enum {
  XED_OPERAND_WIDTH_INVALID,
  XED_OPERAND_WIDTH_ASZ,
  XED_OPERAND_WIDTH_SSZ,
  XED_OPERAND_WIDTH_PSEUDO,
  XED_OPERAND_WIDTH_A16,
  XED_OPERAND_WIDTH_A32,
  XED_OPERAND_WIDTH_B,
  XED_OPERAND_WIDTH_D,
  XED_OPERAND_WIDTH_DQ,
  XED_OPERAND_WIDTH_XUB,
  XED_OPERAND_WIDTH_XUW,
  XED_OPERAND_WIDTH_XUD,
  XED_OPERAND_WIDTH_XUQ,
  XED_OPERAND_WIDTH_X128,
  XED_OPERAND_WIDTH_XB,
  XED_OPERAND_WIDTH_XW,
  XED_OPERAND_WIDTH_XD,
  XED_OPERAND_WIDTH_XQ,
  XED_OPERAND_WIDTH_MB,
  XED_OPERAND_WIDTH_MW,
  XED_OPERAND_WIDTH_MD,
  XED_OPERAND_WIDTH_MQ,
  XED_OPERAND_WIDTH_M64INT,
  XED_OPERAND_WIDTH_M64REAL,
  XED_OPERAND_WIDTH_MEM108,
  XED_OPERAND_WIDTH_MEM14,
  XED_OPERAND_WIDTH_MEM16,
  XED_OPERAND_WIDTH_MEM16INT,
  XED_OPERAND_WIDTH_MEM28,
  XED_OPERAND_WIDTH_MEM32INT,
  XED_OPERAND_WIDTH_MEM32REAL,
  XED_OPERAND_WIDTH_MEM80DEC,
  XED_OPERAND_WIDTH_MEM80REAL,
  XED_OPERAND_WIDTH_F80,
  XED_OPERAND_WIDTH_MEM94,
  XED_OPERAND_WIDTH_MFPXENV,
  XED_OPERAND_WIDTH_MXSAVE,
  XED_OPERAND_WIDTH_MPREFETCH,
  XED_OPERAND_WIDTH_P,
  XED_OPERAND_WIDTH_P2,
  XED_OPERAND_WIDTH_PD,
  XED_OPERAND_WIDTH_PS,
  XED_OPERAND_WIDTH_PI,
  XED_OPERAND_WIDTH_Q,
  XED_OPERAND_WIDTH_S,
  XED_OPERAND_WIDTH_S64,
  XED_OPERAND_WIDTH_SD,
  XED_OPERAND_WIDTH_SI,
  XED_OPERAND_WIDTH_SS,
  XED_OPERAND_WIDTH_V,
  XED_OPERAND_WIDTH_Y,
  XED_OPERAND_WIDTH_W,
  XED_OPERAND_WIDTH_Z,
  XED_OPERAND_WIDTH_SPW8,
  XED_OPERAND_WIDTH_SPW,
  XED_OPERAND_WIDTH_SPW3,
  XED_OPERAND_WIDTH_SPW2,
  XED_OPERAND_WIDTH_I1,
  XED_OPERAND_WIDTH_I2,
  XED_OPERAND_WIDTH_I3,
  XED_OPERAND_WIDTH_I4,
  XED_OPERAND_WIDTH_I5,
  XED_OPERAND_WIDTH_I6,
  XED_OPERAND_WIDTH_I7,
  XED_OPERAND_WIDTH_I8,
  XED_OPERAND_WIDTH_VAR,
  XED_OPERAND_WIDTH_QQ,
  XED_OPERAND_WIDTH_YUB,
  XED_OPERAND_WIDTH_YUW,
  XED_OPERAND_WIDTH_YUD,
  XED_OPERAND_WIDTH_YUQ,
  XED_OPERAND_WIDTH_Y128,
  XED_OPERAND_WIDTH_YB,
  XED_OPERAND_WIDTH_YW,
  XED_OPERAND_WIDTH_YD,
  XED_OPERAND_WIDTH_YQ,
  XED_OPERAND_WIDTH_YPS,
  XED_OPERAND_WIDTH_YPD,
  XED_OPERAND_WIDTH_LAST
} xed_operand_width_enum_t;

XED_DLL_EXPORT xed_operand_width_enum_t str2xed_operand_width_enum_t(const char* s);
XED_DLL_EXPORT const char* xed_operand_width_enum_t2str(const xed_operand_width_enum_t p);

XED_DLL_EXPORT xed_operand_width_enum_t xed_operand_width_enum_t_last(void);
       
#endif
