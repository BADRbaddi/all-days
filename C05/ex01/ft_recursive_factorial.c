#include<unistd.h>
#include<stdio.h>

int	ft_recursive_factorial(int nb)
{
    int res = 1;

    if(nb < 0)
    {
        return 0;
    }
    else if(nb < 2)
    {
        return 1;
    }
    res = nb * ft_recursive_factorial(nb - 1);
    return res;
}
/*int main()
{
    int nbr = 5;

    printf("%d", ft_recursive_factorial(nbr));
}*/