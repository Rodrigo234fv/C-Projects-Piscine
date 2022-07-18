#include <unistd.h>

void ft_print_numbers(void)
{
    char i;
    i = '0'; //Ascii position for 0
    while (i <= '9')
    {
        write(1, &i, 1);
        i++;
    }
}
int main(void)
{
    ft_print_numbers();
}