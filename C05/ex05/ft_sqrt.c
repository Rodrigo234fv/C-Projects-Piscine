/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:53:20 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/28 14:53:20 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
    int a;

    a = 1;
    if (nb >= 1)
    {
        while (a * a <= nb)
        {
            if (a * a == nb)
                return (a);
            else if (a >= 46341) // This is the sqrt of the largest int
                return (0);
            a++;
        }
    }
    return (0);
}

#include <stdio.h>
int main(void)
{
    int nb;
    int a;

    nb = 256;
    a = ft_sqrt(nb);
    printf("nb: %d\nsqrt of nb: %d\n", nb, a);
    return 0;
}