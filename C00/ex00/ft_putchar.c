#include<unistd.h>

int main(char c)
{
    write(1, &c, 1);
}