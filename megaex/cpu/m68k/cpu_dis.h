/*
 *  cpu_dis.h

Copyright (c) 2011 Lee Hammerton

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

 */

#include "mytypes.h"

extern char mnemonicData[256];

U16 CPU_DIS_UNKNOWN(U32 adr,U16* operands);


U16 CPU_DIS_LEA(U32 adr,U16* operands);
U16 CPU_DIS_MOVE(U32 adr,U16* operands);
U16 CPU_DIS_SUBs(U32 adr,U16* operands);
U16 CPU_DIS_SUBQ(U32 adr,U16* operands);
U16 CPU_DIS_BCC(U32 adr,U16* operands);
U16 CPU_DIS_CMPA(U32 adr,U16* operands);
U16 CPU_DIS_CMP(U32 adr,U16* operands);
U16 CPU_DIS_CMPI(U32 adr,U16* operands);
U16 CPU_DIS_MOVEA(U32 adr,U16* operands);
U16 CPU_DIS_DBCC(U32 adr,U16* operands);
U16 CPU_DIS_BRA(U32 adr,U16* operands);
U16 CPU_DIS_BTSTI(U32 adr,U16* operands);
U16 CPU_DIS_ADDs(U32 adr,U16* operands);
U16 CPU_DIS_NOT(U32 adr,U16* operands);
U16 CPU_DIS_SUBA(U32 adr,U16* operands);
U16 CPU_DIS_ADDA(U32 adr,U16* operands);
U16 CPU_DIS_TST(U32 adr,U16* operands);
U16 CPU_DIS_JMP(U32 adr,U16* operands);
U16 CPU_DIS_MOVEQ(U32 adr,U16* operands);
U16 CPU_DIS_SWAP(U32 adr,U16* operands);
U16 CPU_DIS_LSR(U32 adr,U16* operands);
U16 CPU_DIS_MOVEMs(U32 adr,U16* operands);
U16 CPU_DIS_MOVEMd(U32 adr,U16* operands);
U16 CPU_DIS_SUBI(U32 adr,U16* operands);
U16 CPU_DIS_BSR(U32 adr,U16* operands);
U16 CPU_DIS_RTS(U32 adr,U16* operands);
U16 CPU_DIS_ILLEGAL(U32 adr,U16* operands);
U16 CPU_DIS_ORd(U32 adr,U16* operands);
U16 CPU_DIS_ADDQ(U32 adr,U16* operands);
U16 CPU_DIS_CLR(U32 adr,U16* operands);
U16 CPU_DIS_ANDI(U32 adr,U16* operands);
U16 CPU_DIS_EXG(U32 adr,U16* operands);
U16 CPU_DIS_JSR(U32 adr,U16* operands);
U16 CPU_DIS_BCLRI(U32 adr,U16* operands);
U16 CPU_DIS_ANDs(U32 adr,U16* operands);
U16 CPU_DIS_SUBd(U32 adr,U16* operands);
U16 CPU_DIS_BSET(U32 adr,U16* operands);
U16 CPU_DIS_BSETI(U32 adr,U16* operands);
U16 CPU_DIS_MULU(U32 adr,U16* operands);
U16 CPU_DIS_LSL(U32 adr,U16* operands);
U16 CPU_DIS_ADDI(U32 adr,U16* operands);
U16 CPU_DIS_EXT(U32 adr,U16* operands);
U16 CPU_DIS_MULS(U32 adr,U16* operands);
U16 CPU_DIS_NEG(U32 adr,U16* operands);
U16 CPU_DIS_MOVEUSP(U32 adr,U16* operands);
U16 CPU_DIS_SCC(U32 adr,U16* operands);
U16 CPU_DIS_ORSR(U32 adr,U16* operands);
U16 CPU_DIS_PEA(U32 adr,U16* operands);
U16 CPU_DIS_MOVEFROMSR(U32 adr,U16* operands);
U16 CPU_DIS_RTE(U32 adr,U16* operands);
U16 CPU_DIS_ANDSR(U32 adr,U16* operands);
U16 CPU_DIS_MOVETOSR(U32 adr,U16* operands);
U16 CPU_DIS_LINK(U32 adr,U16* operands);
U16 CPU_DIS_CMPM(U32 adr,U16* operands);
U16 CPU_DIS_ADDd(U32 adr,U16* operands);
U16 CPU_DIS_UNLK(U32 adr,U16* operands);
U16 CPU_DIS_ORs(U32 adr,U16* operands);
U16 CPU_DIS_ANDd(U32 adr,U16* operands);
U16 CPU_DIS_ORI(U32 adr,U16* operands);
U16 CPU_DIS_ASL(U32 adr,U16* operands);
U16 CPU_DIS_ASR(U32 adr,U16* operands);
U16 CPU_DIS_DIVU(U32 adr,U16* operands);
U16 CPU_DIS_BCLR(U32 adr,U16* operands);
U16 CPU_DIS_EORd(U32 adr,U16* operands);
U16 CPU_DIS_BTST(U32 adr,U16* operands);
U16 CPU_DIS_STOP(U32 adr,U16* operands);
U16 CPU_DIS_ROL(U32 adr,U16* operands);
U16 CPU_DIS_ROR(U32 adr,U16* operands);
U16 CPU_DIS_NOP(U32 adr,U16* operands);
U16 CPU_DIS_BCHG(U32 adr,U16* operands);
U16 CPU_DIS_BCHGI(U32 adr,U16* operands);
U16 CPU_DIS_LSRm(U32 adr,U16* operands);
U16 CPU_DIS_EORI(U32 adr,U16* operands);
U16 CPU_DIS_EORICCR(U32 adr,U16* operands);
U16 CPU_DIS_ROXL(U32 adr,U16* operands);
U16 CPU_DIS_ROXR(U32 adr,U16* operands);
U16 CPU_DIS_MOVETOCCR(U32 adr,U16* operands);
U16 CPU_DIS_TRAP(U32 adr,U16* operands);
U16 CPU_DIS_ADDX(U32 adr,U16* operands);
U16 CPU_DIS_DIVS(U32 adr,U16* operands);
U16 CPU_DIS_SUBX(U32 adr,U16* operands);
U16 CPU_DIS_ASRm(U32 adr,U16* operands);
U16 CPU_DIS_ASLm(U32 adr,U16* operands);
U16 CPU_DIS_ANDICCR(U32 adr,U16* operands);
U16 CPU_DIS_ORICCR(U32 adr,U16* operands);
U16 CPU_DIS_NEGX(U32 adr,U16* operands);
U16 CPU_DIS_SBCD(U32 adr,U16* operands);
U16 CPU_DIS_ABCD(U32 adr,U16* operands);
U16 CPU_DIS_MOVEP_W_m(U32 adr,U16* operands);
U16 CPU_DIS_MOVEP_L_m(U32 adr,U16* operands);
U16 CPU_DIS_LINEA(U32 adr,U16* operands);
U16 CPU_DIS_MOVEP_m_W(U32 adr,U16* operands);
U16 CPU_DIS_ABCDm(U32 adr,U16* operands);
U16 CPU_DIS_ROXLm(U32 adr,U16* operands);
U16 CPU_DIS_MOVEP_m_L(U32 adr,U16* operands);
U16 CPU_DIS_SBCDm(U32 adr,U16* operands);
U16 CPU_DIS_RTR(U32 adr,U16* operands);
U16 CPU_DIS_EORISR(U32 adr,U16* operands);
U16 CPU_DIS_LSLm(U32 adr,U16* operands);
U16 CPU_DIS_TRAPV(U32 adr,U16* operands);
U16 CPU_DIS_ROXRm(U32 adr,U16* operands);
U16 CPU_DIS_ROLm(U32 adr,U16* operands);
U16 CPU_DIS_RORm(U32 adr,U16* operands);
U16 CPU_DIS_RESET(U32 adr,U16* operands);
U16 CPU_DIS_LINEF(U32 adr,U16* operands);
