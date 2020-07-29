#include <ctype.h>
/*! 
  C语言表驱动法编程实践(精华帖,建议收藏并实践)
    https://mp.weixin.qq.com/s/qzj9m_737nJHp_Iqs8FmNg
  C语言常用的一些转换工具函数收集
    https://mp.weixin.qq.com/s/EIZvr74GRASFyyixYtKArA
*/
void StrToHex(char *pbDest, char *pbSrc, int nLen)
{
  char h1, h2;
  char s1, s2;
  int i;

  for (i = 0; i < nLen / 2; i++)
  {
    h1 = pbSrc[2 * i];
    h2 = pbSrc[2 * i + 1];

    s1 = toupper(h1) - 0x30; //toupper 转换为大写字母
    if (s1 > 9)
      s1 -= 7;
    s2 = toupper(h2) - 0x30;
    if (s2 > 9)
      s2 -= 7;

    pbDest[i] = s1 * 16 + s2;
  }
}

void HexToStr(char *pszDest, char *pbSrc, int nLen)
{
  char ddl, ddh;
  for (int i = 0; i < nLen; i++)
  {
    ddh = 48 + pbSrc[i] / 16;
    ddl = 48 + pbSrc[i] % 16;
    if (ddh > 57)
      ddh = ddh + 7;
    if (ddl > 57)
      ddl = ddl + 7;
    pszDest[i * 2] = ddh;
    pszDest[i * 2 + 1] = ddl;
  }
  pszDest[nLen * 2] = '\0';
}

