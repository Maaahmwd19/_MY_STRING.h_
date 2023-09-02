#include "STRING.h"
// NOB means a Number of bytes
/*------------------------------MEM Implementation----------------------------------*/

void MEMSET(void *StartAddress, int Value, U16 NOB)
{
    char *TempPtr = (char *)StartAddress;

    if (NULL == StartAddress)
    {
        printf("FAILED FUNCTION DUE TO NULL POINTER !!\n");
    }

    else
    {
        while (NOB--)
        {
            *TempPtr++ = Value;
        }
    }
    // return (char *)StartAddress;
}
void *MEMCPY(void *DestAddress, const void *SrcAddress, U16 NOB)
{
    char *TempDest = (char *)DestAddress;
    char *TempSrc = (char *)SrcAddress;

    if ((NULL == DestAddress) || (NULL == SrcAddress))
    {
        printf("FAILED FUNCTION DUE TO NULL POINTER !!\n");
    }
    else
    {
        while (NOB--)
        {
            *TempDest++ = *TempSrc++;
        }
    }
    return DestAddress;
}
int MEMCMP(const void *str1, const void *str2, U16 NOB)
{
    char *TempStract1 = (char *)str1;
    char *TempStract2 = (char *)str2;
    U16 ReturnStates = 0;

    if ((NULL == TempStract1) || (NULL == TempStract2))
    {
        printf("ERROR POINTER IS NULL");
    }
    else
    {
        if (TempStract1 == TempStract2)
        {
            ReturnStates = 0;
        }
        else
        {
            while (NOB--)
            {
                if (*TempStract1 != *TempStract2)
                {
                    ReturnStates = (*TempStract1 < *TempStract2) ? -1 : 1;
                    break;
                }
                else
                {
                    TempStract1++;
                    TempStract2++;
                }
            }
        }
    }
    return ReturnStates;
}
void *MEMCHR(const void *StratAddress, char ChSearch, U16 Len)
{
    char *TempPtr = (char *)StratAddress;

    if (0 == TempPtr)
    {
        printf("Failed MEMCHR due to NULL pointer !!\n");
    }
    else
    {
        while (Len--)
        {
            if (*TempPtr == ChSearch)
            {
                break;
            }
            TempPtr++;
        }
    }
    return TempPtr;
}
void *MEMMOV(void *DestAddress, const void *SrcAddress, U16 NOB)
{
    char *TempDest = DestAddress;
    char *TempSrc = (char *)SrcAddress;

    if ((0 == *TempDest) || (0 == *TempSrc))
    {
        printf("Error in Function Due to NULL pointer !!\n");
    }
    else
    {
        while (NOB--)
        {
            *TempDest++ = *TempSrc++;
        }
    }
    return DestAddress;
}
/*------------------------------STR Implementation----------------------------------*/
char *STRCAT(char *DestAddress, const char *SrcAddress)
{
    char *TempDest = DestAddress;
    char *TempSrc = (char *)SrcAddress;
    if ((0 == TempDest) || (0 == TempSrc))
    {
        printf("Error Function Due to NULL pointer !!\n");
    }
    else
    {
        while (*TempDest)
        {
            TempDest++;
        }

        while (*TempSrc)
        {
            *TempDest++ = *TempSrc++;
        }
    }
    return DestAddress;
}
char *STRnCAT(char *DestAddress, const char *SrcAddress, U8 NOBcat)
{
    char *TempDest = (char *)DestAddress;
    char *TempSrc = (char *)SrcAddress;

    if ((*TempDest == 0) || (*TempSrc == 0))
    {
        printf("Failed Function Due to NULL Pointer !!\n");
    }
    else
    {

        while (*TempDest)
        {
            TempDest++;
        }
        while (*TempSrc != '\0' && NOBcat > 0)
        {
            *TempDest++ = *TempSrc++;
            NOBcat--;
        }
    }

    return DestAddress;
}
char *STRCHR(const char *StartAddress, int ChSearch)
{
    char *TempAddress = (char *)StartAddress;

    if ((NULL == TempAddress))
    {
        printf("Error Function Due to NULL pointer !!\n");
    }
    else
    {
        while (0 != (*TempAddress))
        {
            if (*TempAddress == ChSearch)
            {
                return TempAddress;
            }
            TempAddress++;
        }
    }

    return NULL;
}
int STRCMP(const char *FtStract, const char *SecStract)
{
    char *TempStr1 = (char *)FtStract;
    char *TempStr2 = (char *)SecStract;
    int ReturnStates = 0;
    char Len = SIZEOF(FtStract);

    if ((0 == *TempStr1) || (0 == *TempStr2))
    {
        printf("Function STRCMP is failed Due to NULL Pinter!!\n ");
    }
    else
    {
        while (1)
        {
            if (*TempStr1 == *TempStr2)
            {
                ReturnStates = 0;
            }
            else
            {
                ReturnStates = (*TempStr1 < *TempStr2) ? -1 : 1;
                break;
            }
            TempStr1++;
            TempStr2++;
        }
    }

    return ReturnStates;
}
int STRnCMP(const char *FtStract, const char *SecStract, U16 MaxNumberCmp)
{
    char *TempStr1 = (char *)FtStract;
    char *TempStr2 = (char *)SecStract;

    int ReturnStates = 0;

    if ((0 == *TempStr1) || (0 == *TempStr2))
    {
        printf("Function STRCMP is failed Due to NULL Pinter!!\n ");
    }
    else
    {
        while (MaxNumberCmp--)
        {
            if (*TempStr1 == *TempStr2)
            {
                ReturnStates = 0;
            }
            else
            {
                ReturnStates = (*TempStr1 < *TempStr2) ? -1 : 1;
                break;
            }
            TempStr1++;
            TempStr2++;
        }
    }

    return ReturnStates;
}
int STRCOLL(const char *str1, const char *str2)
{
    // TODO
}

