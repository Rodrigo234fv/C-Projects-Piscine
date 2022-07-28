/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:10:37 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/28 18:10:37 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *pointer;
    int i;
    int range;

    range = max - min;
    i = 0;
    if (min >= max)
    {
        return (0);
    }
    pointer = (int*)malloc(range * sizeof(int));
    if (!pointer)
    {
        return (0);
    }
    while(i < range)
    {
        pointer[i] = min + i;
        i++;
    }
    return (pointer);
}