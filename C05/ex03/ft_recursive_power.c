/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:46:48 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/28 14:46:48 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
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
    if (power > 1)
    {
        nb = (nb * ft_recursive_power(nb, power - 1));
    }
    return (nb);
}