char *STRCPY(char *DseAddress, const char *SrcAddress)
{
    char *TempDest = DseAddress;
    char *TempSrc = (char *)SrcAddress;

    if ((0 == *TempDest) || (0 == *TempSrc))
    {
        printf("Function Failed Due to NULL Pointer !!\n");
    }
    else
    {
        while (0 != *TempDest || 0 != *TempSrc)
        {

            *TempDest++ = *TempSrc++;
        }
    }
    return (char *)SrcAddress;
}
char *STRnCPY(char *DseAddress, const char *SrcAddress, U16 NOB)
{
    char *TempDest = (char *)DseAddress;
    char *TempSrc = (char *)SrcAddress;

    if ((0 == *TempDest) || (0 == *TempSrc))
    {
        printf("Function Failed Due to NULL Pointer !!\n");
    }
    else
    {

        while (NOB--)
        {
            *TempDest++ = *TempSrc++;
        }
    }
    return DseAddress;
}
size_t STRCSPN(const char *STR_Address1, const char *STR_Address2)
{

    size_t leng = 0;
    char *TempStr1 = (char *)STR_Address1;
    char *TempStr2 = (char *)STR_Address2;

    if ((0 == *TempStr1) || (0 == *TempStr2))
    {
        printf("Function Failed Due to NULL Pointer !!\n");
    }
    else
    {
        while (*TempStr1)
        {
            if ((*TempStr1 != *TempStr2))
            {
                TempStr2++;
                if (*TempStr2 == '\0')
                {
                    leng += 1;
                    TempStr1++;
                    TempStr2 = (char *)STR_Address2;
                }
            }
            else
            {
                break;
            }
        }
    }
    return leng;
}

char *STRrCHR(const char *str, int c)
{
    char *TempStr = (char *)str;
    char *TempPtr = NULL;
    if (*TempStr == 0)
    {
        printf("Invalied Function duo to NULL pointer !!\n");
    }
    else
    {
        while (*TempStr)
        {
            if (*TempStr == c)
            {
                TempPtr = TempStr;
            }
            TempStr++;
        }
    }
    return TempPtr;
}
size_t STRLEN(const char *strAddress) // add validation
{
    char *TempAddress = (char *)strAddress;
    size_t Len = 0;

    while (*TempAddress != 0)
    {
        Len += 1;
        TempAddress++;
    }
    return (Len);
}
size_t STRSPN(const char *Str1Addrsss, const char *Str2Address)
{
    char *TempStr1 = (char *)Str1Addrsss;
    char *TempStr2 = (char *)Str2Address;
    size_t leng = 0;

    if ((*TempStr1 == 0) || (*TempStr2 == 0))
    {
        printf("invaled Function Duo to NULL pointer !! \n");
    }
    else
    {
        while (*TempStr1)
        {

            if (*TempStr1 == *TempStr2)
            {
                leng += 1;
                TempStr2++;
                TempStr1++;
            }
            else
            {

                if (*TempStr2 == '\0')
                {
                    break;
                }
                else
                {
                    TempStr2++;
                }
            }
        }
    }
    return leng;
}

char *STRSTR(const char *STRI1, const char *STRI2)
{
    char *TempStri1 = (char *)STRI1;
    char *TempStri2 = (char *)STRI2;
    char *TempS = NULL;

    while (*TempStri1)
    {
        while (*TempStri2++)
        {
            if (*TempStri1 == *TempStri2)
            {
                TempS = TempStri2;
                break;
            }
        }
        TempStri2++;
    }
    return TempS;
}
char *STRTOKEN(char *StrAddress, const char *TOk) // add validation
{

    char *TempStr = (char *)StrAddress;
    char *Temp = (char *)TOk;
    char len = 0;
    len = STRLEN(TempStr);
    while (len--)
    {
        if (*TempStr == *Temp)
        {
            *TempStr = '\n';
        }
        TempStr++;
    }
    return StrAddress;
}
size_t STRXFRM(char *DesAddress, const char *SrcAddress, size_t MaxNoChar) // add validation
{

    char *TempSrc = (char *)SrcAddress;
    char *TempDes = (char *)DesAddress;
    size_t LenRet = 0;

    while (*TempSrc && MaxNoChar > 0)
    {
        *TempDes++ = *TempSrc++;
        MaxNoChar--;
    }

    TempDes = (char *)DesAddress;
    while (*TempDes != '\0')
    {
        LenRet += 1;

        TempDes++;
    }
    return LenRet;
}
