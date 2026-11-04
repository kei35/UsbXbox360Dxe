/** @file
  Xbox 360 Driver Logging System Implementation (Stub Version)
**/

#include "Xbox360Log.h"

VOID
EFIAPI
Xbox360Log (
  IN UINT8        Level,
  IN CONST CHAR8  *Format,
  ...
  )
{
  VA_LIST Args;
  (VOID)Level;
  (VOID)Format;
  VA_START (Args, Format);
  VA_END (Args);
}

VOID
EFIAPI
Xbox360LogCleanup (
  VOID
  )
{
}

VOID
EFIAPI
Xbox360LogSetImageHandle (
  IN EFI_HANDLE ImageHandle
  )
{
  (VOID)ImageHandle;
}
