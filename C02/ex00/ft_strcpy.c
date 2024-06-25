#include<stdio.h>


   char		*ft_strcpy(char *dest, char *src)
   {
        int i = 0;

        while(src[i])
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
        return(dest);
   }
   /*int main()
   {
    char str1[] = "bbbb";
    char str2[5];
    *ft_strcpy(str2, str1);
    printf("%s", str2);
   }*/