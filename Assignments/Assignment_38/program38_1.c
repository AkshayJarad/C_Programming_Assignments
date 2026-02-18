#include<stdio.h>
 
void StrCpyRev(char *src, char *dest)
{
    int iLength = 0;
    int iCnt = 0;
 
    while(src[iLength] != '\0')
    {
        iLength++;
    }

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        dest[iCnt] = src[iLength - 1 - iCnt];

    }
    dest[iLength] = '\0';
 
   
}
 
int main()
{
    char arr[30] = "Marvellous Python";
    char brr[30];
 
    StrCpyRev(arr,brr);
 
    printf("%s",brr);
 
    return 0;
    
}