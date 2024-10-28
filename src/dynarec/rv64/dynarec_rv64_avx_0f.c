#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <errno.h>

#include "debug.h"
#include "box64context.h"
#include "dynarec.h"
#include "emu/x64emu_private.h"
#include "emu/x64run_private.h"
#include "x64run.h"
#include "x64emu.h"
#include "box64stack.h"
#include "callback.h"
#include "emu/x64run_private.h"
#include "x64trace.h"
#include "dynarec_native.h"
#include "my_cpuid.h"
#include "emu/x87emu_private.h"
#include "emu/x64shaext.h"

#include "rv64_printer.h"
#include "dynarec_rv64_private.h"
#include "dynarec_rv64_functions.h"
#include "dynarec_rv64_helper.h"

uintptr_t dynarec64_AVX_0F(dynarec_rv64_t* dyn, uintptr_t addr, uintptr_t ip, int ninst, vex_t vex, int* ok, int* need_epilog)
{
    (void)ip;
    (void)need_epilog;

    uint8_t opcode = F8;
    uint8_t nextop, u8;
    uint8_t gd, ed;
    uint8_t wback, wb1, wb2, gback;
    uint8_t eb1, eb2, gb1, gb2;
    int32_t i32, i32_;
    int cacheupd = 0;
    int v0, v1, v2;
    int q0, q1, q2;
    int d0, d1, d2;
    int s0;
    uint64_t tmp64u;
    int64_t j64;
    int64_t fixedaddress, gdoffset;
    int unscaled;
    MAYUSE(wb1);
    MAYUSE(wb2);
    MAYUSE(eb1);
    MAYUSE(eb2);
    MAYUSE(gb1);
    MAYUSE(gb2);
    MAYUSE(q0);
    MAYUSE(q1);
    MAYUSE(d0);
    MAYUSE(d1);
    MAYUSE(s0);
    MAYUSE(j64);
    MAYUSE(cacheupd);

    rex_t rex = vex.rex;

    switch (opcode) {

        case 0x10:
            INST_NAME("VMOVUPS Gx,Ex");
            nextop = F8;
            GETGX();
            GETEX(x2, 0, 8);
            SSE_LOOP_MV_Q(x3);
            if (vex.l) {
                GETGY();
                GETEY(x2, 0, 16);
                SSE_LOOP_MV_Q(x3);
            }
            if (!vex.l) YMM0(gd);
            break;
        case 0x11:
            INST_NAME("VMOVUPS Ex,Gx");
            nextop = F8;
            GETGX();
            GETEX(x2, 0, 8);
            SSE_LOOP_MV_Q2(x3);
            if (vex.l) {
                GETGY();
                GETEY(x2, 0, 16);
                SSE_LOOP_MV_Q2(x3);
            }
            if (!MODREG) SMWRITE2();
            break;
        default:
            DEFAULT;
    }
    return addr;
}
