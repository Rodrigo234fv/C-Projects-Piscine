#include <unistd.h>

void hexadecimals(int i)
{
    char *hexa;

    hexa = "0123456789abcdef";
    write(1, &hexa[i / 16], 1);
    write(1, &hexa[i % 16], 1);
}

void ft_putstr_non_printable(char *str)
{
    int i;

    i = -1; //int -1 because if i is 0 the outupt has some weird chars at the end
    while (str[i + 1] != '\0')
    {
        if (str[i] < 32 || str[i] == 127)
        {
            write(1, "\\", 1);
            hexadecimals(str[i]);
        }
        else
        {
            write(1, &str[i], 1);
        }
        i++;
    }
}