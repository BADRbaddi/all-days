#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
    int i = 0;

    while(str[i])
    {
        if(str[i] <= 'z' && str[i] >= 'a' || str[i] <= 'Z' && str[i] >= 'A')
        {
            i++;
        }
        else
        return(0);
    }
    return(1);
}
/*int main()
{
    char str[] = "bbbb";
    int gg = ft_str_is_alpha(str);

    printf("%d", gg);
}*/