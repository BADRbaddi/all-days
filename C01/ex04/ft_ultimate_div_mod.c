#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
    int tmp;

    tmp = *a / *b;
    *b = *a % *b;
    *a = tmp;
}
/*int main()
{
    int a = 4;
    int b = 6;

    ft_ultimate_div_mod(&a, &b);
    printf("%d\n%d\n", a, b);
}*\