#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}
/*int main()
{
    int a = 7;
    int b = 3;
    int q;
    int w;

    ft_div_mod(a, b, &q, &w);
    printf("%d\n", q);  // طباعة القسمة
    printf("%d\n", w);  // طباعة الباقي

    return 0;
}*/