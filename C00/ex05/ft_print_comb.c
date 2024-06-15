#include<unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_print_number(int n1, int n2, int n3)
{
    ft_putchar(n1);
   ft_putchar(n2);
    ft_putchar(n3);

    if(n1 < '7')
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
}
void	ft_print_comb2(void)
{
    int a, b, c;

    a = '0';
    while(a <= '7')
    {
        b = a +1;
        while(b <= '8')
        {
            c = b + 1;
            while(c <= '9')
            {
                ft_print_number(a, b, c);
                c++;
            }
            b++;
        }
        a++;
    }
}
