#include <stdio.h>
#include <string.h>
#include "STRING.h"

char str1_1[45] = "mahmoud ibrahim Ellaban";
char str1_2[45] = "mahmoud ibrahim Ellaban";
char str2_1[45] = "abdelhman hassan";
char str2_2[45] = "abdelhman hassan";
char str3_1[45];
char str3_2[45];
const char str_const[45] = "a";
char *RetPtr = NULL;
char Ret = 0;

int main()
{
    /*----------------MEMCHR_TEST-----------------*/
    RetPtr = MEMCHR(str1_1, 'a', 10);
    printf("results of our MEMCHR is :%s\n", RetPtr);
    RetPtr = memchr(str1_2, 'a', 10);
    printf("results of memchr is     :%s\n", RetPtr);
    printf("-------------------------------------\n");
    /*----------------MEMCMP_TEST-----------------*/
    Ret = MEMCMP(str2_1, str1_1, 10);
    printf("results of our MEMCMP is :%d\n", Ret);
    Ret = memcmp(str2_2, str1_2, 10);
    printf("results of memcmp is     :%d\n", Ret);
    printf("-------------------------------------\n");
    /*----------------MEMCPY_TEST-----------------*/
    char str1_1[45] = "mahmoud ibrahim Ellaban";
    char str1_2[45] = "mahmoud ibrahim Ellaban";
    char str3_1[45];
    char str3_2[45];

    RetPtr = MEMCPY(str3_1, str2_1, 5);
    printf("results of our MEMCPY is :%s\n", RetPtr);
    RetPtr = memcpy(str3_2, str2_2, 5);
    printf("results of memcpy is     :%s\n", RetPtr);
    printf("-------------------------------------\n");
    /*----------------MEMMOV_TEST-----------------*/
    RetPtr = MEMMOV(str2_1, str1_1, 5);
    printf("results of our MEMMOV is :%s\n", RetPtr);
    RetPtr = memmove(str2_2, str1_2, 5);
    printf("results of memmov is     :%s\n", RetPtr);
    printf("-------------------------------------\n");
    /*----------------MEMSET_TEST-----------------*/
    MEMSET(str2_1, '*', 10);
    printf("results of our MEMSET is :%s\n", str2_1);
    memset(str2_2, '*', 10);
    printf("results of memset is     :%s\n", str2_2);
    printf("-------------------------------------\n");
    /*----------------STRCAT_TEST-----------------*/
    RetPtr = STRCAT(str1_1, str2_1);
    printf("results of our STRCAT is :%s\n", RetPtr);
    RetPtr = strcat(str1_2, str2_2);
    printf("results of strcat is     :%s\n", RetPtr);
    printf("-------------------------------------\n");
    /*----------------STRnCAT_TEST-----------------*/
    RetPtr = STRnCAT(str1_1, str2_1, 5);
    printf("results of our STRCAT is :%s\n", RetPtr);
    RetPtr = strncat(str1_2, str2_2, 5);
    printf("results of strcat is     :%s\n", RetPtr);
    printf("-------------------------------------\n");
    /*----------------STRCHR_TEST-----------------*/
    RetPtr = STRCHR(str1_1, 'b');
    printf("results of our STRCHR is :%s\n", RetPtr);
    RetPtr = strchr(str1_2, 'b');
    printf("results of strchr is     :%s\n", RetPtr);
    printf("-------------------------------------\n");
    /*----------------STRCMP_TEST-----------------*/
    Ret = STRCMP(str1_1, str2_1);
    printf("results of our STRCMP is :%d\n", Ret);
    if (Ret > 0)
    {
        printf("str1_1 bigger than str2_1\n");
    }
    else if (Ret < 0)
    {

        printf("str1_1 less than str2_1\n");
    }
    else
    {
        printf("str1_1 equal str2_1\n");
    }

    Ret = strcmp(str1_2, str2_2);
    printf("results of strcmp is     :%d\n", Ret);
    if (Ret > 0)
    {
        printf("str1_2 bigger than str2_2\n");
    }
    else if (Ret < 0)
    {

        printf("str1_2 less than str2_2\n");
    }
    else
    {
        printf("str1_2 equal str2_2\n");
    }

    printf("-------------------------------------\n");

    /*----------------STRnCMP_TEST-----------------*/
    Ret = STRnCMP(str1_1, str2_1, 5);
    printf("results of our STRnCMP is :%d\n", Ret);
    if (Ret > 0)
    {
        printf("str1_1 bigger than str2_1\n");
    }
    else if (Ret < 0)
    {

        printf("str1_1 less than str2_1\n");
    }
    else
    {
        printf("str1_1 equal str2_1\n");
    }

    Ret = strncmp(str1_2, str2_2, 5);
    printf("results of strncmp is     :%d\n", Ret);
    if (Ret > 0)
    {
        printf("str1_2 bigger than str2_2\n");
    }
    else if (Ret < 0)
    {

        printf("str1_2 less than str2_2\n");
    }
    else
    {
        printf("str1_2 equal str2_2\n");
    }

    printf("-------------------------------------\n");
    // /*----------------STRCOLL_TEST-----------------*/
    // Ret = STRCOLL(str1_1, str2_1);
    // printf("results of our STRCOOL is :%d\n", Ret);
    // Ret = strcoll(str1_2, str2_2);
    // printf("results of strcoll is     :%d\n", Ret);
    // printf("-------------------------------------\n");
    /*----------------STRCPY_TEST-----------------*/
    RetPtr = STRCPY(str1_1, str2_1);
    printf("results of our STRCPY is :%s\n", RetPtr);
    RetPtr = strcpy(str1_2, str2_2);
    printf("results of strcpy is     :%s\n", RetPtr);
    printf("-------------------------------------\n");
    /*----------------STRnCPY_TEST-----------------*/
    RetPtr = STRnCPY(str1_1, str2_1, 10);
    printf("results of our STRnCPY is :%s\n", RetPtr);
    RetPtr = strncpy(str1_2, str2_2, 10);
    printf("results of strncpy is     :%s\n", RetPtr);
    printf("-------------------------------------\n");
    /*----------------STRCSPN_TEST-----------------*/
    Ret = STRCSPN(str1_1, str2_1);
    printf("results of our STRCSPN is :%d\n", Ret);
    Ret = strcspn(str1_2, str2_2);
    printf("results of strcspn is     :%d\n", Ret);
    printf("-------------------------------------\n");
    /*----------------STRrCHR_TEST-----------------*/
    RetPtr = STRrCHR(str1_1, 'a');
    printf("results of our STRrCHR is :%s\n", RetPtr);
    RetPtr = strrchr(str1_2, 'a');
    printf("results of strrchr is     :%s\n", RetPtr);
    printf("-------------------------------------\n");
    /*----------------STRLEN_TEST-----------------*/
    Ret = STRLEN(str1_1);
    printf("results of our STRLEN is :%d\n", Ret);
    Ret = strlen(str1_2);
    printf("results of strlen is     :%d\n", Ret);
    printf("-------------------------------------\n");
    /*----------------STRSPN_TEST-----------------*/
    Ret = STRSPN(str1_1, str2_1);
    printf("results of our STRSPN is :%d\n", Ret);
    Ret = strspn(str1_2, str2_2);
    printf("results of strspn is     :%d\n", Ret);
    printf("-------------------------------------\n");
    // /*----------------STRSTR_TEST-----------------*/
    // RetPtr = STRSTR(str1_1, str2_1);
    // printf("results of our SSTRSTR is :%s\n", RetPtr);
    // RetPtr = strstr(str1_2, str2_2);
    // printf("results of strstr is      :%s\n", RetPtr);
    // printf("-------------------------------------\n");
    /*----------------STRTOKEN_TEST-----------------*/
    RetPtr = STRTOKEN(str1_1, str_const);
    printf("results of our STRTOKEN is :%s\n", RetPtr);
    RetPtr = strtok(str1_2, str_const);
    printf("results of strtok is       :%s\n", RetPtr);
    printf("-------------------------------------\n");
    /*----------------STRXFRM_TEST-----------------*/
    printf("%s\n", str1_1);
    Ret = STRXFRM(str1_1, str2_1, 10);
    printf("results of our STRXFRM is :%d\n", Ret);
    printf("%s\n", str1_1);
    Ret = strxfrm(str1_2, str2_2, 10);
    printf("results of strxfrm is     :%d\n", Ret);
    printf("-------------------------------------\n");

    return 0;
}