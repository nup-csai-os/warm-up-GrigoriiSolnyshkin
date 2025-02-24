#include "types.h"
#include "riscv.h"
#include "defs.h"
#include "param.h"


uint64
sys_hartid(void)
{
  return 9;
}