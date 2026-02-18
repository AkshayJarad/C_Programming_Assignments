#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
    int i = 0, j = 0;

    while(src[i] != '\0')
    {
        dest[j] = src[i];
        j++;
        i++;
    }
    dest[j] = '\0';
    j = 0;

    while(dest[j] != '\0')
    {
        if(dest[j] >= 'a' && dest[j] <= 'z')
        {
            dest[j] = dest[j] - 32;
        }
        j++;
    }

}

int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30];
    
    StrCpyCap(arr,brr);

    printf("%s",brr);

    return 0;
}