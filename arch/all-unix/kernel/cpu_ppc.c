/*
    Copyright � 1995-2021, The AROS Development Team. All rights reserved.
    $Id$
*/

#include "kernel_base.h"
#include "kernel_intern.h"

#include <signal.h>

struct SignalTranslation const sigs[] = {
    {SIGILL   ,  4,  7},
    {SIGTRAP  ,  9, 13},
    {SIGBUS   ,  2,  3},
    {SIGFPE   , 11,  7},
    {SIGSEGV  ,  2,  3},
#ifdef HOST_OS_linux
    {SIGSTKFLT, 14,  3},
#endif
    {-1       , -1, -1}
};
