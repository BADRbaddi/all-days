#include<stdio.h>

int	ft_is_prime(int nb)
{
    int i = 2;

    if(nb < 2)
    {
        return 0;
    }
    while(i <= nb / 2)
    {
        if(nb % i == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}

/*int main()
{
    int nbr = 1;

    if(ft_is_prime(nbr) == 1)
    {
        printf("the number %d is prime", nbr);
    }
    else
    printf("the number %d is not prime", nbr);
}*/