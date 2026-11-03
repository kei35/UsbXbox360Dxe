/** @file
  Xbox 360 Driver Logging System Implementation (Stub Version)

  This module provides empty stub implementations for logging functions
  to completely disable logging and file I/O operations safely.

  Copyright (c) 2024-2025. All rights reserved.
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "Xbox360Log.h"

/**
  Write a formatted log entry (Stub: does nothing).

  @param  Level    Log level (INFO/WARN/ERROR)
  @param  Format   Printf-style format string (ASCII)
  @param  ...      Variable arguments

  @retval None
**/
VOID
EFIAPI
Xbox360Log (
  IN UINT8        Level,
  IN CONST CHAR8  *Format,
  ...
  )
{
  VA_LIST  Args;

  // 消除編譯器對未使用參數的警告，並安全消耗可變參數
  (VOID)Level;
  (VOID)Format;

  VA_START (Args, Format);
  VA_END (Args);
}

/**
  Manual cleanup function (Stub: does nothing).

  @retval None
**/
VOID
EFIAPI
Xbox360LogCleanup (
  VOID
  )
{
  // 保持空實作，不執行任何磁碟分割區掃描與檔案刪除
}

/**
  Set the driver's image handle (Stub: does nothing or stores handle).

  @param  ImageHandle  Driver's image handle

  @retval None
**/
VOID
EFIAPI
Xbox360LogSetImageHandle (
  IN EFI_HANDLE  ImageHandle
  )
{
  (VOID)ImageHandle;
}
