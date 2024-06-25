#include<stdio.h>

	int	ft_str_is_numeric(char *str)
    {
        int i = 0;

        while(str[i])
        {
            if(str[i] <= '9' && str[i] >= '0')
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
        char str[] = "123 ?%4";
        printf("%d", ft_str_is_numeric(str));
    }*/