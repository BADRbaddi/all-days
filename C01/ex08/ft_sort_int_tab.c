#include <unistd.h>
#include<stdio.h>

void    ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
    int i = 0;

    while(i < size - 1)
    {
        if(tab[i] > tab[i + 1])
        {
            ft_swap(&tab[i], &tab[i + 1]);
            i = 0;
        }
        i++;
    }
}
/*int main()
{
    int arr[] = {1, 4, 2, 3, 17, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    ft_sort_int_tab(arr, size);

    printf("%d %d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);
}*/