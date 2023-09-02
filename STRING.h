

#ifndef _STRING_H_
#define _STRING_H_
#include <stdio.h>
#define SIZEOF(X) ((char *)*(&X + 1) - (char *)(&X))

#define U16 unsigned int
#define U8 unsigned
#endif

/*----------------------MEM FUNCTIONS----------------------------*/
void *MEMCHR(const void *StratAddress, char ChSearch, U16 Length);
int MEMCMP(const void *str1, const void *str2, U16 NOB);
void *MEMCPY(void *DestAddress, const void *SrcAddress, U16 NOB);
void *MEMMOV(void *DestAddress, const void *SrcAddress, U16 NOB);
void MEMSET(void *StartAddress, int Value, U16 NOB);
/*----------------------STR FUNCTIONS----------------------------*/
char *STRCAT(char *DestAddress, const char *SrcAddress);
char *STRnCAT(char *DestAddress, const char *SrcAddress, U8 NOBcat);
char *STRCHR(const char *StartAddress, int ChSearch);
int STRCMP(const char *FtStract, const char *SecStract);
int STRnCMP(const char *FtStract, const char *SecStract, U16 MaxNumberCmp);
int STRCOLL(const char *str1, const char *str2);
char *STRCPY(char *DseAddress, const char *SrcAddress);
char *STRnCPY(char *DseAddress, const char *SrcAddress, U16 NOB);
size_t STRCSPN(const char *STR_Address1, const char *STR_Address2); //???????????????????????????????????
// char *strerror(int errnum); //AnotherTime
size_t STRLEN(const char *strAddress);
// char *strpbrk(const char *str1, const char *str2);//AnotherTime
char *STRrCHR(const char *str, int c);
size_t STRSPN(const char *Str1Addrsss, const char *Str2Address);
char *STRSTR(const char *STRI1, const char *STRI2);
char *STRTOKEN(char *StrAddress, const char *TOk);
size_t STRXFRM(char *DesAddress, const char *SrcAddress, size_t MaxNoChar);
