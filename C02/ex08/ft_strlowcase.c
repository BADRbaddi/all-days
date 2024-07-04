#include<stdio.h>

char	*ft_strlowcase(char *str)
{
    int i = 0;

    while(str[i])
    {
        if(str[i] <= 'z' && str[i] >= 'a')
        {
            str[i] -= 32;
        }
        i++;
    }
    return str;
}
/*int main()
{
    char str[] = " fff 3424";

    ft_strlowcase(str);
    printf("%s", str);
}*/