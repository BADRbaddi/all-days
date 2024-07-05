#include<stdio.h>

char	*ft_strcapitalize(char *str)
{
    int i = 0;

    while(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
    {
        if(i == 0 && str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        if(i > 0 && str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        i++;
    }
    return str;
}
/*int main()
{
    char str[] = "Sldf 73753";

    ft_strcapitalize(str);
    printf("%s", str);
}*/