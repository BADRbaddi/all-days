#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
    int res = 1;

    if(nb < 0)
    {
        return 0;
    }
    while(nb)
    {
        res *= nb--;
    }
    return res;
}
/*int main()
{
    int nb = 5;

    
    printf("%d",ft_iterative_factorial(nb));
}*/