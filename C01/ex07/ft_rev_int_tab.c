#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
    int first = 0;
    int last = size - 1;
    int tmp;

    while(first < last)
    {
        tmp = tab[first];
        tab[first] = tab[last];
        tab[last] = tmp;
        first++;
        last--;
    }
}

/*int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    ft_rev_int_tab(arr, size);

    printf("%d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4]);
}*/