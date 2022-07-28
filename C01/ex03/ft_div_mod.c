/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 09:45:14 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/28 09:45:14 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

#include <stdio.h>
int main(void)
{
    int div;
    int mod;

    int a = 120;
    int b = 2;

    ft_div_mod(a, b, &div, &mod);

    printf("a: %d & b: %d & The div: %d & The Module: %d", a ,b , div, mod);
}
