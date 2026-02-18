#include<stdio.h>
 
void StrCpyX(char *src, char *dest)
{
    int i = 0, j = 0;
 
    while(src[i] != '\0')
    {
        if(src[i] != ' ')
        {
            dest[j] = src[i];
            j++;
        }
        i++;
    }
    dest[j] = '\0';
   
}
 
int main()
{
    char arr[30] = "Ma  rve  llou  s Py th  on";
    char brr[30];
 
    StrCpyX(arr,brr);
 
    printf("%s",brr);
 
    return 0;
    
}