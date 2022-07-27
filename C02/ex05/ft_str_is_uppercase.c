int ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
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

    str = "BBBHJJFZTTTVGHHKTVBGNKIBIVFUZF";
    
    printf("is alpha: %d\n", ft_str_is_uppercase(str));
    return 0;
}