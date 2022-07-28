/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:47:34 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/28 15:47:34 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;
    int a;
    int b;

    i = 0;
    while(s1[i] != '\0' && (s1[i] == s2[i]))
    {
        i++;
    }
    a = s1[i];
    b = s2[i];
    return (a - b);
}

void ft_sort_tab(char **tab, int size)
{
    int i;
    int j;
    char *temp;

    i = 1;
    while(i < size)
    {
        j = i + 1;
        while(j < size)
        {
            if (ft_strcmp(tab[j], tab[i]) < 0)
            {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
            j++;
        }
        i++;
    }
}
void ft_putchar(char *str)
{
    while (*str != '\0')
    {
        write(1, str++, 1);
    }
    write(1, "\n", 1);
}

int main(int argc, char **argv)
{
    int i;

    i = 1;

    ft_sort_tab(argv,argc);
    while (i < argc)
    {
        ft_putchar(argv[i]);
        i++;
    }
    return (0);
}