
#include <unistd.h>

int main (int argc, char **argv)
{
    int i;
    int n;
    i = 0;
    n = 0;


    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            if ((argv[1][i] > 64) && argv[1][i] < 91)
            {
                n = argv[1][i] - 64;
            }
            else if (argv[1][i] >= 'a' && argv[1][i] <= 'z') 
            {
                n = argv[1][i] - 96;
            }
            while (n > 0)
            {
                write(1, &argv[1][i], 1);
                n--;
                    
            }
            n = 1;
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}