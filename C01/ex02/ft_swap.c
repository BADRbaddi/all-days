#include<unistd.h>

void	ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *b;
    *b = *a;
    *a = tmp;
}
/*int main()
{
    int a = 33;
    int b = 66;

    ft_swap(&a, &b);
    printf("%d\n %d\n", a, b);//
}*/