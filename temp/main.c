#include <dirent.h>
#include <stdio.h>
#include "apue.h"
#include "test.h"
#include "StrByte.h"
int main(int argc, char *argv[])
{
  char *Src = "012344";
  char Dst[100];
  HexToStr(Dst, Src, strlen(Src));
  printf("%s\n", Dst);
  return 0x0;
}
