/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 12:33:27 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/28 12:33:27 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
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
int main (void)
{
    ft_putnbr(-500);
}