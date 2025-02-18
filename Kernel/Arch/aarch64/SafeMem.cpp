/*
 * Copyright (c) 2022, Timon Kruiper <timonkruiper@gmail.com>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include <Kernel/Arch/SafeMem.h>
#include <Kernel/StdLib.h>

namespace Kernel {

bool safe_memset(void* dest_ptr, int c, size_t n, void*&)
{
    // FIXME: Actually implement a safe memset.
    memset(dest_ptr, c, n);
    return true;
}

ssize_t safe_strnlen(char const* str, unsigned long max_n, void*&)
{
    // FIXME: Actually implement a safe strnlen.
    return strnlen(str, max_n);
}

bool safe_memcpy(void* dest_ptr, void const* src_ptr, unsigned long n, void*&)
{
    // FIXME: Actually implement a safe memcpy.
    memcpy(dest_ptr, src_ptr, n);
    return true;
}

Optional<bool> safe_atomic_compare_exchange_relaxed(u32 volatile*, u32&, u32)
{
    TODO_AARCH64();
    return {};
}

Optional<u32> safe_atomic_load_relaxed(u32 volatile*)
{
    TODO_AARCH64();
    return {};
}

Optional<u32> safe_atomic_fetch_add_relaxed(u32 volatile*, u32)
{
    TODO_AARCH64();
    return {};
}

Optional<u32> safe_atomic_exchange_relaxed(u32 volatile*, u32)
{
    TODO_AARCH64();
    return {};
}

bool safe_atomic_store_relaxed(u32 volatile*, u32)
{
    TODO_AARCH64();
    return {};
}

bool handle_safe_access_fault(RegisterState&, FlatPtr)
{
    TODO_AARCH64();
    return false;
}

}
