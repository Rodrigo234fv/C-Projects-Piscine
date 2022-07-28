/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:01:07 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/28 15:01:07 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_is_prime(int nb)
{
    int i;

    i = 2;
    if (nb < 2)
    {
        return (0);
    }
    while (i < nb)
    {
        if (nb % i != 0)
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

int ft_find_next_prime(int nb)
{
    while (ft_is_prime (nb) == 0)
    {
        nb++;
    }
    return (nb);
}

#include <stdio.h>

int main(void)
{
    int i = -5;

    i = ft_find_next_prime(i);

    printf("%d", i);
}