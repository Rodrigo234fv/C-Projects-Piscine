#include <stdio.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}
int main (void)
{
    int i;

    ft_ft(&i);

    printf ("%d \n", i);
}