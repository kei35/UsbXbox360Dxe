/** @file
  Xbox 360 Driver Logging System Header (Stub Version)
**/

#ifndef _XBOX360_LOG_H_
#define _XBOX360_LOG_H_

#include <Uefi.h>

// 關閉日誌功能
#define XBOX360_LOG_ENABLED         0

// 將所有 Log 巨集直接對應為空操作，主程式不需要刪除任何程式碼
#define LOG_INFO(Format, ...)   ((void)0)
#define LOG_WARN(Format, ...)   ((void)0)
#define LOG_ERROR(Format, ...)  ((void)0)

VOID
EFIAPI
Xbox360Log (
  IN UINT8        Level,
  IN CONST CHAR8  *Format,
  ...
  );

VOID
EFIAPI
Xbox360LogCleanup (
  VOID
  );

VOID
EFIAPI
Xbox360LogSetImageHandle (
  IN EFI_HANDLE  ImageHandle
  );

#endif // _XBOX360_LOG_H_
