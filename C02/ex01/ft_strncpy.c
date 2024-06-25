#include<stdio.h>	
    char	*ft_strncpy(char *dest, char *src, unsigned int n)
    {
        int i = 0;

        while(src[i] && i < n)
        {
            dest[i] = src[i];
            i++;
        }
        while(i < n)
        {
            dest[i] = '\0';
            i++;
        }
    }
    /*int main()
    {
        char str1[] = "gggg";
        char str2[5];

        *ft_strncpy(str2, str1, 2);
        printf("%s", str2);
    }*/