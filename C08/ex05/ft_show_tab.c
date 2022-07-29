/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 08:33:11 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/29 08:33:11 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"


void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        ft_putchar(&str[i]);
        i++;
    }
}

void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        nb = 147483648;
    }
    if (nb < 0)
    {
        nb = nb * (-1);
        ft_putchar('-');
    }
    if (nb >= 10)
    {
        ft_putnbr (nb / 10);
        ft_putnbr (nb % 10);
    }
    if (nb <= 9)
    {
        ft_putchar (nb + '0');
    }
}

void    ft_show_tab(struct s_stock_str *par)
{
    int i;
    
    i = 0;
    while (par[i].str != 0)
    {
        ft_putstr(par[i].str);
        write(1, "\n", 1);
        ft_putnbr(par[i].size);
        write(1, "\n", 1);
        ft_putstr(par[i].copy);
        write(1, "\n", 1);
    }
}