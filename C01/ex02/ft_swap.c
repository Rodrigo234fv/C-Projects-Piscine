void ft_swap(int *a, int *b)
{
    int swap;

    swap = *a;
    *a = *b;
    *b = swap;
}

#include <stdio.h>

int main (void)
{
    int a;
    int b;

    a = 24;
    b = 3;

    ft_swap(&a , &b);

    printf("Value of a: %d & Value of b: %d", a ,b);
}