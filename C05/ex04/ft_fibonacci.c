/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:48:35 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/28 14:48:35 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
    int a;

    if (index == 0)
    {
        return (0);
    }
    else if (index == 1)
    {
        return (1);
    }
    else if (index > 1)
    {
        a = ft_fibonacci(index - 1) + ft_fibonacci (index - 2);
        return a;
    }
    else
    {
        return (-1);
    }
}
#include <stdio.h>
int main(void)
{
    int res;
    int index;

    index = 0;
    while (index < 15)
    {
        res = ft_fibonacci(index);
        printf("%d, ", res);
        index++;
    }
    res = ft_fibonacci(index);
    printf("%d, ", res);
    return 0;
}