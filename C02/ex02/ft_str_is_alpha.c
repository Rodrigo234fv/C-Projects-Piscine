int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || str[i] >= 'a' && str[i] <= 'z')
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

    str = "Boli1nha";
    
    printf("is alpha: %d\n", ft_str_is_alpha(str));
    return 0;
}