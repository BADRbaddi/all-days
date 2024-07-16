#include<unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int m;;

    if(ac > 1)
    {
        m = ac - 1;
        while(m < ac)
        {
            i = 0;
            while(av[m][i])
            {
                write(1, &av[m][i], 1);
                i++;
            }
            write(1, "\n", 1);
            m--;
        } 
    }
}