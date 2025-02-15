/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:59:03 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/28 14:59:03 by rode-alb         ###   ########.fr       */
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