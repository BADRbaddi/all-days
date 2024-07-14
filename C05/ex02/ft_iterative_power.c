#include<unistd.h>
#include<stdio.h>

int	ft_iterative_power(int nb, int power)
{
    int res = 1;

    if(power < 0)
    {
        return 0;
    }
    while(power > 0)
    {
        res *= nb;
        power--;
    }
    return res;
}
/*int main()
{
    int nbr = 4;
    int power = 5;
    
    printf("%d", ft_iterative_power(nbr, power));
}*/