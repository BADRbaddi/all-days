#include<unistd.h>
#include<stdio.h>

int    ft_fibonacci(int index)
{
    int    res;

    res = 0;
    if (index < 0)
        return (-1);
    else if (index < 2)
        return (index);
    res = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
    return (res);
}
/*int main()
{
    int a = 5;
    int i = 0;
    
    while(i <= a)
    {
        printf("fibonacci(%d) = %d\n", i, ft_fibonacci(i));
        i++;
    }
}*/