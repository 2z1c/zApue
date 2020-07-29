#ifndef __STRBYTE_H
#define __STRBYTE_H
#include <stdint.h>
//< 字符串转十六进制
void StrToHex(char *pbDest, char *pbSrc, int nLen);

//< 十六进制转字符串
void HexToStr(char *pszDest, char *pbSrc, int nLen);


#endif /*!__STRBYTE_H*/
