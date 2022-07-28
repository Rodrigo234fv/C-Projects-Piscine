/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:33:09 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/28 14:33:09 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    int a;
    int i;

    i = 1;
    a = nb;
    if(nb < 0)
    {
        return (0);
    }
    if (nb == 0)
    {
        return (1);
    }
    while (a > i)
    {
        nb = nb * i;
        i++;
    }
    return (nb);
}

#include <stdio.h>

int main(void)
{
    int n;
    int res;

    n = -5;
    while(n <= 10)
    {
        res = ft_iterative_factorial(n);
        printf("n = %d, n! = %d\n", n, res);
        n++;
    }
    return 0;
}