#include <stdio.h>

void zApueTestfun(void)
{
  printf("current funcation is %s\n", __FUNCTION__);
  printf("current line is %d\n", __LINE__);
}