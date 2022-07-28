/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:42:37 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/28 14:42:37 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
    int i;
    int init_val;

    init_val = nb;
    i = 1;
    if (power < 0)
    {
        return (0);
    }
    if (power == 0)
    {
        return (1);
    }
    if (power == 1)
    {
        return (nb);
    }
    while (i < power)
    {
        nb = nb * init_val;
        i++;
    }
    return (nb);
}

//Used the FakeMoulinette main to test it :)