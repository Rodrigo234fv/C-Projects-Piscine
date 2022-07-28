/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 12:39:51 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/28 12:39:51 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check_base (char *base, char c)
{
    int i;

    i = 0;
    while (*base != '\0')
    {
        if (*base++ == c)
        {
            i++;
        }
    }
    if (i >= 2)
    {
        return (0);
    }
    return (1);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void str_print(unsigned int n, char *base, unsigned int size)
{
    if (n > size - 1)
    {
        str_print(n / size, base, size);
        n = n % size;
    }
    ft_putchar(base[n]);
}

void ft_putnbr_base(int nbr, char *base)
{
    int n;

    n = 0;
    while(base[n] != '\0')
    {
        if ((base[n] == '-' || base[n] == '+' || !check_base(base, base[n])))
        {
            return ;
        }
        n++;
    }
    if (n < 2)
        return ;
    if (nbr < 0)
    {
        ft_putchar('-');
        str_print(-nbr, base, n);
    }
    else
    {
        str_print(nbr, base, n);
    }
}