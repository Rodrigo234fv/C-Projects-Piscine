void    ft_ultimate_div_mod(int *a, int *b)
{
    int div;
    int mod;

    div = *a / *b;
    mod = *a % *b;
    *a = div;
    *b = mod;

}
#include <stdio.h>
int main(void)
{
    int a = 10;
    int b = 1;

    ft_ultimate_div_mod(&a, &b);

    printf("The division of a and b will be stored in a ==> %d\n", a);
    printf("The module of a and b will be stored in b ==> %d\n", b);

}