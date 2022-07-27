int ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!((str[i] <= 31) || str[i] == 127))
        {
            i++;
        }
        else
        {
            return (0);
        }
    }
    return (1);
}

#include <stdio.h>
int main (void)
{
    char *str;
    int i;

    str = "\n";
    
    printf("is alpha: %d\n", ft_str_is_printable(str));
    return 0;
}