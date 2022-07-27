char *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    return (str);
}

#include <stdio.h>
int main (void)
{
    char str[] = "Baguette 42!";

    ft_strupcase(str);
    
    printf("transforms into uppercase: %s\n", str);
    return 0;
}