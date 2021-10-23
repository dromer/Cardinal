/*
 * DISTRHO Cardinal Plugin
 * Copyright (C) 2021 Filipe Coelho <falktx@falktx.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 3 of
 * the License, or any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * For a full copy of the GNU General Public License see the LICENSE file.
 */

#pragma once

#if defined(__i386__) || defined(__x86_64__)
# include_next <pmmintrin.h>
#else
# include "../sse2neon/sse2neon.h"

static inline
void __builtin_ia32_pause()
{
    // __asm__ __volatile__("isb\n");
}

static inline
uint32_t _mm_getcsr()
{
    return 0;
}

#endif
